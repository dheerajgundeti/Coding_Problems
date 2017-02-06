//problem from hackerrank/algorithms/implementation
/*Lily likes to play games with integers and their reversals. For some integer x, we define reversed(x) to be the reversal of all digits in x.
  For example,reversed(123)=321 ,reversed(21)=12 , and reversed(120)=21.
  Logan wants to go to the movies with Lily on some day  satisfying i<x<j, but he knows she only goes to the movies on days
  she considers to be beautiful. Lily considers a day to be beautiful if the absolute value of the difference 
  between x and reversed(x) is evenly divisible by k.
  Given i,j, and k, count and print the number of beautiful days when Logan and Lily can go to the movies.
*/
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int i,j,k,res,rem,count=0,l_temp,new;
    scanf("%d %d %d",&i,&j,&k);
    for(int l=i;l<=j;l++){
        l_temp=l;
        res=0;
        while(l>0){
            rem=l%10;
            res=res*10+rem;
            l=l/10;
        }
        new=abs(l_temp-res);
        if(new%k==0)
            count++;
        l=l_temp;
    }
    printf("%d",count);
    return 0;
}

