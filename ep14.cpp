/*************************************************************************
	> File Name: ep14.cpp
	> Author: houhaien 
	> Mail: github.com/houhaien 
	> Created Time: 2019年06月15日 星期六 18时55分08秒
 ************************************************************************/

#include <iostream>
#include <cstdio>
using namespace std;

#define MAXN 1000000

typedef long long ll;
ll num[MAXN + 5];

ll  collatz(ll x) {
    if (x == 1) return 1;
    if (x & 1) return collatz(3 * x + 1) + 1;
    return collatz(x/2)+1;
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
