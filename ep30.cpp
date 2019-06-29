/*************************************************************************
	> File Name: ep30.cpp
	> Author: houhaien 
	> Mail: github.com/houhaien 
	> Created Time: 2019年05月19日 星期日 20时37分39秒
 ************************************************************************/

#include <iostream>
#include <cstdio>
#include <math.h>
using namespace std;

#define MAXN 354294
int isvalid(int x) {
    int raw = x;
    int cnt = 0;
    while (x) {
        cnt += pow(x % 10, 5);
        x /= 10;
    }
    return cnt == raw;
}

int main() {
    int sum = 0;
    int a[100];
    int t = 0;
    for (int i = 2; i <= MAXN; i++) {
        if (isvalid(i)) {
            sum += i;
            a[t] = i;
            t++;
        }
    }
    for (int i = 0; i < t;i++) {
        printf("i : %d\n", a[i]);
    }
    printf("%d\n", sum);
    return 0;
}
