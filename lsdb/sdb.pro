TEMPLATE = app

QMAKE_CXXFLAGS += -std=c++17 -pthread
LIBS += -pthread

CONFIG += c++17
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += main.cpp \
    src/core/relation.cpp \
    src/core/any.cpp \
    src/core/anyvalue.cpp \
    src/core/anyclass.cpp \
    src/core/integer.cpp \
    src/core/float64.cpp \
    src/core/text.cpp \
    src/exceptions/incorrectargsexception.cpp \
    src/parser/pmysql.tab.cpp \
    src/parser/interpreter.cpp \
    src/parser/pmysql.cpp \
    src/core/operation.cpp \
    src/core/selectoperation.cpp \
    src/core/createoperation.cpp \
    src/core/dropoperation.cpp \
    src/core/whereoperation.cpp \
    src/core/insertoperation.cpp \
    src/core/deleteoperation.cpp \
    src/core/sumoperation.cpp \
    src/core/suboperation.cpp \
    src/core/divoperation.cpp \
    src/core/muloperation.cpp \
    src/core/comparisonoperation.cpp \
    src/fs/relationfile.cpp \
    src/exceptions/filedoesntexistexception.cpp \
    src/exceptions/toobignameexception.cpp \
    src/exceptions/unsupportedtypeexception.cpp \
    src/tests.cpp \
    src/fs/dm.cpp \
    src/core/predicate.cpp \
    src/core/name.cpp \
    src/core/syncronization.cpp

HEADERS += \
    src/core/relation.h \
    src/core/any.h \
    src/core/anyvalue.h \
    src/core/anyclass.h \
    src/core/integer.h \
    src/core/float64.h \
    src/core/text.h \
    src/exceptions/incorrectargsexception.h \
    src/parser/pmysql.y \
    src/parser/pmysql.l \
    src/parser/pmysql.tab.hpp \
    src/parser/interpreter.h \
    src/core/operation.h \
    src/core/selectoperation.h \
    src/core/createoperation.h \
    src/core/dropoperation.h \
    src/core/whereoperation.h \
    src/core/insertoperation.h \
    src/core/deleteoperation.h \
    src/core/sumoperation.h \
    src/core/suboperation.h \
    src/core/divoperation.h \
    src/core/muloperation.h \
    src/core/comparisonoperation.h \
    src/fs/relationfile.h \
    src/exceptions/filedoesntexistexception.h \
    src/exceptions/toobignameexception.h \
    src/exceptions/unsupportedtypeexception.h \
    src/fs/dm.h \
    src/core/predicate.h \
    src/core/name.h \
    src/core/syncronization.h \
    src/tests.h
