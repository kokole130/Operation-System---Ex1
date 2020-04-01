#define _GNU_SOURCE
#include <sched.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>


#define STACKSIZE 10000
#define CYCLES 1000

char child_stack[STACKSIZE+1];

void print(const char* str){
    for(int i=0;i<CYCLES;i++){
        printf("Hello From %s\n",str);
        usleep(1000000);
    }
}

int child2(void* params){
    print("App 2\n");
}

int child3(void* params){
    print("App 3\n");
}
int main(){
    /*int result=*/clone(child2,child_stack+STACKSIZE,CLONE_PARENT,0);
        clone(child3,child_stack+STACKSIZE,CLONE_PARENT,0);

    //printf("clone result = %d\n",result);
    print("App 1");
    return 0;
}