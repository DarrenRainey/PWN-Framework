/*
  Code By Darren Rainey 2017
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

extern updatesrc();
extern updatebinary();
extern syssoftstatus();
int main(int argc, char *argv[])
{
  printf("PWN Framework V1.0A By DarrenRainey\n");
  char opition[100];
  int loop = 1;
  while (loop = 1)
  {
  printf("======== Main Menu ========\n");
  printf("[0] Check For Source Code Updates\n")
  printf("[1] Check For Binary Update From Custom Server\n");
  printf("[2] Systen And Software Status\n");
  
  scanf("%s",&opition);
  if(strcmp(opition, "0" ) == 0 )
  {
  updatesrc();
  }
  
  else if(strcmp(opition, "1" ) == 0 )
  {
  updatebinary();
  }
  
  else if(strcmp(opition, "2" ) == 0 )
  {
  syssoftstatus();
  }
  
  }
  return 0;
}
