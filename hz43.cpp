/*************************************************************************
	> File Name: hz43.cpp
	> Author: houhaien 
	> Mail: github.com/houhaien 
	> Created Time: 2019年06月25日 星期二 19时30分33秒
 ************************************************************************/

#include <iostream>
#include <cstdio>
#include <algorithm>
using namespace std;

#define MAXN 1000
long long val[MAXN+ 5][MAXN +5];

int main() {
    int n;
    cin >> n;
    for (int i=1; i <= n; i++){
        for (int j=1; j <=i; j++) {
            cin >> val[i][j];
        }
    }
    
    for (int i = n -1; i >= 1; i--) {
        for (int j = 1; j <= i ;j++) {
            val[i][j] += max(val[i+1][j],val[i+1][j+1]);
        }
    }
    cout << val[1][1] << endl;
    return 0;
}
