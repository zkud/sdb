#ifndef RELATION_H
#define RELATION_H

#include <vector>
#include <list>
#include <string>
#include <unordered_map>
#include <typeindex>
#include <memory>

#include <set>
#include <algorithm>

#include <functional>

#include "anyclass.h"
#include "any.h"

#include "../exceptions/incorrectargsexception.h"

namespace sdb {

// body element has a such type cause need in dynamic cast and polymorthism
typedef std::vector<std::shared_ptr<Any>> BodyElement;
typedef std::unordered_map<std::string, size_t> Header;
typedef std::unordered_map<std::string, size_t> Types;
typedef std::vector<std::vector<std::shared_ptr<Any>>> Body;

struct BodyElementComparator {
   bool operator()(BodyElement const &a, BodyElement const &b) {
       // check a == b -> return false
       if (a.size() == b.size())
       {
           bool equalityResult = true;

           for (size_t counter = 0; (counter < a.size()) && equalityResult; counter++)
           {
                if(!b[counter]->operator==(*a[counter]))
                {
                    equalityResult = false;
                }
           }

           if (equalityResult)
           {
               return false;
           }
       }

       // do a lexicographical compare else
       auto comp = [&](const std::shared_ptr<Any>& that, const std::shared_ptr<Any>& other)
       {
           return that->operator <(*other);
       };

       return std::lexicographical_compare(a.begin(), a.end(), b.begin(), b.end(), comp);
   }

private:
   size_t min(size_t val1, size_t val2)
   {
       return val1 < val2? val1 : val2;
   }
};

/*
 * Relation from relational algebra type
*/

// TODO: optimizations of operations (deadlines make me code some shit)
class Relation
{
public:
    // after this constructor init body musn't be used!!!
    Relation(const Header& initHeader, const Body& initBody, const Types& initTypes);

    Relation(const Relation& other);

    ~Relation() {}

    Relation operator = (const Relation& other);
    std::string toString() const;

    // renames attribute in header & types to new name
    // *tested
    Relation renameAttribute(const std::string& prevName, const std::string& newName);

    // gives an index of element in bodyelement by name of attribute
    // *tested
    size_t indexOfAttribute(const std::string& name) const;

    /*
     * math operations over relations
     * WARNING!!! The all operations are mutable (for memory saving) !!!
    */
    // union
    // *tested
    Relation merge (const Relation& other);

    // *tested
    Relation conjuction (const Relation& other);

    // *tested
    Relation subtraction (const Relation& other);

    // cartesian product
    // *tested
    Relation time (const Relation& other);

    // *tested
    Relation where (std::function<bool(const std::vector<std::shared_ptr<Any>>&)> predicate);

    // *tested
    Relation projection(std::list<std::string> atrributes);

    // *tested
    Relation join(const Relation& other, std::function<bool(const std::vector<std::shared_ptr<Any>>&)> predicate);

    // sorry for that
    // I need this in serialization,
    // cuz it's hard to do in other style
    const Header& getHeader() const
    {
        return header;
    }

    const Body&   getBody() const
    {
        return body;
    }

    const Types&  getTypes() const
    {
        return types;
    }

private:
    Header header;
    Body body;
    Types types;
};

}

#endif // RELATION_H
