#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include <ctime>
#include "test_header.hpp"


TEST_CASE("Test nullpole") {
  int field[25];
  for (int i = 0; i < 25; ++i)
    field[i] = 1;
  nullpole(field);
  int k0 = 0;
  int k9 = 0;
  for (int i = 0; i < 25; ++i)
    if (field[i] == 0)
      ++k0;
    else if (field[i] == 9)
      ++k9;
  REQUIRE( ((k0 == 19) && (k9 == 6)) );
}

TEST_CASE("Test stolbi") {
  int order[3];
  stolbi(order);
  REQUIRE(
    (
      (order[0] != order[1]) &&
      (order[0] != order[2]) &&
      (order[1] != order[2]) &&
      (order[0] >= 0) &&
      (order[0] <= 2) &&
      (order[1] >= 0) &&
      (order[1] <= 2) &&
      (order[2] >= 0) &&
      (order[2] <= 2)
    )
  );
}

TEST_CASE("Test arrangement") {
  int field[25];
  nullpole(field);
  arrangement(field);
  int empty = 0;
  int blocked = 0;
  for(int i = 0; i < 25; ++i)
    if (field[i] == 9)
      ++blocked;
    else
      if (field[i] == 0)
        ++empty;
  REQUIRE(((empty == 4) && (blocked == 6)));
}
