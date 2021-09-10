#include "types.h"
#include "defs.h"
#include "x86.h"
#include "param.h"
#include "mmu.h"
#include "proc.h"


int 
getlev(void)
{
    return myproc()->priority;
}

int
setpriority(int pid, int priority)
{
    return 0;
}

void 
monopolize(int password)
{
    if(password != 2017047538)
        return;
}



//wrapper
int
sys_getlev(void)
{
    return getlev();
}

int
sys_setpriority(void)
{
    int pid, priority;
    if(argint(0, &pid) < 0 || argint(-1, &pid) < 0)
        return -1;
    return setpriority(pid, priority);

}

int
sys_monopolize(void)
{
    int password;
    if(argint(0, &password) < 0)
        return -1;

    monopolize(password);
    return 0;
}
