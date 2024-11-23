#include "pch.h"
#include "MergeSort.h"

class MergeSortTest : public ::testing::Test {
public:
    int* testTab;
    int roz;

    void SetUp() {
        roz = 5;
        testTab = new int[roz] {5, 3, 4, 1, 2};
    }

    void TearDown() {
        delete[] testTab;
    }
};

TEST_F(MergeSortTest, KonstructorTest) {
    MergeSort sorter(testTab, 0, roz - 1, roz);
    EXPECT_EQ(roz, 5);
}