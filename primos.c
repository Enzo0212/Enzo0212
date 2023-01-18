#include "stdio.h"
int main(){
  int qtd, p = 1, x;
  printf("Digite a quantidade de numeros primos: ");
  scanf("%d", &qtd);
  for(int i = 0; i<qtd;){
    x = 0;
    for(int j=3; j<=p/j; j+=2){
      if(p%j==0){
        x=1;
        break;
      }
    }
    if(x==0){
      printf("%d\n", p);
      i++;
      if(p<3)p++;
      else p+=2;
      if(p%10==5)p+=2;
    } else{
      p+=2;
      if(p%10==5)p+=2;
    }
  }
}
