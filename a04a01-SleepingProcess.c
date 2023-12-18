#include <stdio.h>
#include <unistd.h>

void main() {
    sleep(20);
    printf("\nI am sleeping process.\n");
}


/*

gcc a04a01-SleepingProcess.c 
./a.out &

*/
