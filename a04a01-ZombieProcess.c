#include <stdio.h>
#include <unistd.h>

void main() {
    if (fork() > 0) {
        printf("\nI am parent process.\n");
        sleep(10);
    }
}


/*

gcc a04a01-ZombieProcess.c 
./a.out &

*/
