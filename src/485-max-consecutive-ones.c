#include <stdio.h>

int findMaxConsecutiveOnes(int* nums, int numsSize) {
	int max = 0;
	int cur = 0;
	for(int i = 0; i < numsSize; i++) {
		if(*(nums+i) & 1) {
			max = max > ++cur ? max : cur;
		}
		else {
			cur = 0;
		}
	}
	return max;
}
    
void main() {
	int input[] = {1, 1, 0, 1, 1, 1};
	int *p = input;
	int ret = findMaxConsecutiveOnes(p, sizeof(input)/sizeof(int));
	printf("the output is: %d\n", ret);
}
