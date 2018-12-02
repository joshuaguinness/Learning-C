program: squares.o invsq.o invsq2.o countfib.o
	gcc -o program squares.o invsq.o invsq2.o countfib.o
squares.o: squares.c
	gcc -c squares.c
invsq.o: invsq.c
	gcc -c invsq.c
invsq2.o: invsq2.c
	gcc -c invsq2.c
countfib.o: countfib.c
	gcc -c countfib.c
clean:
	rm *.o program
