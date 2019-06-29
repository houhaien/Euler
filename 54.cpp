/*************************************************************************
	> File Name: 54.cpp
	> Author: houhaien 
	> Mail: github.com/houhaien 
	> Created Time: 2019年06月25日 星期二 19时53分35秒
 ************************************************************************/

#include <iostream>
#include <cstdio>
using namespace std;

#define MAXN 5000
int num1[MAXN + 5];
int num2[MAXN + 5];

int main() {
    int n;
    while (scanf("%d", &n) != EOF) {
        num1[0] = num1[1] = 1;
        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= num1[0]; j++) num1[j] *= i;
            for (int j = 1; j <= num1[0]; j++) {
                if (num1[j] < 10) continue;
                num1[ num1[0] + 1 ] = 0;
                num1[j+1] += num1[j]/10;
                num1[j] %= 10;
                num1[0] += (num1[0] == j);
            }
        }
        num2[0] = num2[1] = 1;
        for (int i = 1; i <= num1[0]; i++) {
            if(num1[i] == 0) continue;
            for (int j = 1; j <= num2[0]; j++) num2[j] *= num1[i];
            for (int j = 1; j <= num2[0]; j++) {
                if (num2[j] < 10) continue;
                num2[ num2[0] + 1 ] = 0;
                num2[j+1] += num2[j]/10;
                num2[j] %= 10;
                num2[0] += (num2[0] == j);
            }
        }
        for (int i = num2[0]; i >= 1; i--) {
            cout << num2[i];
        }
        cout << endl;
    }
    return 0;
}
