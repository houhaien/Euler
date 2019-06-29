/*************************************************************************
	> File Name: ep26.cpp        求x/y的循环节
	> Author: houhaien 
	> Mail: github.com/houhaien 
	> Created Time: 2019年06月27日 星期四 18时38分50秒
 ************************************************************************/

#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;

#define MAXN 1000
int rlen[MAXN + 5];

int getlen(int x, int y) {
    int r = x % y, t = 1;//余数，时间点
    memset(rlen, 0 ,sizeof(rlen));
    rlen[r] = 1;
    while(r) {
        r *= 10;
        r %= y;
        t += 1;
        if (rlen[r]) return t - rlen[r];
        rlen[r] = t;
    }
    return 0;
}

int main() {
    int d = 0, len = -1;
    for (int i = 2; i <= MAXN ; i++) {
        int temp = getlen(1,i);
        if(temp > len) {
            len = temp;
            d = i;
        }
        //cout << getlen(i) << endl;
    }
    cout << d << endl;
    return 0;
}
