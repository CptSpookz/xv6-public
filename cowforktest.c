#include "types.h"
#include "stat.h"
#include "user.h"

#define NUM  2

void cowforktest()
{
  int pid;
  printf(1, "CowFork TESTE\n");

  pid = cowfork();

  if(pid==0){
    printf(1,"filho funcionando \n");
  }
  else{
    printf(1,"pai funcionando \n");
  }

  while (1);
}

int main(int argc, char const *argv[]) {
  cowforktest();
  exit();
}
