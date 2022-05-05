#include "assignment/binary_search_iterative.hpp"

namespace assignment {

  std::optional<int> BinarySearchIterative::Search(const std::vector<int>& data, int search_element) const {
    int left = 0;
    int right = static_cast<int>(data.size() - 1);

    while (left <= right){
        int mid = (left + right)/2;
        if (data[mid] == search_element){
            return mid;
        }
        if (search_element < data[mid]){
            right = mid - 1;
        }

        else {
            left = mid + 1;
        }
    }
    return std::nullopt;

  }

}  // namespace assignment