#include <cstring>
#include <iostream>
 
#define sz(x) ((int) x.size())
 
using namespace std;
 
const int MAXN = 1000;
 
int T, N;
 
bool HV[MAXN];
 
string grid[MAXN];
 
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    
    cin >> T;
    
    for(int t = 0; t < T; t++) {
        cin >> N;
        
        for(int i = 0; i < N; i++) {
            cin >> grid[i];
        }
        
        memset(HV, 1, sizeof(HV));
        int res = 0;
        for(int i = N-1; i >= 0; i--) {
            bool vv = true;
            for(int j = N-1; j >= 0; j--) {
                if(grid[j][i] == '#') {
                    vv = false;
                    HV[j] = false;
                }else if(vv && HV[j]) {
                    ++res;
                }
            }
        }
        
        cout << res << '\n';
    }
    
    return 0;
} 