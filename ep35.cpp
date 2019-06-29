/*************************************************************************
	> File Name: ep35.cpp
	> Author: houhaien 
	> Mail: github.com/houhaien 
	> Created Time: 2019年06月27日 星期四 15时18分04秒
 ************************************************************************/

#include <iostream>
#include <cstdio>
#include <cmath>
using namespace std;

#define MAXBJ 9999999
#define MAXN 1000000

int isprime[MAXBJ + 5] = {0};
int prime[MAXBJ + 5] = {0};

void Isprime() {
    for (int i = 2; i <= MAXBJ; i++) {
        if(!isprime[i]) {
            prime[++prime[0]] = i;
        }
        for (int j = 1; j <= prime[0]; j++) {
            if(prime[j] * i >= MAXBJ) break;
            isprime[prime[j] * i] = 1;
            if (i % prime[j] == 0) break;
        }
    }
}

bool man(int x) {
    if(isprime[x] != 0) return false;
    int n = x, h,j;
    h = (int ) pow(10, floor(log10(x)));
    j  = (int ) (floor(log10(n))) +1;
    for (int i = 0; i < j; i++) {
        x =x /10 + (x%10) * h;
        if (isprime[x] != 0) return false;
    }
    return true;
}

int solve() {
    int sum = 0;
    for (int i = 1; i <= prime[0] ; i++) {
        if (prime[i] > MAXN) break;
        if (man (prime[i]))  sum++;
    }
    return sum;
}

int main() {
    Isprime();
    int sum = solve();
    cout << sum << endl;
    return 0;
}
