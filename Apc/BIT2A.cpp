#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
    int cnt=0;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int a[n];
	    for(int i=0;i<n;i++){
	        cin>>a[i];
	    }
	    sort(a,a+n);
	    for(int i=0;i<n;i++){
	    for(int j=1;j<n;j++){
	        if(a[j]>a[i])
	        cnt++;
	    }
	    cout<<cnt<<" ";
	    cnt=0;
	    }
	}
	return 0;
}
