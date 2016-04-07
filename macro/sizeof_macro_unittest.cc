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

#define FIELD_SIZE(t, f) (sizeof(((t*)0)->f))


TEST(USEFUL_MACRO, ARRARY_SIZE) {
	int arr_int[100];
  EXPECT_EQ(100, ARRARY_SIZE(arr_int));

	char arr_char[101];
  EXPECT_EQ(101, ARRARY_SIZE(arr_char));
}

struct SA {
	int age;
	char name[10];
};

TEST(USEFUL_MACRO, FIELD_SIZE) {
  EXPECT_EQ(4, FIELD_SIZE(SA, age));
  EXPECT_EQ(10, FIELD_SIZE(SA, name));
}
