#include "assignment/find_sum.hpp"  // find_elements

namespace assignment {

  std::optional<std::pair<int, int>> find_sum(const std::vector<int>& data, int sum) {
    int left = 0;
    int right = static_cast<int>(data.size() - 1);
    int summing;
    while (left < right){
      summing = data[left] + data[right];
      if (summing == sum){
        return std::make_pair(left, right);
      }
      if (summing > sum){
        right--;
      }
      if (summing < sum){
        left++;
      }
    }
    return std::nullopt;
  }
}  // namespace assignment