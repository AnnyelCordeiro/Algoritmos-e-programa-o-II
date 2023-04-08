/*4 - Um número complexo é escrito na forma algébrica a + bi, onde a e b são números reais, o valor de a é a parte
real do número complexo e o valor bi é a parte imaginária. A soma de dois números complexos é realizada
somando as partes reais separadamente das partes imaginárias.
Por exemplo, seja os números z1 = 6 + 5i e z2 = 2 – i, a soma z1 + z2 = z3, onde z3 = 8 + 4i.
Escreva um programa para somar dois números complexos. Esse programa deve ter uma função com o seguinte
protótipo:
void somaComplexo( float rz1, float iz1, float rz2, float iz2, float *rz3, float *iz3 );*/

#include<stdio.h>

void somaComplexo( float rz1, float iz1, float rz2, float iz2, float *rz3, float *iz3 );

int main(){
    int i;
    float x1,x2,y1,y2,resultado_1,resultado_2;
for(i = 1; i != 0; i++){
    scanf("%f", &x1);

    if(x1==0){
        return 0;
}
    scanf("%f %f %f", &y1, &x2, &y2);


somaComplexo( x1, y1, x2, y2,&resultado_1,&resultado_2 );
printf("%.1f + %.1fi\n", resultado_1, resultado_2);

}                                                                           
return 0;
}

void somaComplexo( float rz1, float iz1, float rz2, float iz2, float *rz3, float *iz3 ){

     *rz3=rz1+rz2;
     *iz3=iz1+iz2;
 
}
