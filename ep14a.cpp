/*************************************************************************
	> File Name: ep14a.cpp
	> Author: houhaien 
	> Mail: github.com/houhaien 
	> Created Time: 2019年06月15日 星期六 19时12分54秒
 ************************************************************************/

#include <iostream>
#include <cstdio>
using namespace std;

#define MAXN 1000000
typedef long long ll;

ll num[MAXN+5];

ll collatz(ll x) {
    if (x == 1) return 1;
    if (x < MAXN && num[x] != 0) return num[x];
    int m;
    if (x & 1) m = collatz(3 * x + 1) +1;
    else m = collatz(x / 2) +1;
    if (x <= MAXN) num[x] = m;
    return m;
} 

int main() {
    ll maxlen = 0;
    ll num = 0;
    for (int i = 1; i < MAXN; i++) {
        ll l = collatz(i);
        if (l > maxlen) {
            maxlen = l;
            num = i;
        }
    }
    cout << num <<" " << maxlen<< endl;
    return 0;
}
