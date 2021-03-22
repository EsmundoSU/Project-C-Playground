#include "gtest/gtest.h"
#include "example1.h"

TEST(Example1Test /*test suite name*/, TextWithNewLine /*test name*/) {
    // Arrange
    const char textWithNewLine[] = "Lorem ipsum dolor sit amet\nconsectetur adipiscing elit";
    size_t expected = 26;

    // Act
    size_t newLineIndex = NewLineIndex(textWithNewLine, sizeof textWithNewLine);

    // Assert
    ASSERT_EQ(expected, newLineIndex) << "Expected: " << expected << "\tGets: " << newLineIndex;
}

TEST(Example1Test /*test suite name*/, TextWithoutNewLine /*test name*/) {
    // Arrange
    const char textWithNewLine[] = "Lorem ipsum dolor sit amet consectetur adipiscing elit";
    size_t expected = SIZE_MAX;

    // Act
    size_t newLineIndex = NewLineIndex(textWithNewLine, sizeof textWithNewLine);

    // Assert
    ASSERT_EQ(expected, newLineIndex) << "Expected: " << expected << "\tGets: " << newLineIndex;
}