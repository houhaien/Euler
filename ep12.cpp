/*************************************************************************
	> File Name: ep12.cpp
	> Author: houhaien 
	> Mail: github.com/houhaien 
	> Created Time: 2019年06月16日 星期日 19时43分55秒
 ************************************************************************/

#include <iostream>
#include <cstdio>
using namespace std;

#define MAXN 10000
int prime[MAXN +5];
//int cnt [MAXN + 5];

int f[MAXN + 5];    //记录因字数量
int main() {
    f[1] = 1;
    //线性筛
    for (int i = 2; 2 * i <= MAXN; i++) {
        if (!prime[i]) {
            prime[++prime[0]] = i;
            f[i] = 2;//计算素数的因子数量
           // cnt[i] = 1;
        }
        for (int j = 1; prime[j] * i <= MAXN; j++) {
            prime[prime[j] * i] = 1;
            if(i % prime[j] == 0)  {
                //prime[i] prime[j]不互素
                int a = i,cnt = 0;
                while (a% prime[j]== 0) {
                    a /= prime[j];
                    cnt++;
                }
                f[prime[j] * i] = f[i] /(cnt +1) * (cnt + 2);
                break;
            } else {
                    f[prime[j] * i] = f[prime[j]] * f[i];

                }
            
        }
    }
    for (int i = 2; i <= 100; i++) {
        cout << i << "=" << f[i] << endl;
    }
    return 0;
}
