#define MAX 100000
#include <iostream>
#include<cstring>
using namespace std;
int main()
{
    char str[MAX];
    long int n,a,b,i;
    cin>>str;
    cin>>n;
    int l=strlen(str);

    while(n>0)
        {
    	cin>>a>>b;
    	a--;
    	b--;
    	a=a%l;
    	b=b%l;
    	if(str[a]==str[b])
    	   cout<<"Yes"<<endl;
    	else
    	   cout<<"No"<<endl;
     	n--;
       }
    return 0;
}
