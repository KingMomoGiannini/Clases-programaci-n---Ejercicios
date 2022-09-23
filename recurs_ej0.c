//Ingresar un numero y calcular su factorial mediante recursividad.

#include<stdio.h>

int factorial(int x){
    if(x==0){
        return 1;
    }
    else{
        return x*factorial(x-1);
    }
}

int main(){
    int num;
    printf("Ingrese un numero para calcular su factorial: ");
    scanf("%d",&num);
    factorial(num);
    printf("\nEl factorial de %d es : %d",num,factorial(num));
    return 0;
}
