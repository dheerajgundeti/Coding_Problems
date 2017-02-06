
//problem from hackerrank/algorithms/implementation
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n,likes,count=0,people=5,Tlikes=0;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        likes=0;
        likes=floor(people/2);        
        people=likes*3;
        Tlikes=Tlikes+likes;
    }
    printf("%d",Tlikes);
    return 0;
}
