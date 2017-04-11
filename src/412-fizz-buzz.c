#include <stdio.h>
#include <stdlib.h>

/**
 * Return an array of size *returnSize.
 * Note: The returned array must be malloced, assume caller calls free().
 */
char** fizzBuzz(int n, int* returnSize) {
	char** ret = (char **)malloc(sizeof(char *) * n);
	for(int i = 0; i < n; i++) {
		ret[i] = (char *)malloc(sizeof(char) * 10);
	}
	for(int i = 0; i < n; i++) {
		if((i+1) % 15 == 0) {
			*(ret+i) = "FizzBuzz";
		}
		else if((i+1) % 3 == 0) {
			*(ret+i) = "Fizz";
		}
		else if((i+1) % 5 == 0) {
			*(ret+i) = "Buzz";
		}
		else {
			sprintf(*(ret+i), "%d", i+1);
		}
	}
	*returnSize = n;
	return ret;
}

void main() {
	int input = 15;
	int* size = (int *)malloc(sizeof(int));
	char** ret = fizzBuzz(input, size);
	printf("Return: \n[\n");
	for(int i = 0; i < *size; i++) {
		printf("  \"%s\"\n", *(ret+i));
	}
	printf("]\n");
	printf("the output array size is: %d\n", *size);
}
