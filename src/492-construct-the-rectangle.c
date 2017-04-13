#include <stdio.h>
#include <math.h>
#include <stdlib.h>

/**
 * Return an array of size *returnSize.
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* constructRectangle(int area, int* returnSize) {
    int* ret = (int *)malloc(sizeof(int) * 2);
    *returnSize = 2;
    *(ret+1) = (int)sqrt(area);
    while(area % (*(ret+1)) != 0) {
        (*(ret+1))--;
    }
    *(ret) = area / (*(ret+1));
    return ret;
}

void main() {
	int input = 2;
	int size;
	int* ret = constructRectangle(input, &size);
	printf("the length and width is: %d %d\n", *ret, *(ret+1));
	free(ret);
}
