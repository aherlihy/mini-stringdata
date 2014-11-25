#include <string>
#include <stdio.h>
#include "test.h"
#include <cmath>

int Test::cpp_func1() const {
	printf("this is a function defined in test.cpp\n");
	for(int x=0;x<10;x++) {
		if(x>=5) {
			printf("hi");
		}
	}
	return 1;
}
int Test::cpp_func2() const {
	printf("this is a function defined in test.cpp 2\n");
	return 2;
}

