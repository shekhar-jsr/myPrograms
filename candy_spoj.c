#include <stdio.h>
#define in(n) scanf("%d",&n)
#define ll long long int
#define for(i,a,b) for(i=a;i<=b;i++)
#define out(n) printf("%d\n",n)
int main(void) {
	 int n,sum=0,N=0;
 do{
	 	in(n);
	 	sum+=n;
	 	N++;
	 	if(n==-1)break;
	 	
	 	out(n);
	 	
	 //if(n/N!=0)
	 	 // printf("-1");	
	 	
	}while(1);

	return 0;
}