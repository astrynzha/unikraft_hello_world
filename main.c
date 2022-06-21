#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
#include <string.h>


/* Import user configuration: */
#ifdef __Unikraft__
#include <uk/config.h>
#endif /* __Unikraft__ */

int main(int argc, char *argv[])
{
	char *buffer = malloc(16777216);
	if (buffer == NULL) {
		fprintf(stderr, "Error! Memory not allocated. File: %s. Errno: %s\n", __FILE__, strerror(errno));
		// exit(0);
	} 
	free(buffer);
	printf("Hello world!\n");

	return 0;
}
