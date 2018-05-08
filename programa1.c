#include<stdio.h>
#include<omp.h>

int main()
    {
    #pragma omp parallel num_threads(6)
    {
      int n ;
      printf("Hola mundo \n");
      for(n=1;n<10;n++){
          printf("%d\n",n);
      }
    }

}
