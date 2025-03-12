#include <iostream>
#include "test1.h"

namespace space {

int a = 1;

void func() {
	std::cout << "func()" << std::endl;
}

void Test1::f() {
	std::cout << "Test1::f()" << std::endl;
}

} //namespace space