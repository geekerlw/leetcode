#include <stdio.h>
#include <stdlib.h>

int cmp (const void * a, const void * b) {
  	return ( *(int*)a - *(int*)b );
}

int findPairs(int* nums, int numsSize, int k) {
  int result = 0;
  	qsort(nums, numsSize, sizeof(int), cmp);
  	for(int i = 0;i < numsSize-1;i++) {
    	int j = i+1;
    	while(j < numsSize-1 && nums[j] == nums[j+1])
      		j++;
    	for(;j < numsSize;j++) {
      		if(abs(nums[i] - nums[j]) == k) {
        		result++;
        		break;
      		}
   		}
    	while(i < numsSize-1 && nums[i] == nums[i+1])
     		i++;
  	}
  	return result;
}

void main() {
	int input[] = {1, 2, 3, 4, 5};
	int k = 1;
	printf("the output is: %d\n", findPairs(input, sizeof(input)/sizeof(int), k));
}
