#include <stdio.h>
int i, N[10], temp;
char r, s, n, S;
void Impar(){
  i=0;
  printf("Digite os numeros do vetor: ");
  while(i<5){
    scanf("%d", &N[i]);
    i = i+1;
  }
    for(i=0;i<5;i=i+1){
      if(i%2==1){
        temp=N[i];
        N[i]=N[i+1];
        N[i+1]=temp;
      }
    }
}
void imprimir(){
  for(i=0;i<5;i=i+1){
  printf("\t%d\t", N[i]);
    }
}
int main() {
    do {
        Impar();
        imprimir();
        printf("deseja continuar? (s/n)");
        scanf(" %c", &r);
    } while(r != 'n' && r == 's');
}