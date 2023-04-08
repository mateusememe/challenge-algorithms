#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
  vector<int> runningSum(vector<int>& nums) {
    for (int i = 1; i < (int)nums.size(); i++) {
      nums[i] += nums[i-1];
    }
    return nums;
  }
};

int main() {
  vector<int> vect{ 1,2,3,4 };
  vector<int> sum = (new Solution())->runningSum(vect);

  printf("{ ");

  for (int num : sum)
    cout << num << " ";

  printf("}");

  return 0;
}
