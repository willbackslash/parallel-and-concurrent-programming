#include <stdio.h>
#include <omp.h>

int main(int argc, char const *argv[])
{
    //we will use 4 threads
    omp_set_num_threads(4);

    //we define the next section to be parallel with a pragma directive
    #pragma omp parallel
    {
        //It will show a hello world message and the number of thread
        printf("Hello World from thread number %d\n", omp_get_thread_num());
    }

    return 0;
}
