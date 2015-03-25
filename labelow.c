#include <sys/sysinfo.h>
#include <stdio.h>

int main(int argc, char *argv[]) {
  int lalevel;
  struct sysinfo sys_info;
  if(argc==1)
      lalevel=1;
    else
      lalevel=atoi(argv[1]);
  if(sysinfo(&sys_info) != 0)
    perror("sysinfo");
    if(sys_info.loads[0]>lalevel*65536)
      return 1;
    else
      return 0;
}
