#include<stdio.h>

void main(){
    float slf,sl,pd;
    
    printf("Qual seu salario?");
    scanf("%f", &sl);
    
    if(sl<=600){
        pd=0;
        slf=pd+sl;
    }if(600<sl && sl<=1200){
     pd=sl*20/100;
     slf=pd+sl;
    }if(1200<sl && sl<=2000){
     pd=sl*25/100;
     slf=pd+sl;
    }else if(sl>2000){
     pd=sl*30/100;
     slf=pd+sl;
    }
    printf("Percentual de desconto; %.2f", pd);
    printf("Salario final: %.2f", slf);
}
