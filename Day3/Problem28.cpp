#include <iostream>
#include <string.h>
using namespace std;

int main() {
	char s[101], s1[101];
	cin >> s;
	strcpy(s1, s);
	int caps=0, small=0;
	for(int i=0; s[i]!='\0'; i++) {
		if(s[i] < 'a') {
			caps++;
			s[i] += 32;
		}
		else {
			small++;
			s1[i] -= 32;
		}
	}
	if(caps == small || caps < small)
		cout << s << endl;
	else
		cout << s1 << endl;
	return 0;
}
