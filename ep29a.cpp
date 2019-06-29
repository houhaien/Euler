/*************************************************************************
	> File Name: ep29a.cpp
	> Author: houhaien 
	> Mail: github.com/houhaien 
	> Created Time: 2019年06月27日 星期四 20时59分21秒
 ************************************************************************/

#include <iostream>
#include <cstdio>
#include <cmath>
#include <cstring>
#include <algorithm>
using namespace std;
#define MAXN 100
struct Date{
    int cnt,p[5], a[5];
    int i,j;
}arr[MAXN * MAXN];

int cnt = 0;

bool same(Date &a, Date &b) {
    if (a.cnt != b.cnt) return false;
    for (int i = 0; i < a.cnt; i++) {
        if (a.p[i] != b.p[i] || a.a[i] != b.a[i]) return false;   
    }
    return true;
}
void add (int a, int b) {
    Date temp;
    temp.cnt = 0;
    temp.i = a; 
    temp.j = b;
    int i = 2;
    while(a != 1) {
        if (a % i == 0) {
            temp.p[temp.cnt] = i;
            temp.a[temp.cnt] = 0;
            while(a%i == 0) a /= i, temp.a[temp.cnt] += 1;
            temp.cnt += 1;
        }
        i+=1;
    }
    for (int i = 0; i < temp.cnt; i++) {
        temp.a[i] *= b;
    }
    for (int i = 0; i < cnt ; i++) {
        if(!same(temp, arr[i]))continue;
        return; 
    }
    memcpy(arr + cnt , &temp, sizeof(temp));
    cnt += 1;
    return ;
}

bool cmp (const Date &a, Date &b) {
    return a.j * log10 (a.i) < b.j * log10(b.i);
}
int main() {
    for (int i = 2; i <= MAXN; i++) {
        for (int j = 2; j <= MAXN; j++){
            add(i,j);
        }
    }
    sort(arr, arr +cnt, cmp);
    for (int i = 0; i < cnt ; i++) {
        cout << arr[i].i << " " << arr[i].j << endl;
    }
    cout << cnt << endl;
    return 0;
}
