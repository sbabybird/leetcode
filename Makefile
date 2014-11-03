all: atoi reverse_integer

atoi: atoi.cpp
	g++ atoi.cpp -o atoi

reverse_integer: reverse_integer.cpp
	g++ reverse_integer.cpp -o reverse_integer


