#include <sys/spinlock.h>

void spinlock_enter(kspinlock_t* sl)
{
    //KeAcquireInStackQueuedSpinLock(&sl->lock, &sl->qh);
    KeAcquireSpinLock(&sl->lock, &sl->oldirql);
}
void spinlock_exit(kspinlock_t* sl)
{
    //KeReleaseInStackQueuedSpinLock(&sl->qh);
    KeReleaseSpinLock(&sl->lock, sl->oldirql);
}
