#include<stdio.h>

void imprime(int s[]){
     for(int n =0;n<10;n++){
          printf("%d ",s[n]);
     }
     printf("\n");
}

int main(){
  int A[10]= {1,2,3,4,5,6,7,8,9,10};
  int B[10] = {11,12,13,14,15,16,17,18,19,20};
  int C[10];

  for(int n=0 ; n<10; n++){
     C[n]= A[n]+B[n];
  }

  imprime(A);
  imprime(B);
  printf("     +       \n");
  imprime(C);
  return 0;
}
