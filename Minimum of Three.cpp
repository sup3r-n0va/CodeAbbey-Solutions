#include <stdio.h>
#include <iostream>
using namespace std;

int main() {
    
    int loop;
    int first_number;
    int second_number;
    int third_number;
    int values;
    
    cin >> values;
    
    for(loop = 1; loop <= values; loop++) {
        cin >> first_number;
        cin >> second_number;
        cin >> third_number;
        if ( first_number > second_number || first_number > third_number) {
                if(third_number > second_number) {
                printf("%d\n", second_number);
                printf("    ");
                }
                else {
                    printf("%d\n", third_number);
                    printf("    ");
                }        
        }               
        else {
            printf("%d\n", first_number);
            printf("    ");
        }
            
        
    }
    
    return 0;
}
