/*************************************************************************
	> File Name: ep33.cpp
	> Author: houhaien 
	> Mail: github.com/houhaien 
	> Created Time: 2019年06月16日 星期日 14时33分18秒
 ************************************************************************/

#include <iostream>
#include <cstdio>
using namespace std;


inline float isvaild(int fz, int fm) {
    float a1 = fz % 10;
    float a2 = (fz / 10) % 10;
    float b1 = fm % 10;
    float b2 = (fm / 10) % 10;
    if (a1 == b1) return a2 / b2;
    else if (a1 == b2) return a2 / b1;
    else if (a2 == b1) return a1 / b2;
    //else if (a2 == b2) return a1 / b1;
    return 0;

} 

int main() {
    for ( float x = 1; x < 100 ; x++) {
        for (float y = 1; y < x; y++) {
            if(isvaild(y,x) == y / x) {
                cout << y << "/" << x << endl;
            }
        }
    }
    return 0;
}
