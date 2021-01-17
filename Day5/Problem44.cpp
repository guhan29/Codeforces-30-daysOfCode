#include <iostream>
using namespace std;


int main() {
	int a, b, c, sum=0, x=1, y=2, z=4, t=1;
	cin >> a >> b >> c;
	while(1) {
		if(x*t<=a && y*t<=b && z*t<=c) {
			sum = x*t+y*t+z*t;
//			x *= t;
//			y *= t;
//			z *= t;
			t++;
		} else {
			cout << sum << endl;
			break;
		}
	}
	return 0;
}
