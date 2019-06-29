/*************************************************************************
	> File Name: ep31.cpp
	> Author: houhaien 
	> Mail: github.com/houhaien 
	> Created Time: 2019年06月15日 星期六 20时17分34秒
 ************************************************************************/

#include <iostream>
#include <cstdio>
#include <algorithm>
using namespace std;
#define MAXN 8
#define MAXM 200
int w[MAXN + 5] = {1,2,5,10,20,50,100,200} ;
//int f[MAXN + 5][MAXM +5];
int f[2][MAXM + 5];
//int f[MAXM +5] = {0};
/*
int main() {
    
    for (int i = 0; i < MAXN; i++) {
        //int k = i % 2;
       // f[k][0] = 1;
        f[i][0] = 1;
        for (int j = 1; j <= MAXM; j++) {
            f[i][j] = 0;
            if (i -1 >= 0)
            f[i][j] += f[i-1][j];
            if(j >= w[i]) f[i][j] += f[i][j-w[i]];
        }
    }
    cout << f[MAXN - 1][MAXM] << endl;
    return 0;
}
*/
int main() {
    for (int k = 0; k < MAXN; k++) {
        int i = k % 2;
        f[i][0] = 1;
        for (int j = 1; j <= MAXM; j++) {
            f[i][j] = f[i^1][j];
            if(j >= w[k]) {
                f[i][j] += f[i][j - w[k]];
            }
        }
    }
    cout << f[(MAXN - 1) % 2][MAXM] << endl;
    return 0;
}
/*
int main() {
    f[0] = 1;
    for (int k = 0;k < MAXN; k++) {
        
        for (int j = w[k]; j <= MAXM; j++) {
            f[j] += f[j-w[k]];
        }
    }
    cout << f[MAXM] << endl;
    return 0;
}
*/

