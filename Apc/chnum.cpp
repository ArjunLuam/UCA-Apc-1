#include <bits/stdc++.h>
using namespace std;

int main() {
    long long int t;
    cin>>t;
    while(t--){
        long long int n;
        long long int posi=0;
        long long int negi=0;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++){
        cin>>a[i];
        if(a[i]>=0)
        posi=posi+1;
        else
        negi=negi+1;
        }
        if(posi==n)
        cout<<posi<<" "<<posi<<"\n";
        if(negi==n)
        cout<<negi<<" "<<negi<<"\n";
        if(posi<n)
        cout<<posi<<" "<<negi<<"\n";
    }

	// your code goes here
	return 0;
}
