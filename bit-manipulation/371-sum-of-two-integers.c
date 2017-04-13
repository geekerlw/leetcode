#include <stdio.h>

int getSum(int a, int b) {
	int sum = a;
	while(b != 0) {
		sum = a ^ b;
		b = (a & b) << 1;
		a = sum;
	}
	return sum;    
}

void main() {
	int a = 1;
	int b = 2;
	printf("the output is: %d\n", getSum(a, b));
}

