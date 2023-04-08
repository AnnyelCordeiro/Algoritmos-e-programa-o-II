#include<stdio.h>

void main(){
 int a,b,i=1;
 
 scanf("%i", &a);
 scanf("%i", &b);
    
    while(i<=a*b){
        if(i%b==0){
            printf("\n");
        }else{
            printf("*");
            i++;
        }
    }
}
