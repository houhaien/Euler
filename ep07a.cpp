/*************************************************************************
	> File Name: ep07a.cpp
	> Author: houhaien 
	> Mail: github.com/houhaien 
	> Created Time: 2019年06月15日 星期六 14时21分48秒
 ************************************************************************/

#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cmath>
using namespace std;

#define MAXN 200000
int isprime[MAXN + 5] = {0};


int main() {
    //优化 1. j = i*i    2. i =  i + 1 + (i % 2)第一个ｆｏｒ循环
    for (int i = 2; i * i <= MAXN; i++) {
        if(isprime[i]) continue;
        for (int j = 2 * i; j <= MAXN; j+=i){
            isprime[j] = 1;
        }
    }
    for (int i = 2; i <= MAXN; i++) {
        if (isprime[i]) continue;
        isprime[++isprime[0]] = i;
    }
    cout << isprime[10001] << endl;

}

