#include <stdio.h>
#include <stdlib.h>

/**
 * Return an array of size *returnSize.
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* nextGreaterElement(int* findNums, int findNumsSize, int* nums, int numsSize, int* returnSize) {
	int* p = findNums;
	int* q = nums;
	int* ret = (int *)malloc(sizeof(int) * findNumsSize);
   	for(int i = 0; i < findNumsSize; i++) {
		for(int j = 0; j < numsSize; j++) {
			if(*(p+i) == *(q+j)) {
				int k = j;
				for(; k < numsSize; ++k) {
					if(*(q+k) > *(q+j)) {
						ret[i] = *(q+k);
						break;
					}
				}
				if(k == numsSize) {
					ret[i] = -1;
				}
			}
		}
	}
	*returnSize = findNumsSize;
	return ret;
}

void main() {
	//int nums1[] = {4, 1, 2};
	//int nums2[] = {1, 3, 4, 2};
	int nums1[] = {1, 3, 5, 2, 4};
	int nums2[] = {6, 5, 4, 3, 2, 1, 7};
	int len1 = sizeof(nums1)/sizeof(int);
	int len2 = sizeof(nums2)/sizeof(int);
	printf("the input nums1: \n");
	for(int i = 0; i < len1; i++) {
		printf(" %d", nums1[i]);
	}
	printf("\nthe input nums2: \n");
	for(int i = 0; i < len2; i++) {
		printf(" %d", nums2[i]);
	}
	int* returnSize = (int *)malloc(sizeof(int));
	int* ret = nextGreaterElement(nums1, len1, nums2, len2, returnSize);
	printf("\nthe output num array is: \n");
	for(int i = 0; i < *returnSize; i++) {
		printf(" %d", *(ret+i));
	}
	printf("\nthe output array size is: %d\n", *returnSize);
	free(returnSize);
	free(ret);
}	
