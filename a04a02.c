#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>


void *print_msg(void *ptr){
    char *message;

    message = (char *)ptr;
    printf("%s\n", message);
}


void main() {
    
    pthread_t thread1, thread2;

    char *msg1 = "I am thread1";
    char *msg2 = "i am thread2";
    int ret1, ret2;

    ret1 = pthread_create(&thread1, NULL, print_msg, (void *)msg1);
    ret2 = pthread_create(&thread2, NULL, print_msg, (void *)msg2);

    pthread_join(thread1, NULL);
    pthread_join(thread2, NULL);

    printf("thread1 returns:%d", ret1);
    printf("thread2 returns:%d", ret2);

    exit(0);
}