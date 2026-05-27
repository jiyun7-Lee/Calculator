#include "gmock/gmock.h"
#include "cal.cpp"

TEST(CalTest, MinusTest) {
	Cal* cal = new Cal();
	EXPECT_EQ(2, cal->getSub(4, 2));
	EXPECT_EQ(2, cal->getSub(5, 3));
	EXPECT_EQ(2, cal->getSub(3, 1));
	EXPECT_EQ(3, cal->getSub(5, 2));
	EXPECT_EQ(38, cal->getSub(40, 2));
	EXPECT_EQ(2, cal->getSub(4, 2));
}
int main()
{
	::testing::InitGoogleMock();
	return RUN_ALL_TESTS();
}