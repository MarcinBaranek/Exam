build:
	gcc main.c random.c domain.c domain.h euler.c euler.h euler_increments.c euler_increments.h tests.c tests.h derivative.c derivative.h milstein_corrections.c milstein_corrections.h milstein.c milstein.h -lm
	mv *.h.gch ./out
	mv a.out ./out/main

execute:
	./out/main

run: build execute
