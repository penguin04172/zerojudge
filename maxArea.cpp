#include <bits/stdc++.h>

using namespace std;

int x[100];

int main() {
	string str;
	cin >> str;
	
	int tmp=0, j=0, maxi=0, max=0;
	for (int i=0 ; i< str.length() ; i++) {
		if (str[i] >= '0' && str[i] <= '9') {
			tmp *= 10;
			tmp += (str[i]-'0');
		}else if (tmp){
			x[j++] = tmp;
			if (tmp > max) {
				max = tmp;
				maxi = j-1;
			}
			tmp = 0;
		}
	}
	
	max=0;
	for (int i=maxi+1 ; i<j ; i++) {
		int area = (i-maxi) * x[i];
		if (area > max) {
			max = area;
		}
	}
	cout << max << '\n';
	return 0;
}

