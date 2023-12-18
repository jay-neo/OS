#include <stdio.h>
#include <unistd.h>

void main() {
    int k;
    k = fork();
    if (k < 0) {
        printf("Fork process call failed");
    } else if (k == 0) {
        printf("I am child process and my pid is =%d\n", getpid());
        printf("I am child process and my parent pid =%d\n", getppid());
    } else {
        printf("I am parent process and my pid is =%d\n", getpid());
        printf("I am parent process and my parent pid is =%d\n", getppid());
    }
}


/*

gcc a04a01-ParentChildProcess.c 
./a.out

*/
