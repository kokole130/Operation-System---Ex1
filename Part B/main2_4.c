#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int main(){
    pid_t pid = fork();
    if(pid==0){
        char* arr1[2]={"./main2_1",NULL};
        execvp(arr1[0],arr1);
        pid_t pid = fork();
        if(pid==0){
            char* arr2[2]={"./main2_2",NULL};
            execvp(arr2[0],arr2);
            pid_t pid = fork(); 
            if(pid==0){
                char* arr3[2]={"./main2_3",NULL};
                execvp(arr3[0],arr3);
            } 
        }
    }
    //char* arr[]={"./main2_1","./main2_2","./main2_3",NULL};

    // char* arr2[2]={"./main2_2",NULL};
    // execvp(arr2[0],arr2);
    // char* arr3[2]={"./main2_3",NULL};
    // execvp(arr3[0],arr3);
    return 0;
}