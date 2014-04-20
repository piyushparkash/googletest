#include <gtest/gtest.h>
#include "main.cpp"
TEST(SimpleTest, singleno)
{
ASSERT_EQ(5,something());
}

int main(int argc, char **argv)
{
testing::InitGoogleTest(&argc, argv);
return RUN_ALL_TESTS();
}
