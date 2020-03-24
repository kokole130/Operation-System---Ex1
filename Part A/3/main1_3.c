#include <stdio.h>
#include <stdlib.h>
#include <dlfcn.h>

int main(){

    
    //typedef void (*some_func)();
    void *myso = dlopen("hello_Ariel.so", RTLD_LAZY);
    void (*func)();
    func = dlsym(myso, "hello_Ariel");
    func();
    
    dlclose(myso);
    return 0;
}