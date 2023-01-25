#include "BaseClass.h"


BaseClass::BaseClass(int aX, int aY) : x{ aX }, y{ aY } {
	// nothing to do.
}

void BaseClass::myMethod() {
	cout << "In BaseClass::myMethod()\n";
	
}

//int main2(int argc, char** args) {
//
//	BaseClass B(1,2);
//
//	B.myMethod();
//
//	cout << "Done.";
//	return 0;
//}
