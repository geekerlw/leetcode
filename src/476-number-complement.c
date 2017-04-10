#include <stdio.h>

// solution method
int findComplement(int num) {
    unsigned int mask = ~0;
    while(num & mask) {
        mask <<= 1;
    }
    return ((~mask) & (~num));
}

// function test
void main() {
	int x = 5;
	printf("the input is: %d\n", x);
	int ret = findComplement(x);
	printf("the output is: %d\n", ret);
}
