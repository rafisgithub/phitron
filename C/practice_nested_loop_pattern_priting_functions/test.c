#include <stdio.h>
#include <time.h>

int main() {
    clock_t start, end;
    double cpu_time_used;

    start = clock(); // Record start time

    // Code to be timed
    for (long long int i = 0; i < 10000000; i++);
    // for (long long int i = 0; i < 10000000; i++);
    // for (long long int i = 0; i < 10000000; i++);
    // for (long long int i = 0; i < 10000000; i++);
    // for (long long int i = 0; i < 10000000; i++);
    // for (long long int i = 0; i < 10000000; i++);


    end = clock(); // Record end time

    cpu_time_used = ((double) (end - start)) / CLOCKS_PER_SEC; // Calculate elapsed time
    printf("Time taken: %f seconds\n", cpu_time_used);

    return 0;
}