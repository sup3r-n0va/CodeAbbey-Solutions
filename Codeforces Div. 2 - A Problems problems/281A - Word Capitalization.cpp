#include <stdio.h>
#include <string.h>
#include <string>
#include <iostream>

using namespace std;

int main() {
	
	char s[1000];
	char t;
	string u;
	int i;
	char a;
	
	a = 32;
	cin >> s;
	
	for (i = 0; i < strlen(s); i++) {
		if (islower(s[0])) {
			t = (s[0] - a);
			s[0] = t;
			cout << s << endl;
			break;
		}
		else {
			cout << s << endl;
			break;
		}
	}
	
	return 0;
}
