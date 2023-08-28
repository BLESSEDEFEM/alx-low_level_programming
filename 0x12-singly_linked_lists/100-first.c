#include "lists.h"
void first_before(void)__attribute__ ((constructor));
/**
 * first_before - Function that runs before the main function
 */
void first_before(void)
{
       printf("You're beat! and yet, you must allow,\n");
       printf("I bore my house upon my back!\n");
}
