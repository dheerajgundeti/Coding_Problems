#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int t;
    scanf("%d",&t);
    for(int i=1;i<=t;i++){
        unsigned int n;
        scanf("%u",&n);
        n=4294967295^n;
        printf("%u\n",n);
    }
    return 0;
}
