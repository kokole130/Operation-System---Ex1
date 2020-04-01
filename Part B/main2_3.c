#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <syslog.h>

int main(){
    pid_t pid=fork();

    if(pid==0){
        chdir("/");
        setsid();

        close(stdout);
        close(stdin);
        close(stderr);

        openlog("MY_DAEMON",LOG_PID,LOG_DAEMON);
        syslog(LOG_NOTICE,"START\n");
        usleep(3000000);
        syslog(LOG_NOTICE,"WORKING\n");
        usleep(3000000);
        syslog(LOG_NOTICE,"FINIHSED\n");
    }
    else{
        printf("DAEMON_PID %d\n",pid);

    }
    return 0;
}