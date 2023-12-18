#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/ipc.h>
#include <sys/sem.h>

int main() {
    int semid, key, nsem = 1, i, c = 0;
    for (i = 1;; i++) {
        key = (key_t)i;
        semid = semget(key, nsem, IPC_CREAT | 0666);

        if (semid == -1) break;
        else c++;
    }

    printf(" \nMaximum number of semaphores created is %d\n", i);
    
    return 0;
}