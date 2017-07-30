#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

void syssoftstatus()
{
        char hostname[1024];
        gethostname(hostname, 1024);
        printf("======== System Status ========\n");
        printf("User : %s\n", getenv("USER"));
        printf("Hostname : %s\n",hostname);
        printf("======== Software Status ========\n");
}
