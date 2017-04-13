#include <stdio.h>
#include <stdbool.h>
#include <string.h>

bool detectCapitalUse(char* word) {
    const int len = strlen(word);
    if (len > 1) {
        bool isUpper = 'A' <= word[1] && word[1] <= 'Z' && 'A' <= word[0] && word[0] <= 'Z';
        for (int i = 1; i < len; i ++) {
            if (isUpper && 'A' <= word[i] && word[i] <= 'Z' || !isUpper && 'a' <= word[i] && word[i] <= 'z') continue;
            return false;
        }
    }
    return true;
}

void main() {
	char input[] = {"gooGELS"};
	char *p = input;
	int ret = detectCapitalUse(p);
	if(ret == true) {
		printf("the output is true\n");
	} else {
		printf("the output is false\n");
	}
}
