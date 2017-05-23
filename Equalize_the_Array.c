/***********
author - Dheeraj Gundeti
***********/
//hackerrank/algorithms/implementations
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n,ans=0;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++) scanf("%d",&a[i]);
    for(int i=0;i<n;i++){
        int k=0;
        for(int j=0;j<n;j++)
            if(a[i]==a[j]) k++;
        if(k>=ans) ans=k;
    }
    printf("%d",n-ans);
    return 0;
}

