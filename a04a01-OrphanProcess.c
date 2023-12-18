#include <stdio.h>
#include <unistd.h>

void main() {
    int k;
    k = fork();
    if (k < 0) {
        printf("Fork process call is failed.");
    } else if (k == 0) {
        printf("I am child process and my pid = %d\n", getpid());
        printf("I am child process and my parent pid is =%d\n", getppid());
        sleep(10);
        printf("\nI am a orphan process and my pid =%d\n", getpid());
        printf("I am a orphen process and my parent pid =%d\n", getppid());
    } else {
        printf("I am parent process and my pid = %d\n", getpid());
    }
}


/*

gcc a04a01-OrphanProcess.c 
./a.out

*/
