#include <iostream>
#include <string>
using namespace std;

int main() {
	int a[26]={0}, b[26]={0};
	string s, s3;
	cin >> s;
	for(int i=0; i<(int)s.length(); i++) {
		a[s[i]-'A']++;
	}
	cin >> s;
	for(int i=0; i<(int)s.length(); i++) {
		a[s[i]-'A']++;
	}
	cin >> s;
	for(int i=0; i<(int)s.length(); i++) {
		b[s[i]-'A']++;
	}
	int flag=1;
	for(int i=0; i<26; i++) {
		if(a[i] != b[i]) {
			flag = 0;
			break;
		}			
	}
	if(flag)
		cout << "YES" << endl;
	else
		cout << "NO" << endl;
	return 0;
}
