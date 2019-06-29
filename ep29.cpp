/*************************************************************************
	> File Name: ep29.cpp
	> Author: houhaien 
	> Mail: github.com/houhaien 
	> Created Time: 2019年06月27日 星期四 20时22分26秒
 ************************************************************************/

#include <iostream>
#include <cstdio>
#include <cmath>
using namespace std;
#define MAXN 100

int f[MAXN + 5][MAXN + 5];
int dis[MAXN + 5];

struct Data{
    int a,b;
}arr[MAXN *MAXN];
int cnt = 0;

bool cmp(const Data &a, const Data &b) {
    return a.b * log10(a.a) < b.b * log10(b.a);
}
void getXY(int a, int b, int &x, int &y) {//把i的j的防转化为j的i次方
    int temp = a;
    x = dis[a], y = 0;
    while (temp != 1) y += b, temp /= x;
    return ;
}
void filter(int i, int x, int y) { // 筛选
    for (int k = 2; k <= y; k++) {
        if (y % k) continue;
        int a1 = k;
        int a2 = y / k;
        //判断底数不超过100 判断底数大于i
        if (a1 * log10(x) <= log10(MAXN) && pow(x, a1) > i) {
            f[(int)pow(x, a1)][a2] = 1;
        }
    }
}
int main() {
    dis[1] = 1;    
   //找最小表示法 
    for (int i = 2; i * i <= MAXN; i++) {
        for (int j = 2; j <= MAXN; j++) {
            if (f[i][j]) continue;
            for(int k = 2; k * k <= j; k++) {
                if (j % k) continue;
                int a1 = k,  a2 = j / k;
               // if(1.0 *a1 * log10(i) <= 2.0)  f[(int) pow(i,a1)][a2] = 1;
                //if(1.0 *a2 * log10(i) <= 2.0)  f[(int) pow(i,a2)][a1] = 1;
                f[i^a1][a2] = 1;
                f[i^a2][a1] = 1;
            }
        }
    }
    int sum = 0;
    for (int i = 2; i <= MAXN; i++) {
        for (int j = 2; j<= MAXN; j++) {
            if (f[i][j])  continue;
            sum += 1;
        }
    }
    cout << sum << endl;
    return 0;

}
