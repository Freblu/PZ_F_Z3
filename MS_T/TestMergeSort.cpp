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
        srand(time(NULL));
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

    int j = 1;
    for (int i = 0; i < roz - 1; ++i) {
        EXPECT_TRUE(testTab[i] <= testTab[j]);
        j++;
    }
    MergeSortTest::TearDown();
}

TEST_F(MergeSortTest, RandTest) {
    int tab[5];
    for (int i = 0; i < 5; ++i) {
        tab[i] = rand();
    }
    roz = sizeof(tab) / sizeof(tab[0]);
    MergeSortTest::SetUp(tab, roz);

    int j = 1;
    for (int i = 0; i < roz - 1; ++i) {
        EXPECT_TRUE(testTab[i] <= testTab[j]);
        j++;
    }
    MergeSortTest::TearDown();
}

TEST_F(MergeSortTest, NegativeTest) {
    int tab[5];
    for (int i = 0; i < 5; ++i) {
        tab[i] = -abs(rand());
    }
    roz = sizeof(tab) / sizeof(tab[0]);
    MergeSortTest::SetUp(tab, roz);

    int j = 1;
    for (int i = 0; i < roz - 1; ++i) {
        EXPECT_TRUE(testTab[i] <= testTab[j]);
        j++;
    }
    MergeSortTest::TearDown();
}

TEST_F(MergeSortTest, PosAndNegTest) {
    int tab[5];
    for (int i = 0; i < 5; ++i) {
        if (i <= 2)
        {
            int x = -abs(rand());
            tab[i] = x;
        }
        if (i > 2)
        {
            int x = abs(rand());
            tab[i] = x;
        }
    }
    roz = sizeof(tab) / sizeof(tab[0]);
    MergeSortTest::SetUp(tab, roz);

    int j = 1;
    for (int i = 0; i < roz - 1; ++i) {
        EXPECT_TRUE(testTab[i] <= testTab[j]);
        j++;
    }
    MergeSortTest::TearDown();
}

TEST_F(MergeSortTest, PustyTest) {
    int tab[1] = {};
    roz = sizeof(tab) / sizeof(tab[0]);
    MergeSortTest::SetUp(tab, roz);

    for (int i = 0; i < roz; ++i) {
        EXPECT_EQ(testTab[i], tab[i]);
    }
    MergeSortTest::TearDown();
}

TEST_F(MergeSortTest, SingularTest) {
    int tab[] = { 5 };
    roz = sizeof(tab) / sizeof(tab[0]);
    MergeSortTest::SetUp(tab, roz);

    for (int i = 0; i < roz; ++i) {
        EXPECT_EQ(testTab[i], { 5 });
    }
    MergeSortTest::TearDown();
}

TEST_F(MergeSortTest, DoubleTest) {
    int tab[10];
    for (int i = 0; i < 10; ++i) {
        int x = rand();
        tab[i] = x;
        if (i < 10)
        i++;
        tab[i] = x;
    }
    roz = sizeof(tab) / sizeof(tab[0]);
    MergeSortTest::SetUp(tab, roz);

    int j = 1;
    for (int i = 0; i < roz - 1; ++i) {
        EXPECT_TRUE(testTab[i] <= testTab[j]);
        j++;
    }
    MergeSortTest::TearDown();
}

TEST_F(MergeSortTest, DoubleNegTest) {
    int tab[10];
    for (int i = 0; i < 10; ++i) {
        int x = -abs(rand());
        tab[i] = x;
        if (i < 10)
        i++;
        tab[i] = x;
    }
    roz = sizeof(tab) / sizeof(tab[0]);
    MergeSortTest::SetUp(tab, roz);

    int j = 1;
    for (int i = 0; i < roz - 1; ++i) {
        EXPECT_TRUE(testTab[i] <= testTab[j]);
        j++;
    }
    MergeSortTest::TearDown();
}

TEST_F(MergeSortTest, DoublePozAndNegTest) {
    int tab[10];
    for (int i = 0; i < 10; ++i) {
        if (i <= 5)
        {
            int x = -abs(rand());
            tab[i] = x;
            i++;
            tab[i] = x;
        }
        if (i > 5)
        {
            int x = abs(rand());
            tab[i] = x;
            if (i < 10)
            i++;
            tab[i] = x;
        }
    }

    roz = sizeof(tab) / sizeof(tab[0]);
    MergeSortTest::SetUp(tab, roz);

    int j = 1;
    for (int i = 0; i < roz - 1; ++i) {
        EXPECT_TRUE(testTab[i] <= testTab[j]);
        j++;
    }
    MergeSortTest::TearDown();
}

TEST_F(MergeSortTest, TwoTest) {
    int tab[2] = { 5, 10 };
    roz = sizeof(tab) / sizeof(tab[0]);
    MergeSortTest::SetUp(tab, roz);

    EXPECT_TRUE(testTab[0] <= testTab[1]);

    MergeSortTest::TearDown();
}

TEST_F(MergeSortTest, BigTest) {
    int tab[102];
    for (int i = 0; i < 102; ++i) {
        tab[i] = rand();
    }
    roz = sizeof(tab) / sizeof(tab[0]);
    MergeSortTest::SetUp(tab, roz);

    int j = 1;
    for (int i = 0; i < roz - 1; ++i) {
        EXPECT_TRUE(testTab[i] <= testTab[j]);
        j++;
    }
    MergeSortTest::TearDown();
}


TEST_F(MergeSortTest, BigPozAndNegDoubleTest) {
    int tab[102];
    int x = 0;
    for (int i = 0; i < 101; ++i) {
        x = -abs(rand());
        tab[i] = x;
        if(i < 101)
        i++;
        tab[i] = x;
        if (i < 101)
        i++;
        x = abs(rand());
        tab[i] = x;
        if (i < 101)
        i++;
        tab[i] = x;
    }
    roz = sizeof(tab) / sizeof(tab[0]);
    MergeSortTest::SetUp(tab, roz);

    int j = 1;
    for (int i = 0; i < roz - 1; ++i) {
        EXPECT_TRUE(testTab[i] <= testTab[j]);
        j++;
    }
    MergeSortTest::TearDown();
}