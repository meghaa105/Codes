#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int n,N,M,t_x,t_y,p_x,p_y;
    cin >> n;
    while(n--)
    {
        cin >> N >> M;
        cin >> t_x >> t_y;
        cin >> p_x >> p_y;
        string ans = "YES";
        while((t_x != N && t_y !=M) || (t_x != p_x && t_y !=p_y))
        {
            if(t_x < M)
            {
                t_x++;
            }
            else if(t_y < N)
            {
                t_y++;
            }
            if(t_x == N && t_y ==M)
            {
                break;
            }

            if(p_y < t_y && p_x < t_x)
            {
                p_y++;
                p_x++;
            }
            else if(p_x<t_x)
            {
                p_x++;
            }
            else if(p_y < t_y)
            {
                p_y++;
            }
            else if(p_x == t_x && p_y == t_y)
            {
                ans = "NO";
            }
        }
        cout << ans << endl;
    }
}