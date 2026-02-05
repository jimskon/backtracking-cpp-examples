
#include <iostream>
#include <vector>
using namespace std;

void backtrack(int index,
               const vector<int>& nums,
               vector<int>& current) {
    if (index == nums.size()) {
        cout << "{ ";
        for (int x : current) cout << x << " ";
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
    vector<int> nums = {1, 2, 3};
    vector<int> current;

    backtrack(0, nums, current);
}
