// ConsoleApplication1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "BaseClass.h"
#include "Car.h"
#include <iostream>


void testMethod1(const Car& aCar) {
	std::cout << "testMethod1() called\n";

	//aCar.setModel("Green");  <-- compiler won't allow any calls to non-const methods

	std::cout << aCar.getModel() << std::endl;
	std::cout << "testMethod1() exited\n";
}

void testMethod2(Car& aCar) {
	std::cout << "testMethod2() called\n";
	aCar.setModel("Yellow");
	std::cout << "testMethod2() exited\n";
}

int main()
{
	Car car("Ford");
	Car& car2 = car;
	const Car& car3 = car;

	BaseClass B(1, 2);

	std::cout << "Hello World!\n\n";
	B.myMethod();
	std::cout << "\n";


	std::cout << "Car model in main() is " << car.getModel() << std::endl;

	car2.setModel("Pink");
	std::cout << "Car model in main() is " << car.getModel() << std::endl;

	//car3.setModel("Pink"); <-- Compiler complains
	//std::cout << "Car model in main() is " << car.getModel() << std::endl;


	//testMethod1(car);
	//std::cout << "Car model in main() is " << aCar.getModel() << std::endl;

	testMethod2(car);
	std::cout << "Car model in main() is " << car.getModel() << std::endl;

	std::cout << "Done\n\n";
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
