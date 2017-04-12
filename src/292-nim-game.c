#include <stdio.h>
#include <stdbool.h>

bool canWinNim(int n) {
	return n % 4 > 0 ? true: false;    
}

void main() {
	int n = 4;
	bool ret;
	if(ret == true) {
		printf("you will always win\n");
	} else {
		printf("you will always lose\n");
	}
}
