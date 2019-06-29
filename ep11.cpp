/*************************************************************************
	> File Name: ep11.cpp
	> Author: houhaien 
	> Mail: github.com/houhaien 
	> Created Time: 2019年06月15日 星期六 18时39分47秒
 ************************************************************************/

#include <iostream>
#include <cstdio>
using namespace std;
#define MAXN 20
//方向数组
int dir[4][2] = {1,0,
                 0,1,
                 1,-1,
                 1,1};
int grid[MAXN + 5][MAXN +5];


int calc(int x,int y) {
    int ans = 0;
    for (int k = 0; k< 4; k++) {
        int p = 1;
        for (int step = 0; step <4; step++) {
            int dx = x + step * dir[k][0];
            int dy = y + step * dir[k][1];
            if (dx < 0 || dx >= MAXN) break;
            if (dy < 0 || dy >= MAXN) break;
            p *= grid[dx][dy];
        }
        if (p > ans) ans = p;
    }
    return ans;
}


int main() {
    for (int i = 0; i < MAXN; i++) {
        for (int j = 0; j < MAXN; j++) {
            cin >> grid[i][j];
        }
    }
    int ans = 0;
    for (int i = 0; i < MAXN; i++) {
        for (int j = 0; j < MAXN; j++) {
            int p = calc(i,j);
            if (p > ans) ans = p;
        }
    }
    cout << ans << endl;
    return 0;
}
