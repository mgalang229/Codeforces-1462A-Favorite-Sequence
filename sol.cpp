#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ar array

void solve() {
	int n;
	cin >> n;
	int a[300];
	for(int i=0; i<n; ++i)
		cin >> a[i];
	map<int, int> mp;
	//store a[i] in map with key of odd numbers from n to n/2(increment)
	int cnt=1;
	for(int i=0; i<=n/2; ++i) {
		mp[cnt]=a[i];
		cnt+=2;
	}
	//store a[i] in map with key of even numbers from n-1 to n/2+1(decrement)
	cnt=2;
	for(int i=n-1; i>=n/2+1; --i) {
		mp[cnt]=a[i];
		cnt+=2;
	}
	//since map is already sorted, just print the values
	for(auto x : mp)
		cout << x.second << " ";
	cout << "\n";
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int t;
	cin >> t;
	while(t--)
		solve();
}
