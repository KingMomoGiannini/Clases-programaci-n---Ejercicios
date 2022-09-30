#include<stdio.h>
#include<string.h>

void deletrear(char name[]){
    int i;
    for(i=0; i < strlen(name);i++){
        printf("%c-",name[i]);
    }
}

int main (){
    char nombre[15];
    printf("Ingrese un nombre: ");
    gets(nombre);
    deletrear(nombre);
    return 0;
}
