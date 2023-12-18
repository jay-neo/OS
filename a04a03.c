#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>


void *sum_using_Loop(void *ptr) {

    int *m, sum, n, i;
    m = (int *)ptr;
    n = *m;

    for (i = 1; i <= n; i++) {
        sum += i;
    }

    printf("sum using loop is %d\n", sum);
}


void *sum_without_Loop(void *ptr) {
    int *m, sum, n, i;
    m = (int *)ptr;
    n = *m;
    sum = (n * (n + 1)) / 2;
    
    printf("sum without loop is %d\n", sum);
}


int main() {

    pthread_t thread1, thread2;
    int *int1, *int2, ret1, ret2, i;

    printf("Enter the number = ");
    scanf("%d", &i);

    int1 = int2 = &i;

    ret1 = pthread_create(&thread1, NULL, sum_using_Loop, (void *)int1);
    ret2 = pthread_create(&thread2, NULL, sum_without_Loop, (void *)int2);

    pthread_join(thread1, NULL);
    pthread_join(thread2, NULL);

    printf("thread1 returns:%d\n", ret1);
    printf("thread2 returns:%d\n", ret2);

    exit(0);
}