#ifndef HEX_OPERATIONS_H
#define HEX_OPERATIONS_H

#include <bitset>
#include <cstdint>
#include <iostream>
#include <algorithm>
#include <string>
#include <iomanip>
#include <sstream>

namespace omni
{
  char halfword_to_hex_char(unsigned int input);
  std::string int_to_hex(unsigned int input);
}

#endif //HEX_OPERATIONS_H
