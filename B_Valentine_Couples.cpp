// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;


int main()
{   int num,iter;
    cin >> iter;
    while(iter--)
    {
        cin >> num; 
        // cout << num;
        vector<int> boi;
        vector<int> gal;
        int temp;
        int num1 = num;
        while(num--)
        {
            cin >> temp;
            boi.push_back(temp);
            // cout << temp << endl;
        }
        while(num1--)
        {
            cin >> temp;
            gal.push_back(temp);
            // cout << temp << endl;
        }
        sort(boi.begin(), boi.end());
        sort(gal.begin(), gal.end());

        int max = INT_MIN;
        int sum = 0;
        for(int i = 0;i < boi.size();i++)
        {
            sum = boi[i]+gal[(boi.size()-i)- 1];
            // cout << boi[i] << " " << gal[(boi.size()-i)- 1] << " " << sum << endl;
            if(sum > max)
            {
                max = sum;
            }
        }
        // sum = 0;
        // for(int i = 0;i < boi.size();i++)
        // {
        //     sum = gal[i]+boi[(boi.size()-i)- 1];
        //     // cout << sum << endl;
        //     if(sum > max)
        //     {
        //         max = sum;
        //     }
        // }
        // cout << "HELLO"<< endl;
        cout << gal[0]+boi[boi.size()- 1] << endl;
    }
    
    return 0;

}
