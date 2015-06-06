helloworld: main.o hello.o world.o
	gcc -o helloworld main.o hello.o world.o
main.o: main.c hello.h
	gcc -c main.c
hello.o: hello.c hello.h
	gcc -c hello.c
world.o: world.c hello.h
	gcc -c world.c
clean:
	rm main.o hello.o world.o helloworld -rf
