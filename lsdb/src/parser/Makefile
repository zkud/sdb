# Makefile for flex & bison
LEX = flex
YACC = bison

all: pmysql.cpp pmysql.tab.cpp pmysql.tab.hpp
	echo "ok"
	
pmysql.tab.cpp pmysql.tab.hpp: pmysql.y
	${YACC} -vd pmysql.y;\
	mv pmysql.tab.c pmysql.tab.cpp;\
	mv pmysql.tab.h pmysql.tab.hpp
	
pmysql.cpp: pmysql.l
	${LEX} -o $*.cpp $<
	
clean:
	rm pmysql.cpp pmysql.output pmysql.tab.cpp pmysql.tab.hpp
