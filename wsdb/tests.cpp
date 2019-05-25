#include <iostream>

// ALGEBRA
#include "src/core/float64.h"
#include "src/core/integer.h"
#include "src/core/text.h"

#include "src/core/relation.h"

// INTERPRETER
#include "src/parser/interpreter.h"

// FILEIO
#include "src/fs/dm.h"
#include "src/fs/relationfile.h"

#include <memory>

using namespace std;

void output(std::string message, sdb::Relation& rel1, sdb::Relation& rel2)
{
    cout << message << endl
         << "1:" << endl << rel1.toString()
         << "2:" << endl << rel2.toString();
}

void testAlgebra()
{
    using sdb::Text;
    using sdb::Float64;
    using sdb::Integer;
    cout << "Cout works?" << endl;

    sdb::Header header1 = {
        {"student", 0},
        {"height", 1},
        {"score", 2}
    };

    sdb::BodyElement el1 = {std::make_shared<Text>("student1"),
                            std::make_shared<Float64>(0),
                            std::make_shared<Integer>(0)};

    sdb::BodyElement el2 = {std::make_shared<Text>("student2"),
                            std::make_shared<Float64>(1),
                            std::make_shared<Integer>(1)};

    sdb::BodyElement el3 = {std::make_shared<Text>("student3"),
                            std::make_shared<Float64>(2),
                            std::make_shared<Integer>(2)};

    sdb::BodyElement el4 = {std::make_shared<Text>("student4"),
                            std::make_shared<Float64>(3),
                            std::make_shared<Integer>(3)};

    sdb::BodyElement el5 = {std::make_shared<Text>("studenta"),
                            std::make_shared<Float64>(4),
                            std::make_shared<Integer>(4)};

    sdb::BodyElement el6 = {std::make_shared<Text>("studentb"),
                            std::make_shared<Float64>(5),
                            std::make_shared<Integer>(5)};

    sdb::BodyElement el7 = {std::make_shared<Text>("studentc"),
                            std::make_shared<Float64>(6),
                            std::make_shared<Integer>(6)};

    sdb::BodyElement el8 = {std::make_shared<Text>("studentd"),
                            std::make_shared<Float64>(7),
                            std::make_shared<Integer>(7)};

    sdb::Body body1 {
        el1, el2, el3, el4
    };
    sdb::Types types1 = {
        {"student", sdb::types::TEXT},
        {"height", sdb::types::FLOAT64},
        {"score", sdb::types::INTEGER}
    };

    sdb::Header header2 = {
        {"student", 0},
        {"height", 1},
        {"score", 2}
    };
    sdb::Body body2 {
        el5, el6, el7, el8
    };
    sdb::Types types2 = {
        {"student", sdb::types::TEXT},
        {"height", sdb::types::FLOAT64},
        {"score", sdb::types::INTEGER}
    };

    sdb::Relation rel1(header1, body1, types1);
    sdb::Relation rel2(header2, body2, types2);

    output("before anything:", rel1, rel2);

    rel1.merge(rel2);

    output("after merge:", rel1, rel2);

    rel1.subtraction(rel2);

    output("after subtraction", rel1, rel2);

    rel2.merge(rel1);
    rel2.conjuction(rel1);

    output("after conjuction", rel1, rel2);

    rel2.where(
                [&](const sdb::BodyElement& value)
     {
        auto pointer = dynamic_pointer_cast<Text>(value[0]);
        return pointer->getValue() == std::string("student1");
     }
     );

    output("after whereing", rel1, rel2);

    rel1.projection({"student"});

    output("after projection", rel1, rel2);

    rel1.renameAttribute("student", "newStudent");

    output("after renaming", rel1, rel2);

    // rel1.time(rel2);

    // output("after cartesian product", rel1, rel2);

    rel1.join(
                rel2,
                [&](const sdb::BodyElement& value)
    {
        auto pointer1 = dynamic_pointer_cast<Text>(value[rel1.indexOfAttribute("newStudent")]);
        auto pointer2 = dynamic_pointer_cast<Text>(value[rel1.indexOfAttribute("student")]);

        return pointer1->getValue() == pointer2->getValue();
    }
    );

    output("after join product", rel1, rel2);
}

int testParser()
{
    sdb::Interpreter interpreter;
    interpreter.work();

    return 0;
}

