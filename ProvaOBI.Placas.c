#include <stdio.h>
#include <string.h>
#include <ctype.h>
int TAM;
char placa[100];
void validacao();

int main(){
    
    scanf("%s", placa);
    TAM =strlen(placa);


    validacao();

 return 0;

}

void validacao(){
    int i = 0;

    //PADRAO ANTIGO BRASILEIRO
    if(TAM==8){
       while(i<TAM){
    
       //os três primeiros caracteres são letras maiúsculas
        if(i<=2){
         if(isalpha(placa[i]) && isupper(placa[i])){
          i++;
         } else{
            printf("\n0");
            break;
         }
        }

       //o quarto caractere é um hífen (-)
        if(i==3){
         if(placa[i] =='-'){
         i++;
         } else {
            printf("0");
            break;
         }
        }


        //os últimos quatro caracteres são dígitos (de 0 a 9)
         if(i >= 4){
          if(isdigit(placa[i])){
             i++;

         } else{
            printf("\n0");
            break;
         }
        }
        if(i==7){
          printf("\n1");

        }
       }
       
    //O novo padrão Mercosul
    } else if(TAM==7){
     while(i<TAM){
        if(i<=2){
          if(isalpha(placa[i]) && isupper(placa[i])){
            i++;
          }else{
            printf("0");
            break;
          }
        }
        
        if(i==3){
            if(isdigit(placa[i])){
            i++;
            } else{
                printf("0");
                break;
            }
        }

        if(i==4){
            if(isalpha(placa[i]) && isupper(placa[i])){
                i++;
            }
        }

        if(i >= 5){
            if(isdigit(placa[i])){
            i++;
            } else{
                printf("0");
                break;
            }
        }

        if(i==7){
          printf("\n2");

        }

    }   
       

     } else{
        printf("\n0");

    }
   
}