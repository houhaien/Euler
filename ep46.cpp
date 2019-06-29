/*************************************************************************
	> File Name: ep46.cpp
	> Author: houhaien 
	> Mail: github.com/houhaien 
	> Created Time: 2019年06月29日 星期六 14时51分52秒
 ************************************************************************/

#include <iostream>
#include <cstdio>
using namespace std;
#define MAXN 100000
int prime[MAXN + 5] = {0};//第i个素数
int isprime[MAXN + 5] = {0};//i是否是素数

int func(int n) {
    return 2 * n * n ;
}

bool binary_search(int (*func)(int), int l, int r, int val) {
    if (l > r) return false;
    int mid = (l +r) / 2;
    if (func(mid) == val) return true;
    if (func(mid) > val) r = mid -1;
    else l = mid +1;
    return binary_search(func, l, r, val);
}
bool isvalid(int x) {
    for (int i = 1; i <= prime[0] && prime[i] < x; i++) {
        int val = x - prime[i];
        if (!binary_search(func, 1 , val, val)){
            continue;
        }
        return true;
    }
    return false;
}

int main() {
    for (int i = 2; i <=MAXN ; i++ ) {
        if (!isprime[i]) {
            prime[++prime[0]] = i;
        }
        for (int j = 1; j <= prime[0]; j++) {
            if (i * prime[j] > MAXN) break;
            isprime[i * prime[j]] = 1;
            if (i % prime[j] == 0) break;
        }
    }
    cout << prime[0] << endl;
    for (int i = 9; i <= MAXN; i+=2) {
        if (!isprime[i]) continue;
        if (!isvalid(i)) {
            cout << i << endl;
            break;
        }
    }
    return 0;
    
}
