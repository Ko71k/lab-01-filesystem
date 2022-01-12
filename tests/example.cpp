// Copyright 2021 Ko71k <rassmagin.rrr@gmail.com>

#include <stdexcept>

#include <gtest/gtest.h>

#include <searcher.hpp>

TEST(Example, EmptyTest) {
    EXPECT_THROW(example(), std::runtime_error);
}
