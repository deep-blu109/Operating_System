#include "types.h"
#include "defs.h"
#include "mmu.h"
#include "param.h"
#include "proc.h"
#include "spinlock.h"

//Wrapper
int
sys_yield(void)
{
    yield();
    return 0;
}
