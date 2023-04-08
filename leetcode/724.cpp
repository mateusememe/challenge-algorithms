#include<vector>
#include<iostream>

using namespace std;

class Solution {
public:
  int pivotIndex(vector<int>& nums) {
    int lsum, total;
    lsum = total = 0;

    for(int i : nums) total+=i;

    for (int i = 0; i < int(nums.size()); lsum += nums[i++])
      if(lsum * 2 == total - nums[i]) return i;

    return -1;
  }
};

int main() {
  vector<int> vect{ 1,7,3,6,5,6 };
  int pivot = (new Solution())->pivotIndex(vect);

  cout << pivot << "";

  return 0;
}
