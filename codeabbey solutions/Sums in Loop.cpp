#include <stdio.h>
#include <iostream>
using namespace std;

int main() {
    
    int loop;
    int first_number;
    int second_number;
    int sum;
    int amount_of_values;
    
    cin >> amount_of_values;
    
    for(loop = 1; loop <= amount_of_values; loop++) {
        cin >> first_number;
        cin >> second_number;
        sum = first_number + second_number;
        printf("%d\n",sum );
        printf("    ");
    }
    
    return 0;
}
