#include <stdio.h>
#include <iostream>
using namespace std;

int main() {
    
    int values;
    int first_number;
    int second_number;
    int loop;
    
    cin >> values;
    
    for (loop = 1; loop <= values; loop++) {
        cin >> first_number;
        cin >> second_number;
        if ( first_number > second_number) {
            printf("%d\n", second_number );
            printf("    ");
        }
        else {
            printf("%d\n", first_number);
            printf("    ");
        }
    }
    
    return 0;
}
