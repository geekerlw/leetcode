#include <stdio.h>

int addDigits(int num) {
    int res = num % 9;
    return (res != 0 || num == 0) ? res : 9;
}

void main() {
	int input = 38;
	printf("the output is: %d\n", addDigits(input));
}
