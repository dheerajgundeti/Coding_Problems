//printing the integer which appeared once in given integers
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <assert.h>
int main()
{
    int n,res=0;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n;i++){
         res=res^a[i];
    }  
    printf("%d", res);
    
    return 0;
}


