#include<stdio.h>

int carga(int x[]){
    int i;
    for(i=1;i<6;i++){
        if (i%2==0){
            x[i]= i+2;
        }
        else{
            x[i]=0;
        }
        return x[i];
    }
}

void mostrar(int y){
    int j;
    for(j=0;j<6;j++){
        printf("valor:%d ,posicion %d \n",y,j);
    }
}

int main(){
    int vec[6];
    carga(vec);
    mostrar(carga(vec));
    return 0;
}
