#include <stdio.h>
#include <math.h>

typedef struct variaveis
{
    float x;
    float y;
} Ponto;

double distancia(Ponto a, Ponto b){

    return sqrt(pow(b.x - a.x, 2) pow(a.y - b.y, 2));
}

int main(){
    Ponto a.x = 4, a.y = 3;

   Ponto b.x=0, b.y=3;


    printf("%f", distancia(a,b));



    return 0;
}
