#include <set>
#include <vector>

bool containsDuplicate(std::vector<int> &nums) {
  std::set<int> seenNumbers = {};

  for (int i = 0; i < nums.size(); i++) {
    if (seenNumbers.count(nums[i])) {
      return true;
    }

    seenNumbers.insert(nums[i]);
  }

  return false;
}
