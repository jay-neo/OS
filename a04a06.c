#include <stdio.h>
#include <sys/ipc.h>
#include <sys/types.h>
#include <unistd.h>


void main() {
    
    int semid, key, nsem = 1;
    key = (key_t)0x30;
    semid = semget(key, nsem, IPC_CREAT | 0666 | IPC_EXCL);
    printf(" \ncreated semaphore id = %d", semid);
}