#include "complex.h"
#include "gtest/gtest.h"


TEST(Complex,EmptyConstructor)
{
    Complex <int> C1;
    EXPECT_EQ(0, C1.real());
    EXPECT_EQ(0, C1.imag());
}

TEST(Complex,ParameterizedConstructor)
{
    Complex <int> C1(6,9);
    EXPECT_EQ(6,C1.real());
    EXPECT_EQ(9,C1.imag());
}

TEST(Complex,CopyConstructor)
{
    Complex <int> C1(6,9);
    EXPECT_EQ(6,C1.real());
    EXPECT_EQ(9,C1.imag());

    Complex C2(C1);
    EXPECT_EQ(6,C2.real());
    EXPECT_EQ(9,C2.imag());
}