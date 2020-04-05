#define _GNU_SOURCE
#include <stdio.h>
#include <stdlib.h>
#include <syslog.h>
#include <unistd.h>
#include <sched.h>
char process_stack[10000+1];


int main2_2(){
    char* args[]= {"./main2_2",NULL};
    execvp(args[0],args);
}


int main(){
    pid_t pid = fork();
    printf("pid is: %d",pid);
    if(pid==0) {//if this is the child proccess
        char* args[] = {"./main2_1",NULL};//fork
        int result = clone(main2_2,process_stack+10000, CLONE_PARENT,0);//clone
        execvp(args[0],args);

    }

    else{//if this is the parent proccess
        pid_t pid1 = fork();
        if(pid1==0) {
            char* args[] = {"./main2_3",NULL};//daemon
            execvp(args[0], args);
        }
        for (int i = 0; i < 20; ++i) {
            printf("father process \n");
            usleep(1000000);
        }
    }

    return 0;
}