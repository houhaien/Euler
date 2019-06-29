/*************************************************************************
	> File Name: ep36.cpp
	> Author: houhaien 
	> Mail: github.com/houhaien 
	> Created Time: 2019年06月16日 星期日 11时25分21秒
 ************************************************************************/

#include <iostream>
#include <cstdio>
using namespace std;

#define MAXN 1000000
int huiwen(int n, int base) {
    if (base <= 1) return 0;
    int x = 0;
    while (n ) {
        x = x * base + n % base;
        n /= base;
    }
    return x;
}
	
int main() {
    int sum = 0; 
    int base2, base10;
    for (int i = 1; i < 1000000; i++) {
        base2 = huiwen(i, 2);
        base10 = huiwen(i,10);
        if(base2 == base10 && base10 == i) 
            sum += i; 
    }
    cout << sum << endl;
    return 0;
}
