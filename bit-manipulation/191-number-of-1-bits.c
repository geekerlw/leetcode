#include <stdio.h>
#include <stdint.h>

// solution method
int hammingWeight(uint32_t n) {
	int count = 0;
	while(n) {
		n &= (n -1);
		count++;
	}
	return count;
}

// function test
void main() {
	uint32_t x = 11;
	printf ("The input is: %d\n", x);
	int ret = hammingWeight(x);
	printf ("The output is: %d\n", ret);
}
