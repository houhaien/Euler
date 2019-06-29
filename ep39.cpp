/*************************************************************************
	> File Name: ep39.cpp
	> Author: houhaien 
	> Mail: github.com/houhaien 
	> Created Time: 2019年06月29日 星期六 10时47分23秒
 ************************************************************************/

#include <iostream>
#include <cstdio>
#include <cmath>
using namespace std;
#define MAXN 1000

int many[MAXN + 10] = {0};
int gcd (int a,int b) {
    return (b ? gcd(b,a%b) : a);

}
int main() {
    int a, b, c;
    int maxnum = -1;
    int cnt;
    for (int i = 1; i  <= MAXN; i++) {
        for (int j = i + 1 ; j * j<= MAXN; j++) {
            if (gcd (i,j) == 1){
                a = 2 * i * j;    
                b = i * i - j * j;
                c = i * i + j * j;
                int sum = a+ b+c;
                for (int i = 1; i < 1000; i++) {
                    if (sum * i <= 1000) {
                        many[sum * i]++;
                    }
                }
            }
        }
    }
    for (int i = 1; i <= MAXN ; i++) {
        if (many[i] > maxnum)  {    
            maxnum = many[i];
            cnt = i;

        }
    }
    cout << cnt << endl;
    return 0;

}
