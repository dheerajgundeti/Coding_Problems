#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>
int returnlength(char x,int a[]);
int main(){
    int ans,max=0;
    int size[26];
    char word[11];
    for(int i=0;i<26;i++)
        scanf("%d",&size[i]);
    scanf("%s",word);
    for(int i=0;i<strlen(word);i++){
        if(returnlength(word[i],size)>=max)
            max=returnlength(word[i],size);
    }
    ans=max*strlen(word);
    printf("%d",ans);
    
    
    return 0;
}
int returnlength(char x,int a[]){
    switch(x){
        case 'a': return (a[0]);
        case 'b': return (a[1]);
        case 'c': return (a[2]);
        case 'd': return (a[3]);
        case 'e': return (a[4]);
        case 'f': return (a[5]);
        case 'g': return (a[6]);
        case 'h': return (a[7]);
        case 'i': return (a[8]);
        case 'j': return (a[9]);
        case 'k': return (a[10]);
        case 'l': return (a[11]);
        case 'm': return (a[12]);
        case 'n': return (a[13]);
        case 'o': return (a[14]);
        case 'p': return (a[15]);
        case 'q': return (a[16]);
        case 'r': return (a[17]);
        case 's': return (a[18]);
        case 't': return (a[19]);
        case 'u': return (a[20]);
        case 'v': return (a[21]);
        case 'w': return (a[22]);
        case 'x': return (a[23]);
        case 'y': return (a[24]);
        case 'z': return (a[25]);
            
    }
    return 0;
}
