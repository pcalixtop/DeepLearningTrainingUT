#include <gtest/gtest.h>
#include "DeepLearningTrainingLib/matrix.h"

TEST(MatrixTesting, MatrixRowTest)
{
    constexpr int row = 3;
    constexpr int col = 3;

	std::vector<std::vector<float> > A(row, std::vector<float>(col, 0));
    Matrix m(A);

    EXPECT_EQ(3, m.GetRow());
}

TEST(MatrixTesting, MatrixColTest)
{
    constexpr int row = 3;
    constexpr int col = 3;

	std::vector<std::vector<float> > A(row, std::vector<float>(col, 0));
    Matrix m(A);

    EXPECT_EQ(3, m.GetColumn());
}