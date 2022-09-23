#include<stdio.h> //Ingresar x e y  y hacemos el calculo de la potencia recursivamente.

int potencia(int x, int y){
        if(y==0){
            return 1;
        }
        else
        {
            return x*potencia(x,y-1);
        }

}

int main(){
    int base,exponente;
    printf("Ingrese un numero para la base: ");
    scanf("%d",&base);
    printf("Ingrese un numero para el exponente: ");
    scanf("%d",&exponente);
    potencia(base,exponente);
    printf("resultado: %d", potencia(base,exponente));
    return 0;
}
