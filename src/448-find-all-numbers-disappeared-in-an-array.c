#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/**
 * Return an array of size *returnSize.
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* findDisappearedNumbers(int* nums, int numsSize, int* returnSize) {
	int* ret = (int *)malloc(sizeof(int) * numsSize);
	int index = 0;
	for(int i = 0; i < numsSize; i++) {
		int val = abs(*(nums+i)) - 1;
		if(*(nums+val) > 0) {
			*(nums+val) = -*(nums+val);
		}
	}
	for(int i = 0; i < numsSize; i++) {
		if(*(nums+i) > 0) {
			ret[index] = i + 1;
			index++;
		}
	}
	*returnSize = index;
	return ret;
}

void main() {
	int numsSize = 8;
	int input[] = {4, 3, 2, 7, 8, 2, 3, 1};
	int* p = input;
	int* size = (int *)malloc(sizeof(int));
	int* ret = findDisappearedNumbers(p, numsSize, size);
	printf("the output array size is: %d\nthe array is: \n", *size);
	for(int i = 0; i < *size; i++) {
		printf("  %d", *(ret+i));
	}
	printf("\n");
	free(size);
	free(ret);
}
	
