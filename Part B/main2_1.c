#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

void print(const char* str){
    int i=0;
    for(i=0;i<20;i++){
        printf("Hello From %s\n",str);
        usleep(1000000);
    }
}

int main(){
    pid_t pid=fork();

    if(pid==0){//child proccess
        pid_t pid=fork();
        if(pid==0){//grand child proccess
            //print("Grand Child\n");
            char* arr[2]={"./grand",NULL};
            execvp(arr[0],arr);
        }
        else{
            print("proccess 2 (Child)\n");
        }
    }
    else{
        print("proccess 1 (Parent)\n");
    }
    return 0;
}