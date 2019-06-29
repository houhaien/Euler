/*************************************************************************
	> File Name: ep47.cpp
	> Author: houhaien 
	> Mail: github.com/houhaien 
	> Created Time: 2019年06月29日 星期六 16时05分57秒
 ************************************************************************/

#include <iostream>
#include <cstdio>
using namespace std;

#define MAXN 1000000

int prime[MAXN + 5] ;

int main() {
    for (int i = 2; i <= MAXN; i++) {
        if (prime[i]) continue;
        for (int j = i ; j <= MAXN; j += i) {
            prime[j] += 1;
        }
    }
    for (int i = 1; i <= MAXN; i++) {
        int flag = 1;
        for (int j = 0; j < 4 && flag ; j++) {
            flag = (prime[i + j] == 4);
        }
        if (flag) {
            cout << i << endl;
            break;
        }
    }

    return 0;
}
