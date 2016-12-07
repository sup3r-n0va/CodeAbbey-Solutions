#include <iostream>
#include <stdio.h>
using namespace std;

int main() {
         
         int x;
         int y;
         int z;
         int totalx;
         int totaly;
         int totalz;
         int i;
         int n;
         
         cin >> n;
         
         totalx = 0;
         totaly = 0;
         totalz = 0;
         
         for(i = 1; i <= n; i++) {
            cin >> x;
            cin >> y;
            cin >> z;
            
            totalx+=x;
            totaly+=y;
            totalz+=z;
         }
            if(totalx == 0 && totaly == 0 && totalz == 0) {
                  printf("YES");
            }
            else {
                  printf("NO");
            }
         
}        
