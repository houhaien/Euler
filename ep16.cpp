/*************************************************************************
	> File Name: ep16.cpp
	> Author: houhaien 
	> Mail: github.com/houhaien 
	> Created Time: 2019年06月25日 星期二 18时11分39秒
 ************************************************************************/

#include <iostream>
#include <cstdio>
#include <algorithm>
using namespace std;

#define MAXN 400
int num[MAXN +5];

int main() {
    num[0] = num[1] = 1;
    for(int i = 0; i < 100; i++) {
        for(int j = 1; j <= num[0]; j++)  num[j] *= 1024;
        for(int j = 1; j <= num[0]; j++) {
            if (num[j] < 10) continue;
            num[ j+1]  += num[j] /10;
            num[j] %= 10;
            num[0] += (j == num[0]);
        }
    }
    int sum = 0;
    for (int i = num[0]; i >= 1; i--) {
        sum += num[i];
    }
    cout << sum << endl;
    return 0;
}
