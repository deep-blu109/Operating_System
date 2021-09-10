#include "types.h"
#include "defs.h"
#include "param.h"
#include "mmu.h"
#include "proc.h"

int
getppid(void)
{
    return myproc() -> parent -> pid;
}

int
sys_getppid(void)
{
    char *str;
    if(argstr(0, &str) < 0)
        return -1;
    return getppid();
}
    
