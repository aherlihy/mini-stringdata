nclude "util.h"
#include <string>
#include <stdio.h>

Util::Util() {
	_myTest = Test();
}
Util::~Util() {

}

void Util::use_test() {
	_myTest.cpp_func1();
	_myTest.inl_func1();
}
