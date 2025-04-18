#include "store-tests-config.hh"
#if ENABLE_S3

#  include <gtest/gtest.h>

#  include "nix/store/s3-binary-cache-store.hh"

namespace nix {

TEST(S3BinaryCacheStore, constructConfig)
{
    S3BinaryCacheStoreConfig config{"s3", "foobar", {}};

    EXPECT_EQ(config.bucketName, "foobar");
}

} // namespace nix

#endif
