
#ifndef SPL_SPINLOCK_H
#define	SPL_SPINLOCK_H
#include <wdm.h>

struct spinlock {
	KSPIN_LOCK	lock;
	//KLOCK_QUEUE_HANDLE qh;
	KIRQL oldirql;
};

typedef struct spinlock  kspinlock_t;

#endif
