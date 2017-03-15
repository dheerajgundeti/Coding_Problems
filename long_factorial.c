#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int n,temp,res,plus; 
    scanf("%d",&n);
    int *a;
    a=calloc(1000,sizeof(int));
    a[0] = 1;
    int l = 1;
    for (int i = 2; i <= n; i++) {
        plus = 0;
        for (int j = 0; j < l; j++) {
            res = i*a[j]+plus;
            a[j] = res%10;
            plus = res/10;
        }
        while (plus) {
           a[l] = plus % 10;
           plus= plus/10;
           l++;
        }
    }

    for (int i=l-1;i>=0;i--)
        printf("%d", a[i]);
    return 0;
}
