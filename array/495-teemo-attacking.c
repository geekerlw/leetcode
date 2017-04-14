#include <stdio.h>

int findPoisonedDuration(int* timeSeries, int timeSeriesSize, int duration) {
	if(timeSeriesSize <= 0) {
		return 0;
	}
	int ret = 0;
	for(int i = 1; i < timeSeriesSize; ++i) {
		int diff = *(timeSeries+i) - *(timeSeries+i-1);
		ret += (diff < duration) ? diff : duration;
	}
	return ret + duration;
}

void main() {
	int input[] = {1, 4};
	int duration = 2;
   	printf("the output is %d\n", findPoisonedDuration(input, sizeof(input)/sizeof(int), duration)); 
}

