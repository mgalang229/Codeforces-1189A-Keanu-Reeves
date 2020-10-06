#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int n;
	cin >> n;
	char a[n];
	int o=0, z=0;
	for(int i=0; i<n; ++i) {
		cin >> a[i];
		if(a[i]=='1')
			o++;
		else
			z++;
	}
	if(n==1) {
		cout << 1 << "\n" << a[0] << "\n";
		return 0;
	} else if (o!=z) {
		cout << 1 << "\n";
		for(int i=0; i<n; ++i)
			cout << a[i];
		cout << "\n";
		return 0;
	}
	cout << 2 << "\n";
	for(int i=0; i<n-1; ++i)
		cout << a[i];
	cout << " " << a[n-1] << "\n";
}
