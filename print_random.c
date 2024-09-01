#include "random.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// random comments
// new random comment

int main()
{
	int a;

	/* seed the randomizer */
	srand( (unsigned)time(NULL) );

	printf("Today's random word: ");
	for(a=0;a<7;a++)
		putchar( randchar() );
	putchar('\n');

	return(0);
}




// char* rand_string_alloc(size_t size)
// {
//      char *s = malloc(size + 1);
//      if (s) {
//          rand_string(s, size);
//      }
//      return s;
// }