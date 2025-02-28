int main() {
    int V[10],X[10];
    int  i, neg, j;
    neg = 0;
    j=0;
    
    for(i=0;i<10;i++){
     scanf("%d", &V[i]);
     if(V[i]<0){
        neg= neg+1;
        X[j]= i;
        j++;
     }
     }
  
    for(j=0; j < neg; j++){
      printf("%d ", X[j]);
    }


  return 0;
}