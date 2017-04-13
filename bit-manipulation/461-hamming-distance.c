#include <stdio.h>

// solution method
int hammingDistance(int x, int y) {
    int result = 0;
    int count = 0;
    result = x^y;
    while(result>0) {
        if((result % 2) == 1) {
            count++;
        }
        result = result>>1;
    }
    return count;
}

// function test
void main() {
	int input_x = 1, input_y = 4;
	int ret;
	ret = hammingDistance(input_x, input_y);
	printf("input x and y is : %d %d\n", input_x, input_y);
	printf("The hamming distance between x and y is: %d\n", ret);
}

