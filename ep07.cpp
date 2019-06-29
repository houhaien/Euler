/*************************************************************************
	> File Name: ep07.cpp
	> Author: houhaien 
	> Mail: github.com/houhaien 
	> Created Time: 2019年06月15日 星期六 14时15分18秒
 ************************************************************************/

#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cmath>
using namespace std;

inline bool  isprime(int x) {
    if (x <= 1) return false;
    for (int i = 2; i * i <= x; i++) {
        if (x % i == 0) return false;
    }
    return  true;
}

int main() {
    int cnt = 0,i = 1;
    while ( cnt < 10001 ) {
        i++;
        if (isprime(i)) cnt +=1;
        
    }
    cout << i << endl;
    return 0;
}
