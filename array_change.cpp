#include <iostream>

using namespace std;

int main() {
	int n;
	cin >> n;
	
	int x[10];
	for (int i=0 ; i<n ; i++) {
		cin >> x[i];
	}
	
//	t = x[0]
//	x[0] = x[n-1]
//	x[n-1] = t

//	0 -> i
//	x[0] -> x[i]
//	x[n-1] -> x[n-i-1]

	for (int i=0 ; i<n/2 ; i++) {
		int t;
		t = x[i];
		x[i] = x[n-i-1];
		x[n-i-1] = t;
	}
	
	for (int i=0 ; i<n ; i++) {
		cout << x[i] << ' ';
	}
	cout << '\b' << '\n';
	return 0;
}

