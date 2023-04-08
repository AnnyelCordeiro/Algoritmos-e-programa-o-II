/*2. Faça um programa que calcule as raízes de uma equação quadrática: ax^2 + bx + c = 0. Esse programa deve
ter uma função com o seguinte protótipo:
void raizes(float a, float b, float c, float *x1, float *x2);
Essa função deve armazenar em x1 e x2 as raízes reais da equação, caso existam.8*/

#include<stdio.h>
#include<math.h>

void raizes(float a,float b, float c, float *x1, float *x2);

int main(){
float a,b,c,resultado1,resultado2;

printf("Digite o valor de 'a'");
scanf("%f", &a);
printf("Digite o valor de 'b'");
scanf("%f", &b);
printf("Digite o valor de 'c'");
scanf("%f", &c);

raizes(a,b,c,&resultado1,&resultado2);

printf("%f e %f", resultado1, resultado2);

}

void raizes(float a,float b, float c, float *x1, float *x2){
 float delta;

delta=pow(b,2)-4 * a * c;
if (delta >=0)
{
    *x1=((b * -1) + sqrt(delta))/(2 * a);
    *x2=((b * -1) - sqrt(delta))/(2 * a);
}else{
    printf("Complexo\n");
}


}