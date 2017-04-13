#include <stdio.h>

int singleNumber(int* nums, int numsSize) {
	int result = 0;
	for(int i = 0; i < numsSize; i++) {
		result ^= *(nums+i);
	}
	return result;
}

void main() {
	int input[] = {1,1,2};
	int *p = input;
	int ret = singleNumber(p, sizeof(input)/sizeof(int));
	printf("the output is: %d\n", ret);
}
