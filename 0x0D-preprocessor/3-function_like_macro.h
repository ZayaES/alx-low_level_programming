#include <stdio.h>
#ifndef ABS
#define ABS(x) (x)
int main(void)
{
	if (ABS(x) < 0)
	{
		#undef ABS

		#define ABS(x) (-x)
	}
}
#endif
