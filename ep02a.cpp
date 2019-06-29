/*************************************************************************
	> File Name: ep02.cpp
	> Author: houhaien 
	> Mail: github.com/houhaien 
	> Created Time: 2019年05月19日 星期日 18时16分09秒
 ************************************************************************/

#include <iostream>
#include <cstdio>
using namespace std;
#define MAX 45
#define MAXM 4000000
int main() {
    long long sum = 0;
    int a = 0, b = 1;
    while (a + b < MAXM) {
        b = a + b;
        a = b - a;
        if(!(b&1) ){
            sum += b;
        }
    }
    printf("%lld\n",sum);
    return 0;
}
