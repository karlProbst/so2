#include <windows.h>
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    printf("Hello World!\n");
    int pid;
    int i;
    pid=fork();
    for(i = 0; i < 3; i++){
          if(pid == 0)pid=fork();
}
          if(pid == 0){
                 printf("Avaliação de SO2 \n");
                 }
    
      printf("Press ENTER to continue...\n");
      getchar();
      return 0;
}
