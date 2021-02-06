#include "complex.h"
#include "gtest/gtest.h"


TEST(Complex,EmptyConstructor)
{
    Complex <int> a;
    EXPECT_EQ(0, a.real());
    EXPECT_EQ(0, a.imag());
}

TEST(Complex,ParameterizedConstructor)
{
    Complex <int> a(6,9);
    EXPECT_EQ(6,a.real());
    EXPECT_EQ(9,a.imag());
}

TEST(Complex,CopyConstructor)
{
    Complex <int> a(6,9);
    EXPECT_EQ(6,a.real());
    EXPECT_EQ(9,a.imag());
}