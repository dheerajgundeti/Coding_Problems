//hackerrank/algorithms/implementations
/**********
author - Dheeraj Gundeti
**********/
#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>
    
 
int main() {
    int year; 
    scanf("%d", &year);
    int flag,k=9;
    char a[11];
    if(year==1918){
        printf("26.09.1918");
        return 0;
    }
    if((year%4==0)&&(year%100!=0)) flag=1;		
	else if((year%4==0)&&(year%100==0)&&(year%400==0)) flag=1;
	else flag=0;
    if(year<1918){
        if(year%4==0) flag=1;
    }
    while(year!=0){
        a[k]=48+year%10;
        year=year/10,k--;
    }
    a[10]='\0',a[0]='1',a[2]='.',a[3]='0',a[4]='9',a[5]='.';
    if(flag==1) a[1]='2';
    else a[1]='3';
    printf("%s\n",a);
    return 0;
}

