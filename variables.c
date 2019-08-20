#include <stdio.h>

int main(void)
{
	c; /* These variables need types. */
	f;

	/*
	 * Do not touch: read Celsius value from standard input to
	 * variable named c.
	 */
	if (1 != scanf("%d", &c)) {
		return 1;
	}

	/* Replace this with proper calculation of f from c. */
	f = c;

	/* Do not touch: print f to standard output. */
	printf("%d\n", f);
}
