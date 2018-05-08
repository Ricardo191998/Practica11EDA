#include<stdio.h>
#include<omp.h>

int main()
{
    #pragma omp for
    {
      printf("Hola mundo \n");
      for(int n=1;n<10;n++){
          printf("Iteracion: %d\n",n);
      }
    }
}
