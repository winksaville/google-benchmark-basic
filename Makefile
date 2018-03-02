basic: ./lib/libbenchmark.a basic.o
	clang basic.o ./lib/libbenchmark.a -lstdc++ -lm -pthread -o basic

basic.o: basic.cc
	clang -std=c++11 -pthread -c basic.cc -o basic.o

run: basic
	sudo cpupower frequency-set --governor performance
	./basic
	sudo cpupower frequency-set --governor powersave

./lib/libbenchmark.a:
	make -C lib

.PHONY: clean
clean:
	rm -f basic.o basic

.PHONY: distclean
distclean: clean
	make -C lib distclean
