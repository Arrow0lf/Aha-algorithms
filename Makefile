main.exe:aha.o main.o
	g++ -o main.exe aha.o main.o

aha.o:aha.cpp aha.h
	g++ -c aha.cpp
	
main.o:main.cpp
	g++ -c main.cpp