#include <stdio.h>
#include <math.h>
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main() {
    
        int first_number;
        int second_number;
        long double conversion;
        int loop;
        long double another_conversion;
        long double fractpart;
        long double intpart;
        int integer_converter;
        int values;
        
        cin >> values;
       
        for (loop = 1; loop <= values; loop++) {
            cin >> first_number; 
            cin >> second_number;
               
            conversion = (double)first_number / (double)second_number;
            fractpart = modf(conversion, &intpart);
            if(fractpart < 0.5 && fractpart > -0.5) {
                another_conversion = floor(conversion);
                integer_converter = (int)another_conversion;
                printf("%d\n", integer_converter);
                printf("    ");
            }
            else if(fractpart >= 0.5 || fractpart <= -0.5) {
                another_conversion = ceil(conversion);
                integer_converter = (int)another_conversion;
                printf("%d\n", integer_converter);
                printf("    ");
            }
           
            
        }
        return 0;
        
}
