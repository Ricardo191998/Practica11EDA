#include<stdio.h>
#include<omp.h>

int main()
    {
    int n;
    #pragma omp parallel num_threads(6)
    {
      printf("Hola mundo \n");
      for(n=1;n<10;n++){
          printf("%d\n",n);
      }
    }

}
