#include "pch.h"
#include "MergeSort.h"
#include <cmath>

class MergeSortTest : public ::testing::Test {
public:
    int* testTab;
    int roz;

    void SetUp(int tab[], int r) {
        testTab = new int[r];
        MergeSort* A = new MergeSort(tab, r, 0, r - 1);
        A->StartSort();
        for (int i = 0; i < r; ++i) {
            testTab[i] = A->DajDane(i);
        }
        delete A;
    }

    void TearDown() {
        delete[] testTab;
        testTab = nullptr;
    }
};

TEST_F(MergeSortTest, SortedTest) {
    int tab[] = {1,2,3,4,5};
    roz = sizeof(tab) / sizeof(tab[0]);
    MergeSortTest::SetUp(tab, roz);

    for (int i = 0; i < roz; ++i) {
        EXPECT_EQ(testTab[i], tab[i]);
    }
    MergeSortTest::TearDown();
}

TEST_F(MergeSortTest, RevertTest) {
    int tab[] = {5,4,3,2,1};
    roz = sizeof(tab) / sizeof(tab[0]);
    MergeSortTest::SetUp(tab, roz);


    int sortTab[] = {1,2,3,4,5};
    for (int i = 0; i < roz; ++i) {
        EXPECT_EQ(testTab[i], sortTab[i]);
    }
    MergeSortTest::TearDown();
}
