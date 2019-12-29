# parallel-and-concurrent-programming
Examples of parallel and concurrent programming in C

## Before starting

Each C file in this repo is an example by itself, so you will need to compile and run them separatelly

## How to compile and run a program

### OpenMP programs openmp_{{example}}.c

#### MACOS
Compiling
> clang -Xpreprocessor -fopenmp -I/usr/local/include -L/usr/local/lib -lomp openmp_{{example}}.c -o openmp_{{example}}.out

Running
> ./openmp_{{example}}.out

#### Others
> gcc openmp_{{example}}.c -o openmp_{{example}}.out -fopenmp

Running
> ./openmp_{{example}}.out