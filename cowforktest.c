#include "types.h"
#include "stat.h"
#include "user.h"

void cowforktest()
{
  int pid;
  printf(1, "CowFork TESTE\n");

  pid = cowfork();
  
  if(pid==0){
    printf(1,"filho funcionando \n");
    exit();
  }
  else{
    printf(1,"pai funcionando \n");
  }

  while (1);
}

int main() {
  cowforktest();
  exit();
}
