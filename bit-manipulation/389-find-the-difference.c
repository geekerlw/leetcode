#include <stdio.h>

char findTheDifference(char* s, char* t) {
    int sum1=0,sum2=0;
    for(;*s;s++)
        sum1+=*s;
    for(;*t;t++)
        sum2+=*t;
    return sum2-sum1;
}

void main() {
	char s[] = {"abcd"};
	char t[] = {"abcde"};
	char ret = findTheDifference(&s[0], &t[0]);
	printf("the output char is: %c\n", ret);
}
