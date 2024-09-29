all: lex yacc eval

lex: tinyC2_22CS10079_22CS10053.l
	lex tinyC2_22CS10079_22CS10053.l

yacc: tinyC2_22CS10079_22CS10053.y
	bison -Wcounterexamples -y -t -d --report=all tinyC2_22CS10079_22CS10053.y

eval: tinyC2_22CS10079_22CS10053.c
	gcc y.tab.c  tinyC2_22CS10079_22CS10053.c -o a.out

run:
	./a.out  input_22CS10079_22CS10053.c > output_22CS10079_22CS10053.txt

clean:
	rm -f lex.yy.c y.tab.c y.tab.h y.output a.out

