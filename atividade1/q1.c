#include<stdio.h>

void main(){
    float x,lucro,vf;
printf("valor da compra: ");
scanf("%f", &x);
 

 if(x<20){
    lucro=x*45/100; 
    vf=x+lucro;

 }else if(x>20){
     lucro=x*30/100;
     vf=x+lucro;
}
printf("valor: %f", vf);

}
