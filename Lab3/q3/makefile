exe: myMathFunc.o myStrFunc.o main.o
	gcc myMathFunc.o myStrFunc.o main.o -o exe

myMathFunc.o:myMathFunc.c myMath.h
	gcc -c myMathFunc.c

myStrFunc.o:myStrFunc.c myStr.h
	gcc -c myStrFunc.c

main.o:main.c myMath.h myStr.h
	gcc -c main.c
