#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void reverse(char* pre, char* next) {
	while(pre < next) {
		char tmp = *pre;
		*pre++ = *next;
		*next-- = tmp;
	}
}

char* reverseWords(char* s) {
	char* start = s;
	char* end = s;
	while(*end != '\0') {
		if(*end == ' ') {
			reverse(start, end -1);
			end++;
			start = end;
		}
		else
			end++;
	}
	reverse(start, end -1);
	return s;
}

void main() {
	char input[] = {"Let's take LeetCode contest"};
	printf("the input is : %s\n", input);
	char* ret = reverseWords(input);
	printf("the output is: %s\n", ret);
}
