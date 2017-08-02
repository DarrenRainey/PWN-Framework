#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

void syssoftstatus()
{
	char softver[10] = "V1.0A";
        char hostname[1024];
        gethostname(hostname, 1024);
        printf("======== System Status ========\n");
        printf("User : %s\n", getenv("USER"));
        printf("Hostname : %s\n",hostname);
        printf("Software Version : %s\n",softver);
        printf("======== Software Status ========\n");
}
