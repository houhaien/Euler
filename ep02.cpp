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
int fib[MAX+5];
int main() {
    int n = 2;
    fib[1] = 1; fib[2] = 2;
    while(fib[n]+fib[n-1] < MAXM) {
        fib[n+1] = fib[n-1] + fib[n];
        n+=1;
    }
    int sum = 0;
    for(int i = 1; i<= n; i++) {
        if (fib[i] % 2 ) continue;
        sum += fib[i];
    }
    printf("%d\n",sum);
    return 0;
}
