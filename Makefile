CXXFLAGS= -Wall
objects = ComplexNumber.o Node.o List.o run_tests


run_tests: main.cpp
	g++ $(CXXFLAGS) -o run_tests main.cpp

List.o : List.cpp List.h
	g++ $(CXXFLAGS) -c -o List.o List.cpp

Node.o : Node.cpp Node.h
	g++ $(CXXFLAGS) -c -o Node.o Node.cpp	


ComplexNumber.o: ComplexNumber.cpp ComplexNumber.h
	g++ $(CXXFLAGS) -c -o ComplexNumber.o ComplexNumber.cpp



	


clean:
	rm $(objects) 
