#include <gtest/gtest.h>
#include <Penguin.hpp>

struct PenguinTest : public ::testing::Test {
  virtual void SetUp() override {

  }

  virtual void TearDown() override {}
};

TEST_F(PenguinTest, CheckSpeak) {
  Penguin p;
  EXPECT_EQ(p.speak(), "Hello Word");
}