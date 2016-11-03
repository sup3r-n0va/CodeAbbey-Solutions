#include <stdio.h>
#include <iostream>
using namespace std;

int main() {
    
    int amount_of_values_to_sum;
    int values;
    int sum;
    int loop;
    
    sum = 0;
    cin >> amount_of_values_to_sum;
    
    for (loop = 1; loop <= amount_of_values_to_sum; loop++) {
        cin >> values;
        sum += values;
    }
    
    printf("%d\n", sum);
    
    return 0;
}
