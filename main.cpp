#include <iostream>
#include <vector>

#include "assignment/linear_search_iterative.hpp"  // for example
#include "src/binary_search_iterative.cpp"

using namespace std;
using namespace assignment;

int main(int argc, char **argv) {

  BinarySearchIterative search_algo;
  auto res = search_algo.Search({1, 2, 3 , 4, 5, 6, 7, 8}, 2);
  cout << res.value() << "\n";
  return 0;
}
