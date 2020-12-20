#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ar array

void solve() {
	int n;
	cin >> n;
	vector<int> v(n);
	for(int &e : v)
		cin >> e;
	int l=0, r=n-1;
	vector<int> ans(n);
	//if i is even then ans[i] will contain values from the left
	//if i is odd then ans[i] will contain values from the right
	for(int i=0; i<n; ++i) {
		if(i%2==0)
			ans[i]=v[l++];
		else
			ans[i]=v[r--];
	}
	for(auto x : ans)
		cout << x << " ";
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
