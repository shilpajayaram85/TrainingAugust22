#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>
#include <fcntl.h>
#include <sys/mman.h>
#include <semaphore.h>

 

int main() {
    pid_t pid;

  

    if ((pid = fork()) == 0) {
        execlp("./producer", "./producer", NULL);
        perror("execlp");
        exit(EXIT_FAILURE);
    } else if (pid == -1) {
        perror("fork");
        exit(EXIT_FAILURE);
    }


    if ((pid = fork()) == 0) {
        execlp("./consumer", "./consumer", NULL);
        perror("execlp");
        exit(EXIT_FAILURE);
    } else if (pid == -1) {
        perror("fork");
        exit(EXIT_FAILURE);
    }
    if ((pid = fork()) == 0) {
          execlp("./consumer", "./consumer", NULL);
          perror("execlp");
          exit(EXIT_FAILURE);
      } else if (pid == -1) {
          perror("fork");
          exit(EXIT_FAILURE);
      }
 
     if ((pid = fork()) == 0) {
          execlp("./consumer", "./consumer", NULL);
          perror("execlp");
          exit(EXIT_FAILURE);
      } else if (pid == -1) {
          perror("fork");
          exit(EXIT_FAILURE);
      }

     if ((pid = fork()) == 0) {
          execlp("./consumer", "./consumer", NULL);
          perror("execlp");
          exit(EXIT_FAILURE);
      } else if (pid == -1) {
          perror("fork");
          exit(EXIT_FAILURE);
      }

    for (int i = 0; i < 4; i++) {
        wait(NULL);
    }

  

    return 0;
}
