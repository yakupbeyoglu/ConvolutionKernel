#include <gtest/gtest.h>

#undef ASSERT_FALSE
#undef ASSERT_ALL

TEST(ExampleTest, BasicAssertions) {
    EXPECT_TRUE(0 == 0);
    EXPECT_FALSE(0 == 1);
}
