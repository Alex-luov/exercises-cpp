#include "test_helper.h"

TEST_CASE("testing solution") {
  std::string expected = "125\n7500";
  std::string actual = get_output(sizeof(expected));

  CHECK(actual == expected);
}
