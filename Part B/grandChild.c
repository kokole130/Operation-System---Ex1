#include <stdio.h>
#include <stdlib.h>

void print(char* str){
    for(int i=0;i<20;i++){
        printf("Hello Baby From %s\n",str);
        usleep(1000000);
    }
}

int main(){
    print("proccess 3 (Grand Child)");
    return 0;
}