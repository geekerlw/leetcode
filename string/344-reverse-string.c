#include <stdio.h>
#include <string.h>

char* reverseString(char* s) {
	char *p = s;
	char *q = &s[strlen(s)-1];
	while(p < q) {
		char tmp = *p;
		*p++ = *q;
		*q-- = tmp;		
	}
	return s;
}

void main() {
	char input[] = {"hello"};
	printf("the input string is: %s\n", input);
	char* ret = reverseString(input);
	printf("the output string is: %s\n", ret);
}
