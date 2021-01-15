#include <iostream>
#include <string.h>
using namespace std;

int main() {
	char s1[101], s2[101];
	cin >> s1;
	cin >> s2;
	int len = strlen(s1);
	for(int i=0; i<len; i++) {
		if(s1[i] < 'a') 
			s1[i] += 32;
		if(s2[i] < 'a') 
			s2[i] += 32;
	}
	cout << strcmp(s1, s2) << endl;
	return 0;
}
