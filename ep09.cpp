/*************************************************************************
	> File Name: ep09.cpp
	> Author: houhaien 
	> Mail: github.com/houhaien 
	> Created Time: 2019年06月16日 星期日 18时29分33秒
 ************************************************************************/

#include <iostream>
#include <cstdio>
#include <cmath>
using namespace std;

int gcd (int a, int b) {
    return (b?gcd (b, a%b) : a);
}
int main() {
    int ans = 0;
    for (int n = 1; n <= 33 ; n++) {
        for (int m = n+1;m *m + n * n < 1000; m++) {
           if(gcd (n,m) != 1) continue;
            int a = 2 * n *m;
            int b = m * m - n*n;
            int c = m * m + n * n;
            cout << a << b << c << endl;
            if (1000 %(a+b+c) == 0) {
                int k = 1000 / (a+b+c);
                cout  << k << endl;
                ans = a*b*c*(int)pow(k,3);
            }
            if(ans) break;
        }
        if(ans) break;
    }
    cout << ans <<endl;    
    return 0;
}
