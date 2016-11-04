#include <stdio.h>
#include <math.h>
#include <iostream>
using namespace std;

int main() {
    
    int amount_of_values;
    int fahrenheit;
    int loop;
    int celsius;
    double fractpart;
    double intpart;
    double conversion;
    double converter;
    double rounding;
    
    cin >> amount_of_values;
    
    for (loop = 1; loop <= amount_of_values; loop++) {
        cin >> fahrenheit;
        conversion = (double)fahrenheit;
        
        converter = (conversion - 32.0) * 5.0/9.0;
        fractpart = modf(converter, &intpart);
        if (fractpart < 0.5 && fractpart > -0.5) {
            rounding = floor(converter);
            celsius = (int)rounding;
            printf("%d\n", celsius);
            printf("    ");
        }
        else if (fractpart > 0.5 || fractpart < -0.5) {
            rounding = ceil(converter);
            celsius = (int)rounding;
            printf("%d\n", celsius);
            printf("    ");
        }
    }
    
    return 0;
}
    
