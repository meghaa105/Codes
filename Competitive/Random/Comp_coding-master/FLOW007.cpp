//https://www.codechef.com/LRNDSA01/problems/FLOW007/

#include <iostream>
#include<stdlib.h>
#define ll long long

#define MIN(a, b) a < b ? a : b

using namespace std;

int main(int argc, char *argv[]) {
    int t;
    scanf("%d", &t);

    while( t-- ) {
        int n, m = 0;
        scanf("%d", &n);
        while(n) {
            int t = n % 10;
            m = m * 10 + t;
            n = n / 10;
        }
        printf("%d\n", m);
    }
    return 0;
}
