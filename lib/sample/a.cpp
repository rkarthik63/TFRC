#include <iostream>
#include "a.h"

A::A() {
	std::cout << "Default Constructor" << std::endl;	
}

A::A(int a) : root(a) {
	std::cout << "Conversion Constructor" << std::endl;
}

int A::getRoot() const {
	return root;
}

void A::setRoot(int a) {
	root = a;
}
