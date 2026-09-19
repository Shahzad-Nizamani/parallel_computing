#include <stdio.h>

int main() {
    double parallel;
    int cores;
    double speedup;

    printf("Enter the parallelizable fraction of the program (0 to 1): ");
    scanf("%lf", &parallel);

    printf("Enter the number of processors : ");
    scanf("%d", &cores);

    if (parallel < 0 || parallel > 1) {
        printf("Error: P must be between 0 and 1.\n");
        return 1;
    }
    if (cores <= 0) {
        printf("Error: number of processors must be a positive integer.\n");
        return 1;
    }

    double serial = 1 - parallel;
    speedup = 1.0 / (serial + (parallel / cores));

    printf("Total number of cores: %d\n", cores);
    printf("Parallel part of the program: %f\n", parallel);
    printf("Seriel part of the program: %f\n", serial);
    printf("Speed up of the program: %f\n", speedup);

    return 0;
}
