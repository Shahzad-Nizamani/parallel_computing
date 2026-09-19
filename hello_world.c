# include <stdio.h>
# include <omp.h>

void main(){
    #pragma omp parallel
    {
    printf("hello from thread %d\n", omp_get_thread_num());
    }
}
