#include "whereoperation.h"

bool sdb::binop::eq(std::shared_ptr<sdb::Any> a, std::shared_ptr<sdb::Any> b)
{
    return a->operator ==(*b);
}

bool sdb::binop::eqb(std::shared_ptr<sdb::Any> a, std::shared_ptr<sdb::Any> b)
{
    return eq(a, b) || bigger(a, b);
}

bool sdb::binop::eql(std::shared_ptr<sdb::Any> a, std::shared_ptr<sdb::Any> b)
{
    return eq(a, b) || less(a, b);
}

bool sdb::binop::less(std::shared_ptr<sdb::Any> a, std::shared_ptr<sdb::Any> b)
{
    return a->operator <(*b);
}

bool sdb::binop::bigger(std::shared_ptr<sdb::Any> a, std::shared_ptr<sdb::Any> b)
{
    return (!eq(a, b)) && (!less(a, b));
}

bool sdb::binop::neq(std::shared_ptr<sdb::Any> a, std::shared_ptr<sdb::Any> b)
{
    return !eq(a, b);
}
