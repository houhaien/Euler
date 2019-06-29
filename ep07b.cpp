/*************************************************************************
	> File Name: ep07b.cpp
	> Author: houhaien 
	> Mail: github.com/houhaien 
	> Created Time: 2019年06月15日 星期六 14时42分08秒
 ************************************************************************/
//线性筛
#include <iostream>
#include <cstdio>
using namespace std;

#define MAXN 200000
int isprime[MAXN + 5] = {0};//合数标记
int prime[MAXN + 5];//全是素数
int main() {
    for (int M = 2; M  <= MAXN; M++) {
        if (isprime[M] == 0) {
            prime[++prime[0]] = M;
        }
        for (int j = 1; j <= prime[0]; j++) {
            if(prime[j] * M > MAXN) break;
            isprime[prime[j] * M] = 1;
            if (M % prime[j] == 0) break;
        }
    }
    int n;
    cin >> n;
    cout << prime[n] << endl;
    return 0;
}
