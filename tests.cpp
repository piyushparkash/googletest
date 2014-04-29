#include <gtest/gtest.h>
#include "main.cpp"
TEST(SimpleTest, singleno)
{
ASSERT_EQ(5,something());
EXPECT_EQ("somethin",return_string());
}

int main(int argc, char **argv)
{
testing::InitGoogleTest(&argc, argv);
return RUN_ALL_TESTS();
}
