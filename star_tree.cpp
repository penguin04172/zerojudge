#include <iostream>

using namespace std;

int main() {
	int n;
	cin >> n;
	
//	n�C
	for (int i=0 ; i<n ; i++) {
//		�C�C�n��?
		for (int j=0 ; j<n-i-1 ; j++) {
//			���Ů� 
			cout << ' ';
		}
		for (int j=0 ; j<i*2+1 ; j++) {
//			�e�P�P 
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

