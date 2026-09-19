# include <stdio.h>
# include <omp.h>

void main(){

        int i;

        #pragma omp parallel for
        for(i=0; i<20; i++){
        printf("iteration %d executed by thread %d\n", i, omp_get_thread_num());
        }
}
