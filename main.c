#include <stdio.h>
#include <stdlib.h>

/* Import user configuration: */
#ifdef __Unikraft__
#include <uk/config.h>
#endif /* __Unikraft__ */

int main(int argc, char *argv[])
{
	char *buffer = malloc(16777216);
	if (buffer == NULL) {
		fprintf(stderr, "Error! Memory not allocated. File: %s\n", __FILE__);
		// exit(0);
	} 
	free(buffer);
	printf("Hello world!\n");

	return 0;
}
