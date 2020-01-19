#include "tests.h"
#include <sys/syscall.h>

#ifdef __NR_getegid32

# include <stdio.h>
# include <unistd.h>

int
main(void)
{
	printf("getegid32() = %ld\n", syscall(__NR_getegid32));
	return 0;
}

#else

SKIP_MAIN_UNDEFINED("__NR_getegid32")

#endif
