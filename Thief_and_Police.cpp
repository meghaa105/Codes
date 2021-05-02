#include <bits/stdc++.h>
using namespace std;

int main() {
 long long int T;
 cin >> T;
 while(T--){
	long long int N,M;
	cin >> N >> M;
	long long int x,y,a,b;
	cin >> x >> y >> a >> b;
	string ans = "YES";
	while((x!=N && y!=M)|| (x!=a && y!=b)){
	    if(x<M){
	        x++;
	    }
	    else if(y<N){
	        y++;
	    }
        else if(a==N && b== M)
        {
            break;
        }
        if(a<x && b<y){
	       a++;
	       b++;
	    }
	    else if(b<y){
	        b++;
	    }
	    else if(a<x){
	        a++;
	    }
	    else if(x==a && y==b){
	        ans = "NO";
	    }
	}
	cout << ans << endl;
 }
 return 0;
}