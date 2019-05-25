#ifndef PREDICATE_H
#define PREDICATE_H

#include "anyclass.h"
#include <string>
#include <typeinfo>
#include <functional>
#include <vector>
#include <memory>
#include "relation.h"


#include "../exceptions/incorrectargsexception.h"

namespace sdb {
    typedef std::function<bool(const BodyElement&)> predicate;

/*
 * Functor container
*/

class Predicate : public sdb::AnyClass
{
public:
    Predicate(const predicate& initValue) : pred(initValue) {}
    Predicate(const Predicate& initValue) : pred(initValue.getValue()) {}
    ~Predicate() {}

    types::TypeIndex type() const override
    {
        return types::PREDICATE;
    }

    predicate getValue() const
    {
        return pred;
    }

    void setValue(const predicate& newValue)
    {
        pred = newValue;
    }

    std::string toString() const override
    {
        return std::string("predicate");
    }

    // can't do it :(
    bool operator ==(const Any& any) override
    {
        return false;
    }

    // can't do it so :(
    bool operator <(const Any& any) override
    {
        return false;
    }

private:
    predicate pred;
};

}

#endif // PREDICATE_H
