all: lex yacc eval

lex: tinyC2_22CS10079_22CS10053.l
	lex tinyC2_22CS10079_22CS10053.l

yacc: tinyC2_22CS10079_22CS10053.y
	yacc -d tinyC2_22CS10079_22CS10053.y

eval: tinyC2_22CS10079_22CS10053.c
	gcc y.tab.c  tinyC2_22CS10079_22CS10053.c -o a.out

run:
	./a.out  input_22CS10079_22CS10053.c

clean:
	rm -f lex.yy.c y.tab.c y.tab.h a.out

