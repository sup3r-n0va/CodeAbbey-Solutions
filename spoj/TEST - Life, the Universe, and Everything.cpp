#include <iostream>
using namespace std;
 
int main() {
 
        int loop;
        int numbers;
 
 
        for ( loop = 1; loop < 100;) {
                cin >> numbers;
                if (numbers == 42) {
                        break;
                }
 
                cout << numbers << endl;
 
        }
 
        return 0;
}
