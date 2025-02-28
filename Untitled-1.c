#include <stdio.h>

void calculo(){
     int N[4],i,total,media;
    printf("Digite os valores do vetor: ");
        media=0; 
        total=0;

    for(i=0;i<4;i++){
        scanf("%d", &N[i]);
      total=total+N[i];
    }
    media=total/4;

    for(i=0;i<4;i++){
        if(N[i] > media){
            printf("\t%d\t", N[i]);
        }
    }
}
int main() {
    calculo();
return 0;
}