#include <stdio.h>
#include <omp.h>

#define ITERATIONS 100

int main(int argc, char const *argv[])
{
    // we will use 4 threads
    omp_set_num_threads(4);

    // The next pragma directive is used to distribute the for loops in the threads
    #pragma omp parallel for
    for (int i = 0; i < ITERATIONS; ++i)
    {
        //It will show a message with the value of i and the number of thread
        printf("Iteration # %d from thread # %d\n", i, omp_get_thread_num());
    }

    return 0;
}
