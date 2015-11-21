#include <cstdio>
#include <iostream>
#include<cassert>
using namespace std;
int pallindrome(int);
int pallin(int);
int main()
{
    int t,n,m;
    cin>>t;
    assert(t>=1 && t<=300000);

    while(t>0)
    {
        cin>>n;
        assert(n>=1 && n<=1000000);
        if(n>0&&n<10)
            cout<<0<<endl;
        else
        {
        int m=pallindrome(n);
        cout<<m-n<<endl;
        }
      t--;
    }
    return 0;
}
int pallindrome(int n)
{
    int x,i,s;
    for(i=n;true;i++)
    {
      x=i;
      s=pallin(x);
      if(s==i)
         return s;
    }

}
int pallin(int x)
 {
    int r,s=0;
    while(x>0)
    {
        r=x%10;
        s=s*10+r;
        x=x/10;
     }
   return s;
}
