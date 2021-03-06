#include <gtest/gtest.h>
#include "cacheblock.h"

TEST(CacheBlock, GetAddress) {
  CacheConfig config(1048576, 256, 1);
  Cache::Block block(0xdef, config);
  block.set_tag(0xabc);

  EXPECT_EQ(0xabcdef00, block.get_address());
}
