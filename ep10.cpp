/*************************************************************************
	> File Name: ep10.cpp
	> Author: houhaien 
	> Mail: github.com/houhaien 
	> Created Time: 2019年06月15日 星期六 18时24分23秒
 ************************************************************************/

#include <iostream>
#include <cstdio>
using namespace std;

#define MAXN 2000000
long long  isprime[MAXN + 5 ] = {0};
long long  prime[MAXN + 5] = {0};
int main() {
    for (int i = 2; i <=MAXN; i++) {
        if(isprime[i] == 0){
            prime[++prime[0]] = i;
        }
        for (int j = 1; j<= prime[0]; j++) {
            if(prime[j] * i > MAXN) break;
            isprime[prime[j] * i] = 1;
            if(i % prime[j] == 0) break;
        }
    }

    long long sum = 0;
    for (int i = 1; ;i++){
            //cout << prime[i] << endl;
        if (prime[i] == 0) break;
        sum += prime[i];
    }
    cout << sum << endl;
    return 0;
}
