//Given two integers, l and r, find the maximal value of a xor b, where l<=a<=b<=r
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <assert.h>

int maxXor(int l, int r) {
        int res=0;
        for(int i=l;i<=r;i++)
            for(int j=i+1;j<=r;j++)
                if((i^j)>=res)
                     res=i^j;
        return (res);
}
int main() {
    int res;
    int l;
    scanf("%d", &l);
    
    int r;
    scanf("%d", &r);
    
    res = maxXor(l,r);
    printf("%d", res);
    
    return 0;
}

