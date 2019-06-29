/*************************************************************************
	> File Name: ep08.cpp
	> Author: houhaien 
	> Mail: github.com/houhaien 
	> Created Time: 2019年06月15日 星期六 16时38分01秒
 ************************************************************************/

#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>
using namespace std;

#define MAXN 1000
char num[MAXN + 5];
int main() {
    int len = 0;
    while(~scanf("%s", num + len))  len += strlen(num + len);
    long long p = 1, zerocnt = 0, ans = 0;
    for (int i = 0; num[i]; i++) {
        num[i] -= '0';
        if(num[i]) 
            p *= num[i];
        else 
            zerocnt += 1;
        if (i - 13 < 0)    
            continue;
        if (num[i - 13]) 
            p /= num[i-13];
        else 
            zerocnt -= 1;
        if(zerocnt == 0 && p > ans) 
            ans = p;
    }
    printf("%lld\n",ans);
    return 0;
}
