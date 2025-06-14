#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if (nums.size() == 0) return 0;

        int i = 0;
        for (int j = 1; j < nums.size(); j++) {
            if (nums[j] != nums[i]) {
                i++;         
                nums[i] = nums[j]; 
            }
        }
        return i + 1; 
    }
};

int main() {
    Solution sol;
    vector<int> nums = {0, 0, 1, 1, 2, 2, 3, 4};

    int newLength = sol.removeDuplicates(nums);

    cout << "New Length: " << newLength << endl;
    cout << "Array after removing duplicates: ";
    for (int i = 0; i < newLength; i++) {
        cout << nums[i] << " ";
    }
    cout << endl;

    return 0;
}
