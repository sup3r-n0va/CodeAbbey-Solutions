#include <stdio.h>
#include <iostream>
using namespace std;

int main() {

	const int ARRAY_SIZE = 299;
	int values[ARRAY_SIZE];
	int loop;
	int max;
	int min;
	int loop2;
	
	
	max = values[0];
	
    	for ( loop = 1; loop <= ARRAY_SIZE; loop++) {
	    	cin >> values[loop];
		if( values[loop] >= max) {
			max = values[loop];
		}
		
	}
	printf("%d\n", max);
  	printf("    ");	
	min = values[1];
	
	for (loop2 = 2; loop2 <= ARRAY_SIZE; loop2++) {
		cin >> values[loop2];
	    	if( values[loop2] <= min) {
	        min = values[loop2];
	    }
	}
    	printf("%d\n", min);
    
	return 0;
}
