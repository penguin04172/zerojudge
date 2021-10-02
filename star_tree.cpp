#include <iostream>

using namespace std;

int main() {
	int n;
	cin >> n;
	
//	n列
	for (int i=0 ; i<n ; i++) {
//		每列要做?
		for (int j=0 ; j<n-i-1 ; j++) {
//			推空格 
			cout << ' ';
		}
		for (int j=0 ; j<i*2+1 ; j++) {
//			畫星星 
			cout << '*';
		}
		cout << '\n'; 
	}
	
	return 0;
}
//n=3
//  *	i=0
// ***	i=1
//*****	i=2

