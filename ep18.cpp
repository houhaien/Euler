/*************************************************************************
	> File Name: ep18.cpp   方法：动态规划(逆向递推)
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


int dfs(int i, int j, int n) {
    if (i + 1 == n) {
        return val[i][j];
    }
    int val1 = dfs(i + 1, j ,n);
    int val2 = dfs(i + 1, j + 1, n);
    return (val1 > val2 ? val1:val2) + val[i][j];
}


int main() {
    for (int i=0; i <MAXN; i++) {
        for (int j = 0; j <= i; j++) {
            cin >> val[i][j];
        }
    }
    for ( int i = MAXN -2; i >= 0 ; --i ) {
        for (int j = 0; j <= i; j++)
        val[i][j] += max (val[i+1][j],   val[i+1][j+1]);
    }
    cout << val[0][0] << endl;
    //cout << dfs(0,0,MAXN) << endl;
    return 0;
}
