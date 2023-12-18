#include <stdio.h>
#include <unistd.h>
#include <signal.h>
#include <stdlib.h>


void inthandler(int sig_no);
void quithandler(int sig_no);
void huphandler(int sig_no);


void main() {
    int pid;

    if ((pid = fork()) < 0) {
        perror("\nChild process can not be created\n");
        exit(1);
    }

    if (pid == 0) {
        signal(SIGINT, inthandler);
        signal(SIGQUIT, quithandler);
        signal(SIGHUP, huphandler);
        for (;;);
    } else {
        printf("\nPID is %d\n", pid);
        printf("\nSending SIGINT signal\n");
        kill(pid, SIGINT);
        sleep(5);
        printf("\nSending SIGQUIT signal\n");
        kill(pid, SIGQUIT);
        sleep(5);
        printf("\nSending SIGHUP signal\n");
        kill(pid, SIGHUP);
        sleep(5);
        printf("\nSending SIGTOP signal\n");
        kill(pid, SIGSTOP);
        sleep(5);
    }
}

void inthandler(int sig_no){
    signal(SIGINT, inthandler);
    printf("\nInterrupt signal handled by child\n");
}

void quithandler(int sig_no) {
    signal(SIGQUIT, quithandler);
    printf("\nQuit signal handled by child\n");
}

void huphandler(int sig_no) {
    signal(SIGHUP, huphandler);
    printf("\nHang hup signal handled by child\n");
}