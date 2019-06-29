/*************************************************************************
	> File Name: ep07ceshi1.cpp
	> Author: houhaien 
	> Mail: github.com/houhaien 
	> Created Time: 2019年06月15日 星期六 15时06分59秒
 ************************************************************************/

#include <iostream>
#include <cstdio>
using namespace std;

#define MAXN 10000
int isprime[MAXN + 5 ] = {0};
int prime[MAXN + 5 ] = {0};
int main() {
    for (int i = 2; i * i <= MAXN; i++) {
        if (isprime[i]) continue;
        isprime[i] = i;
        for (int j = i * i ; j <= MAXN; j += i) {
            if(isprime[j] == 0) {
                isprime[j] = i;
            }
        }
    }
    for (int i = 2; i  <= MAXN; i++) {
        if(prime[i]) continue;
        prime[i] = i;
        for (int j = 2 * i ; j <= MAXN; j += i) {
            prime[j] = i;
        } 
    }
    int n ;
    cin >> n;
    cout << isprime[n] << endl;
    cout << prime[n] << endl;
    return 0;
}
