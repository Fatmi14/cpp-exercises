#include <vector>
using namespace std;

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        size_t pos{0};
        for (size_t i = 0; i < nums.size(); ++i) {
            if (nums[i] != 0) {
                nums[pos] = nums[i];
                ++pos;
            }
        }
        for (size_t i = pos; i < nums.size(); ++i) {
            nums[i] = 0;
        }
    }
};
