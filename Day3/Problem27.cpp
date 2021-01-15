#include <iostream>
using namespace std;

int main() {
	char s1[101], s2[101];
	cin >> s1;
	cin >> s2;
	for(int i=0; s1[i] != '\0'; i++) {
		if(s1[i] == '1' || s2[i] == '1') {
			if(s1[i] == '1' && s2[i] == '1')
				cout << '0';
			else
				cout << '1';
		} else 
			cout << '0';
	}
	cout << endl;
	return 0;
}
