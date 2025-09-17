#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n, k;
	    cin>>n>>k;
	    int s = n*k;
	    int h = s/60;
	    int m = s%60;
	    cout<<h<<" "<<m<<endl;
	}
	return 0;
}
