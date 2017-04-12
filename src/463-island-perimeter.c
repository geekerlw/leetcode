#include <stdio.h>
#include <stdlib.h>

int islandPerimeter(int** grid, int gridRowSize, int gridColSize) {
	int** p = grid;
	int ret = 0;
	for(int i = 0; i < gridRowSize; i++) {
		for(int j = 0; j < gridColSize; j++) {
			if(*(p[i]+j) == 1) {
				ret += 4;
				if(i > 0 && *(p[i-1]+j) == 1) {
					ret -= 2;
				}
				if(j > 0 && *(p[i]+j-1) == 1) {
					ret -= 2;
				} 
			}
		}
	}
	return ret;
}

void main() {
	int input[4][4] = {{0, 1, 0, 0}, { 1, 1, 1, 0}, {0, 1, 0, 0}, {1, 1, 0, 0}};
	int *index[4];
	for(int i = 0; i < 4; i++) {	
		index[i] = &input[i];
	}
	int** grid = &index[0];
	int result = islandPerimeter(grid, 4, 4);
	printf("the relust is: %d\n", result);
}

