humans: main.cpp Arm.o Human.o
	g++ -std=c++11 main.cpp Arm.o Human.o -o humans

Arm.o: Arm.cpp Arm.h
	g++ -c -std=c++11 Arm.cpp

Human.o: Human.cpp Human.h
	g++ -c -std=c++11 Human.cpp
