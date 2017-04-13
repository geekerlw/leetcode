#include <stdio.h>

void moveZeroes(int* nums, int numsSize) {
	if(numsSize == 0) {
		return;
	}
	int index = 0;
	for(int i = 0; i < numsSize; i++) {
		if(*(nums+i) != 0) {
			*(nums+index) = *(nums+i);
			index++;
		}	
	}
	while(index < numsSize) {
		*(nums+index) = 0;
		index++;
   	} 
}

void main() {
	int input[] = {0, 1, 0, 3, 12};
	int size = sizeof(input)/sizeof(int);
	moveZeroes(input, size);
	printf("the output array is:\n");
	for(int i = 0; i < size; i++) {
		printf(" %d", input[i]);
	}
	printf("\n");
}
