/*************************************************************************
	> File Name: ep03.cpp
	> Author: houhaien 
	> Mail: github.com/houhaien 
	> Created Time: 2019年05月19日 星期日 18时54分26秒
 ************************************************************************/

#include <iostream>
#include <cstdio>
using namespace std;
#define N 600851475143LL//因为这个数太大所以加上LL

int main() {
    long long num = N, ans, i = 2;
    while (i * i <= num) {
        if(num % i == 0) {
            ans = i;           // ans记录自大素因子
        }
        while (num % i == 0)  num /= i;
        i++;
    }
    printf("%lld %lld \n", ans, num);
    if ( num != 1 ) ans = num; // num 为什么一定是素数？
    printf("%lld\n",ans);
    return 0;
}
