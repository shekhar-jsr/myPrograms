#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
typedef long long ll;


int main() {
    int t;
    ll n,sum,a=1,b=2,c=0;
    cin>>t;
    while(t--)
    {
      cin>>n;
      sum=2;
      while(c<=n){          
          if(c%2==0)
      	  	sum+=c;
          c=a+b;a=b;b=c;
      }
      cout<<sum<<endl;
    }
    

    return 0;
}
