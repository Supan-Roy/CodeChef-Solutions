#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n, m;
	    cin>>n>>m;
	    string s;
	    cin>>s;
	    
	    int a = count(s.begin(), s.end(), '1');
	    int b = m-a;
	    int r = n-m;
	    
	    int d = abs(a-b);
	    if(d<=r && (r-d)%2==0){
	        cout<<"Yes"<<endl;
	    }else cout<<"No"<<endl;
	}
	return 0;
}
