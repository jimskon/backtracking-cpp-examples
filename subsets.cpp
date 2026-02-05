
#include <iostream>
#include <vector>
using namespace std;

void backtrack(size_t index,
               const vector<size_t>& nums,
               vector<size_t>& current) {
    if (index == nums.size()) {
        cout << "{ ";
        for (size_t x : current) cout << x << " ";
        cout << "}" << endl;
        return;
    }

    // EXCLUDE nums[index]
    backtrack(index + 1, nums, current);

    // INCLUDE nums[index]
    current.push_back(nums[index]);
    backtrack(index + 1, nums, current);
    current.pop_back(); // UNDO
}

int main() {
    vector<size_t> nums = {1, 2, 3};
    vector<size_t> current;

    backtrack(0, nums, current);
}
