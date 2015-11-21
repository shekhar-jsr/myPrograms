#include<iostream>
using namespace std;
int main()
{
	int num,r,c=0,sq,x=1;
	cin>>num;
	    sq=num*num;
	    int m=num*num;
	    while(m>0)
	     {
		   r=m%10;
		   c++;
		    m=m/10;
	     }
	  if(c%2!=0)c++;

	 for(int i=1;i<=(c/2);i++)x*=10;
	  int rh=sq%x;
	  int lh=sq/x;
	  int s=rh+lh;
	if(s==num)
		cout<<"yes"<<endl;
	else
		cout<<"no"<<endl;
	

}
