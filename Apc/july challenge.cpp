#include <bits/stdc++.h>
using namespace std;
int main() {

   long long int t;
   long long n,i,flag;
   long double sum,am,mean;
    cin>>t;
    while(t--){
   sum=0;
   flag=0;
    cin>>n;
    long long a[n];
    for(i=0;i<n;i++)
    cin>>a[i];
    for(i=0;i<n;i++){
        sum=sum+a[i];
        }
       mean=sum/n;
        for(i=0;i<n;i++){
         am=(sum-a[i])/(n-1);
          if(am == mean){
          flag=i+1;
          break;
          }
        }
        if(flag!=0)
        cout<<flag<<endl;
        else
        cout<<"Impossible"<<endl;

        }


    }
