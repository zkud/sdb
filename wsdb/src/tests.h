#include <iostream>

// ALGEBRA
#include "core/float64.h"
#include "core/integer.h"
#include "core/text.h"

#include "core/relation.h"

// INTERPRETER
#include "parser/interpreter.h"

// FILEIO
#include "fs/dm.h"
#include "fs/relationfile.h"

#include <memory>

void output(std::string message, sdb::Relation& rel1, sdb::Relation& rel2);
void testAlgebra();
int testParser();
void testIO3();
void testIO2();
int testIO();
