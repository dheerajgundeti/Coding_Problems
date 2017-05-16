//hackerrank/algorithms/implementations
/***********
author - Dheeraj Gundeti
***********/
#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int n,max=0,k=0,alia=0; 
    scanf("%d",&n);
    int *ranks;
    ranks=calloc(n+1,sizeof(int));
    int *scores = malloc(sizeof(int) * n);
    for(int scores_i = 0; scores_i < n; scores_i++){
       scanf("%d",&scores[scores_i]);
       if(scores[scores_i]!=max) k++;
       ranks[scores_i]=k;
       max=scores[scores_i];
    }
    ranks[n]=k+1;
    int m; 
    scanf("%d",&m);
    k=n-1;
    int *alice = malloc(sizeof(int) * m);
    for(int alice_i = 0; alice_i < m; alice_i++){
       scanf("%d",&alice[alice_i]);
        int i=k;
        while(alice[alice_i]>scores[i] && i>=0) i--;
        if(alice[alice_i]==scores[i]) ranks[i+1]=ranks[i];
        else ranks[i+1]=ranks[i]+1;
        printf("%d\n",ranks[i+1]);
        k=i;
    }
    return 0;
}

