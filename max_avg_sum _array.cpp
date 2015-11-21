#include<bits/stdc++.h>

using namespace std;

int main(){
	int t;
	scanf("%d", &t);
	while(t--){
	int n;
		scanf("%d", &n);
		int m = -1;
		int x;
		for(int i=0; i < n; i++){
			scanf("%d", &x);
			m = max(x, m);
		}
		cout << m << endl;
	}
	return 0;
}
