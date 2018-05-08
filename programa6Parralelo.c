#include<stdio.h>
#include<stdlib.h>
#include<omp.h>
#define n 10


void suma(int A[],int B[],int C[]){
  int i , tid, inicio,fin;
  omp_set_num_threads(6);
  #pragma omp parallel private(inicio,fin,tid, i)
  {
     tid = omp_get_thread_num();
     inicio = tid*5;
     fin=(tid+1)*5;
     for(i = inicio; i< fin ; i ++){
         C[i] = A[i] + B[i];
         printf("hilo %d calculo A[%d]+B[%d] = %d\n",tid,i,i,C[i]);
     }
  }
}

/*void crearArreglo(int s[],n){
     for(int i =n;i<n+30;i++){

     }
     printf("\n");
}*/

int main(){
  int A[30]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30};
  int B[30]={31,32,33,34,35,36,37,38,39,40,41,42,43,44,45,46,47,48,49,50,51,52,53,54,55,56,57,58,59,60};
  int C[30];
  suma(A,B,C);
  return 0;
}
