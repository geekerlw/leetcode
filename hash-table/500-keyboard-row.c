#include <stdio.h>
#include <stdlib.h>

/* judge whether c is in the row */
int in_row(char *row, int length, char c) {
	for (int i = 0; i < length; i++) {
		int a = row[i];
		if(a == c || (a == c + 32)) {
			return 1;
		}
	}
	return 0;
}

/**
 * Return an array of size *returnSize.
 * Note: The returned array must be malloced, assume caller calls free().
 */
char** findWords(char** words, int wordsSize, int* returnSize) {
 	char a[10] = {'q', 'w', 'e', 'r', 't', 'y', 'u', 'i', 'o', 'p'};
	char b[9] = {'a', 's', 'd', 'f', 'g', 'h', 'j', 'k', 'l'};
    char c[7] = {'z', 'x', 'c', 'v', 'b', 'n', 'm'};   
	char **rows = (char **)malloc(sizeof(char *) * wordsSize);
	int size = 0;
	for(int i = 0; i < wordsSize; i++) {
		char *word = words[i];
		int j = 0;
		int row = 0;
		int in_one_row = 1;
		while (word[j] != '\0') {
			if (row == 0) {
				if(in_row(a, 10, word[j])) {
					row = 1;
					continue;
				}
				if(in_row(b, 9, word[j])) {
					row = 2;
					continue;
				}
				if(in_row(c, 7, word[j])) {
					row = 3;
					continue;
				}
			}
			else {
				if(in_row(a, 10, word[j]) && row != 1 || (in_row(b, 9, word[j]) && row != 2) \
					|| (in_row(c, 7, word[j]) && row != 3)) {
					in_one_row = 0;
					break;
				}	
			}
			j++;
		}
		if(in_one_row) {
			rows[size] = word;
			size++;
		}
	}
	*returnSize = size;
	return rows;
	free(rows);
}

void main() {
	char *input[4] = {"Hello", "Alaska", "Dad", "Peace"};
	for(int i = 0; i < 4; i++) {
		printf("the input chars is : %s\n", input[i]);
	}
	int wordsize = 4;
	printf("input size: %d\n", wordsize);
	int returnsize = 0;
	char **ret = (char **)malloc(sizeof(char *) * wordsize);
	ret = findWords(input, wordsize, &returnsize);
	
	for(int i = 0; i < returnsize; i++) {
			printf("the output char array is : %s\n", ret[i]);
	}
	printf("the input wordsize is: %d\n", wordsize);
	printf("the output wordsize is: %d\n", returnsize);
}
