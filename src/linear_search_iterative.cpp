#include "assignment/linear_search_iterative.hpp"

namespace assignment {

  std::optional<int> LinearSearchIterative::Search(const std::vector<int>& data, int search_element) const {
      for (int ind = 0; ind < data.size(); ++ind) {
          if (data[ind] == search_element){
              return ind;
          }
      }
      return std::nullopt;
  }

}  // namespace assignment