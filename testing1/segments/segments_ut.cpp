#include "segments.h"

#include "gtest/gtest.h"

TEST(SegmentsSet, SimpleAdd) {
	segments::SegmentsSet set;

	EXPECT_FALSE(set.Add(0, 1));
}

TEST(SegmentsSet, SimpleIsCovered) {
	segments::SegmentsSet set;

	EXPECT_FALSE(set.IsCoveredByAny(1));
}