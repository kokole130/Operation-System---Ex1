#include <stdio.h>
#include <stdlib.h>
#include <dlfcn.h>

int main(){

    
    void *myso = dlopen("./libhello_Ariel.so", RTLD_LAZY);
    if(myso==NULL){
        printf("Error!\n");
        return 0;
    }
    void (*func)();
    func = dlsym(myso, "hello_Ariel");//compile with -ldl
    if(func==NULL){
        printf("Error!\n");
        return 0;        
    }
    func();
    dlclose(myso);
    return 0;
}