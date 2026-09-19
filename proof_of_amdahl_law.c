#include <stdio.h>

int main(){
    double parallel_parts[] = {.25, .50, .75, .90, .99};
    int cores[] = {1, 2, 4, 8, 32, 128, 512, 1024};
    size_t len_p = sizeof(parallel_parts) / sizeof(parallel_parts[0]);
    size_t len_c = sizeof(cores) / sizeof(cores[0]);

    for(int i=0; i<len_p; i++){
        double p = parallel_parts[i];
        printf("#### PARALLEL PART #####: %.2f\n", p);

        for(int j=0; j<len_c; j++){
            int c = cores[j];
            double speedup = 1.0 / ((1 - p) + (p / c));
            printf("number of cores: %d\n", c);
            printf("speedup of the program: %.2f\n", speedup);
        }
    }
    return 0;
}