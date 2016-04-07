/*
* Author   : Kai Zhao
* Email    : loverszhao@gmail.com
* Reference:
*/

/*
* Description: This file shows some sizeof() macros
*/

#include "gtest/gtest.h"


#define ARRARY_SIZE(x) (sizeof(x) / sizeof((x)[0]))

TEST(sizeof_macro, ARRARY_SIZE) {
	int arr_int[100];
  EXPECT_EQ(100, ARRARY_SIZE(arr_int));

	char arr_char[101];
  EXPECT_EQ(101, ARRARY_SIZE(arr_char));
}

// Notice: the ARRAY_SIZE() can accept a pointer, which is wrong.
// Here is a new macro to count array size which only accept array
// Reference: https://blogs.msdn.microsoft.com/the1/2004/05/07/how-would-you-get-the-count-of-an-array-in-c-2/

template <typename T, size_t N>
char (&_ArraySizeHelper(T (&array) [N]) ) [N];

#define countof(array) sizeof(_ArraySizeHelper(array))

TEST(sizeof_macro, countof) {
	int arr_int[100];
  EXPECT_EQ(100, countof(arr_int));

	char arr_char[101];
  EXPECT_EQ(101, countof(arr_char));

  //int *p = NULL;
  //countof(p); // compile error
}

struct SA {
	int age;
	char name[10];
};

#define FIELD_SIZE(t, f) (sizeof(((t*)0)->f))

TEST(sizeof_macro, FIELD_SIZE) {
  EXPECT_EQ(4, FIELD_SIZE(SA, age));
  EXPECT_EQ(10, FIELD_SIZE(SA, name));
}