void testIO3()
{
    using sdb::RelationFile;
    using sdb::DataManager;

    using sdb::Text;
    using sdb::Float64;
    using sdb::Integer;
    cout << "Cout works?" << endl;

    sdb::Header header1 = {
        {"student", 0},
        {"height", 1},
        {"score", 2}
    };

    sdb::BodyElement el1 = {std::make_shared<Text>("student1"),
                            std::make_shared<Float64>(0),
                            std::make_shared<Integer>(0)};

    sdb::BodyElement el2 = {std::make_shared<Text>("student2"),
                            std::make_shared<Float64>(1),
                            std::make_shared<Integer>(1)};

    sdb::BodyElement el3 = {std::make_shared<Text>("student3"),
                            std::make_shared<Float64>(2),
                            std::make_shared<Integer>(2)};

    sdb::BodyElement el4 = {std::make_shared<Text>("student4"),
                            std::make_shared<Float64>(3),
                            std::make_shared<Integer>(3)};

    sdb::Body body1 {
        el1, el2, el3, el4
    };
    sdb::Types types1 = {
        {"student", sdb::types::TEXT},
        {"height", sdb::types::FLOAT64},
        {"score", sdb::types::INTEGER}
    };

    sdb::Relation r(header1, body1, types1);

    cout << "relation in memory:" << endl
         << r.toString() << endl;

    DataManager db;

    db.createRelation("test", header1, types1);

    cout << "relation before operations:" << endl
         << db.select("test").toString() << endl;

    // check, how operations work

    db.insert("test", r);

    cout << "relation after insertion:" << endl << db.select("test").toString() << endl;

    auto pred = [&](const sdb::BodyElement& value)
     {
        auto pointer = dynamic_pointer_cast<Text>(value[0]);
        return pointer->getValue() == std::string("student1");
     };

    db.deleteFrom("test", pred);

    cout << "heh" << endl;
    cout << "relation after deletion:"  << endl << db.select("test").toString() << endl;

    db.dropRelation("test");
}


int testIO()
{
    using sdb::RelationFile;

    using sdb::Text;
    using sdb::Float64;
    using sdb::Integer;
    cout << "Cout works?" << endl;

    sdb::Header header1 = {
        {"student", 0},
        {"height", 1},
        {"score", 2}
    };

    sdb::BodyElement el1 = {std::make_shared<Text>("student1"),
                            std::make_shared<Float64>(0),
                            std::make_shared<Integer>(0)};

    sdb::BodyElement el2 = {std::make_shared<Text>("student2"),
                            std::make_shared<Float64>(1),
                            std::make_shared<Integer>(1)};

    sdb::BodyElement el3 = {std::make_shared<Text>("student3"),
                            std::make_shared<Float64>(2),
                            std::make_shared<Integer>(2)};

    sdb::BodyElement el4 = {std::make_shared<Text>("student4"),
                            std::make_shared<Float64>(3),
                            std::make_shared<Integer>(3)};

    sdb::Body body1 {
        el1, el2, el3, el4
    };
    sdb::Types types1 = {
        {"student", sdb::types::TEXT},
        {"height", sdb::types::FLOAT64},
        {"score", sdb::types::INTEGER}
    };

    sdb::Relation r(header1, body1, types1);

    cout << "relation in memory:" << endl
         << r.toString() << endl;

    // create rf, show content
    RelationFile rf = RelationFile::createRelationFile(header1, types1, "rf1.rf");

    cout << "relation before operations:" << endl
         << rf.select().toString() << endl;

    // check, how operations work

    rf.insert(r);

    cout << "relation after insertion:" << endl << rf.select().toString() << endl;

    auto pred = [&](const sdb::BodyElement& value)
     {
        auto pointer = dynamic_pointer_cast<Text>(value[0]);
        return pointer->getValue() == std::string("student1");
     };

    rf.deleteFrom(pred);

    cout << "heh" << endl;
    cout << "relation after deletion:"  << endl << rf.select().toString() << endl;

    return 0;
}

void testIO2()
{
    using sdb::RelationFile;

    RelationFile rf("rf1.rf");

    cout << "heh" << endl;
    cout << "relation:" << endl
         << rf.select().toString() << endl;

    using sdb::Text;
    using sdb::Float64;
    using sdb::Integer;
    cout << "Cout works?" << endl;

    sdb::Header header1 = {
        {"student", 0},
        {"height", 1},
        {"score", 2}
    };

    sdb::BodyElement el1 = {std::make_shared<Text>("student1"),
                            std::make_shared<Float64>(0),
                            std::make_shared<Integer>(0)};

    sdb::BodyElement el2 = {std::make_shared<Text>("student2"),
                            std::make_shared<Float64>(1),
                            std::make_shared<Integer>(1)};

    sdb::BodyElement el3 = {std::make_shared<Text>("student3"),
                            std::make_shared<Float64>(2),
                            std::make_shared<Integer>(2)};

    sdb::BodyElement el4 = {std::make_shared<Text>("student4"),
                            std::make_shared<Float64>(3),
                            std::make_shared<Integer>(3)};

    sdb::Body body1 {
        el1, el2, el3, el4
    };
    sdb::Types types1 = {
        {"student", sdb::types::TEXT},
        {"height", sdb::types::FLOAT64},
        {"score", sdb::types::INTEGER}
    };

    sdb::Relation r(header1, body1, types1);

    cout << "relation in memory:" << endl
         << r.toString() << endl;

    rf.insert(r);

    cout << "relation:" << endl
         << rf.select().toString() << endl;

}
