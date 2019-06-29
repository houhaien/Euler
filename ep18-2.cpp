/*************************************************************************
	> File Name: ep18.cpp   方法：记忆化
	> Author: houhaien 
	> Mail: github.com/houhaien 
	> Created Time: 2019年06月25日 星期二 18时40分55秒
 ************************************************************************/

#include <iostream>
#include <cstdio>
#include <algorithm>
using namespace std;

#define MAXN 20
int val[MAXN+5][MAXN+5];

int rval[MAXN+5][MAXN +5] = {0};

//从ij点走到第n边的最大值
int dfs(int i, int j, int n) {
    if (i + 1 == n) {
        return val[i][j];
    }
    if (rval[i][j] != 0) return rval[i][j];
    int val1 = dfs(i + 1, j ,n);
    int val2 = dfs(i + 1, j + 1, n);
    
    return (rval[i][j] = (val1 > val2 ? val1:val2) + val[i][j]);
}


int main() {
    for (int i=0; i <MAXN; i++) {
        for (int j = 0; j <= i; j++) {
            cin >> val[i][j];
        }
    } 
    cout << dfs(0,0,MAXN) << endl;
    return 0;
}
