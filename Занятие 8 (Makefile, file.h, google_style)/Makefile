all:step1 step2 step3
step1:
	gcc -c calculator.c addition.c division.c logarithm.c multiplication.c subtraction.c
step2:
	gcc calculator.o addition.o division.o logarithm.o multiplication.o subtraction.o -o calculator -lm
step3:
	./calculator
