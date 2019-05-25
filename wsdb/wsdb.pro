TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
        main.cpp \
    src/core/any.cpp \
    src/core/anyclass.cpp \
    src/core/anyvalue.cpp \
    src/core/comparisonoperation.cpp \
    src/core/createoperation.cpp \
    src/core/deleteoperation.cpp \
    src/core/divoperation.cpp \
    src/core/dropoperation.cpp \
    src/core/float64.cpp \
    src/core/insertoperation.cpp \
    src/core/integer.cpp \
    src/core/muloperation.cpp \
    src/core/name.cpp \
    src/core/operation.cpp \
    src/core/predicate.cpp \
    src/core/relation.cpp \
    src/core/selectoperation.cpp \
    src/core/suboperation.cpp \
    src/core/sumoperation.cpp \
    src/core/syncronization.cpp \
    src/core/text.cpp \
    src/core/whereoperation.cpp \
    src/exceptions/filedoesntexistexception.cpp \
    src/exceptions/incorrectargsexception.cpp \
    src/exceptions/toobignameexception.cpp \
    src/exceptions/unsupportedtypeexception.cpp \
    src/fs/dm.cpp \
    src/fs/relationfile.cpp \
    src/parser/interpreter.cpp \
    src/parser/pmysql.cpp \
    src/parser/pmysql.tab.cpp \
    src/tests.cpp

HEADERS += \
    src/core/any.h \
    src/core/anyclass.h \
    src/core/anyvalue.h \
    src/core/comparisonoperation.h \
    src/core/createoperation.h \
    src/core/deleteoperation.h \
    src/core/divoperation.h \
    src/core/dropoperation.h \
    src/core/float64.h \
    src/core/insertoperation.h \
    src/core/integer.h \
    src/core/muloperation.h \
    src/core/name.h \
    src/core/operation.h \
    src/core/predicate.h \
    src/core/relation.h \
    src/core/selectoperation.h \
    src/core/suboperation.h \
    src/core/sumoperation.h \
    src/core/syncronization.h \
    src/core/text.h \
    src/core/whereoperation.h \
    src/exceptions/filedoesntexistexception.h \
    src/exceptions/incorrectargsexception.h \
    src/exceptions/toobignameexception.h \
    src/exceptions/unsupportedtypeexception.h \
    src/fs/dm.h \
    src/fs/relationfile.h \
    src/parser/interpreter.h \
    src/parser/pmysql.l \
    src/parser/pmysql.tab.hpp \
    src/parser/pmysql.y \
    src/tests.h
