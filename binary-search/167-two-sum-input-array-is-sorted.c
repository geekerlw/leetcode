#include <stdio.h>
#include <stdlib.h>

/**
 * Return an array of size *returnSize.
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* twoSum(int* numbers, int numbersSize, int target, int* returnSize) {
	int* ret = (int *)malloc(sizeof(int) * 2);
	int* start = numbers;
	int* end = numbers;
	for(int i = 0; i < numbersSize; i++) {
		for(int j = i + 1; j < numbersSize; j++) {
			if(*(start+i) + *(end+j) == target) {
				*ret = i + 1;
				*(ret+1) = j + 1;
				break;
			}
		}
	}
	*returnSize = 2;
	return ret;
}

void main() {
	int input[] = {2, 3, 4};
	int target = 6;
	int size = 0;
	int* ret = twoSum(input, sizeof(input)/sizeof(int), target, &size);
	printf("index1=: %d, index2=: %d\n", *ret, *(ret+1));
	free(ret);
}
