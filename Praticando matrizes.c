#include <stdio.h>
# define TAM 3

int LerMatriz();
int ImprimirMatriz();

int M[TAM][TAM];

int main(){
    LerMatriz();
    ImprimirMatriz();

    return 0;
}

LerMatriz(){
    int i, j;
    for(i=0;i< TAM; i++){
      for(j=0;j<TAM;j++)
      scanf("%d", &M[i][j]);
}

}
ImprimirMatriz(){
    int i,j;

    for(i=0;i<TAM;i++){
     for(j=0;j<TAM;j++)
     printf("%d", M[i][j]);
     printf(" \n");
    }
    
}