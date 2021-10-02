#include <iostream>

using namespace std;

int main() {
	int n;
	cin >> n;
	int x[10];
	for (int i=0 ; i<n ; i++) {
		cin >> x[i];
	}
	
	int temp;
//	x[0] <-> x[n-1]
	temp = x[0];
	x[0] = x[n-1];
	x[n-1] = temp;
	
	return 0;
}

