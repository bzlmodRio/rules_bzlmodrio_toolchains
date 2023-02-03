
#include "gtest/gtest.h"

TEST(BasicTest, BasicTest) {
#ifdef __FRC_ROBORIO__
    EXPECT_EQ(1, IS_ROBORIO_TEST);
#else
    EXPECT_EQ(0, IS_ROBORIO_TEST);
#endif
}
