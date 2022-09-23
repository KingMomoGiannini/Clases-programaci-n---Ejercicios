#include<stdio.h>//Crear una recursiva para mostrar un numero de forma invertida.

void invertir(int x){
    if(x<10){
        printf("%d",x);
    }
    else{
        printf("%d",x%10);
        invertir(x/10);
    }
}

int main(){
    int num;
    printf("Ingrese un  numero de tres cifras: ");
    scanf("%d",&num);
    invertir(num);
    return 0;
}
