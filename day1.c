#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>

int main() {
  pid_t pid;
  pid = fork();
  if (pid != 0) {
    printf("Parent");
  } else {

    printf(" Child %d", getpid());
  }
  return 0;
}
