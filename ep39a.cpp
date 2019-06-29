/*************************************************************************
	> File Name: ep39a.cpp
	> Author: houhaien 
	> Mail: github.com/houhaien 
	> Created Time: 2019年06月29日 星期六 14时44分27秒
 ************************************************************************/

#include <iostream>
#include <cstdio>
using namespace std;

#define MAXN 1000
int num[MAXN + 5] = {0};

int gcd (int a, int b) {
    return b ? gcd(b, a%b) : a;
}

int main(){
    
    for (int n = 1; n <= 32; n++) {
        for (int m = n+1; m <= 32; m++) {
            if (gcd(n,m) -1) continue;
            int a = m * m - n * n;
            int b = 2 *m *n;
            int c = m * m + n * n;
            int sum = a+ b +c;
            for (int p = sum; p <= MAXN; p += sum) {
                num[p] += 1;
            }
        }
    }
    int cnt = 0;
    for (int i = 1; i <= MAXN; i++) {
        if (num[i] > num[cnt]) cnt = i;
    }
    cout << cnt << endl;
    return 0;
}
