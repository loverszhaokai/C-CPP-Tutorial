#include <stdio.h>

#define ARRARY_SIZE(x) (sizeof(x) / sizeof((x)[0]))

#define FIELD_SIZE(t, f) (sizeof(((t*)0)->f))

void test_arrary_size()
{
	int arr_int[100];

	printf("arr_int size=%lu\n", ARRARY_SIZE(arr_int));   // 100

	char arr_char[101];

	printf("arr_char size=%lu\n", ARRARY_SIZE(arr_char)); // 101
}


struct SA {

	int age;
	char name[10];
};

void test_field_size()
{
	printf("\n");
	printf("sizeof(SA->age)=%lu\n", FIELD_SIZE(struct SA, age));   // 4
	printf("sizeof(SA->name)=%lu\n", FIELD_SIZE(struct SA, name)); // 10
}


int main()
{
	printf("======Useful macros======\n\n");

	test_arrary_size();

	test_field_size();

	return 0;
}
