#include <stdio.h>

// GOOD
#define LONG_FUN_DO_WHILE(a1, a2)			\
	do {						\
		printf("a1 is:%d\n", a1);		\
		printf("a1 is:%d\n", a2);		\
		if (a1)					\
			printf("a1 is not zero\n");	\
		else					\
			printf("a1 is zero\n");		\
	} while (0)

// BAD
#define LONG_FUN_BLOCK(a1, a2)				\
	{						\
		printf("a1 is:%d\n", a1);		\
		printf("a1 is:%d\n", a2);		\
		if (a1)					\
			printf("a1 is not zero\n");	\
		else					\
			printf("a1 is zero\n");		\
	}

// Use do-while
void test_long_macro_do_while()
{
	if (1) 
		LONG_FUN_DO_WHILE(1, 2);
	else 
		printf("else\n");
}

// Use block only
// It will failed to compile with the error: ‘else’ without a previous ‘if’
void test_long_macro_block()
{
	if (1) 
		LONG_FUN_BLOCK(1, 2);
	else 
		printf("else\n");
}

/*
 * After expend the macro, it is easy to find the error
 *
 *

void test_long_macro_do_while()
{
	if (1)
		do {
			printf("a1 is:%d\n", 1); 
			printf("a1 is:%d\n", 2); 
			if (1) 
				printf("a1 is not zero\n"); 
			else 
				printf("a1 is zero\n");
		} while (0);
	else
		printf("else\n");
}

void test_long_macro_block()
{
	if (1)
		{ 
			printf("a1 is:%d\n", 1); 
			printf("a1 is:%d\n", 2); 
			if (1) 
				printf("a1 is not zero\n"); 
			else 
				printf("a1 is zero\n"); 
		}
	;
	else
		printf("else\n");
}
*/

int main()
{
	printf("======long macro======\n\n");

	printf("Macros with multiple statements should be enclosed in a do - while block:\n");

	test_long_macro_do_while();

	test_long_macro_block();

	return 0;
}
