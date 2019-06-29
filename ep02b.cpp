/*************************************************************************
	> File Name: ep02b.cpp
	> Author: houhaien 
	> Mail: github.com/houhaien 
	> Created Time: 2019年05月19日 星期日 18时42分51秒
 ************************************************************************/

#include <iostream>
#include <cstdio>
using namespace std;
#define MAXM 4000000

int main() {
    long long sum = 0;
    int f[3] = {0,1};
    int n = 1;
    while (f[n % 3] + f[(n-1) % 3] < MAXM) {
        n += 1;
        f[n % 3] = f[(n - 1) % 3] +f[(n - 2) % 3];
        if(!(f[n % 3] & 1)) 
        sum += f[n % 3]; 
    }
    printf("%lld\n",sum);
    return 0;
}
