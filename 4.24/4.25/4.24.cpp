#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
#include <vector>
using namespace std;
int maxSubArray(vector<int>& nums)
{
	int len = nums.size();
	if (len == 0)
		return 0;
	if (len == 1)
		return nums[0];
	vector<int>dp(len, 0);
	dp[0] = nums[0];
	for (int i = 1; i<len; i++)
	{
		if (dp[i - 1] >= 0)
			dp[i] = dp[i - 1] + nums[i];
		else
			dp[i] = nums[i];
	}
	return dp[len - 1];
}
int main()
{
	vector<int>v = {-2,1,-3,4,-1,2,1,-5,4};
	cout << maxSubArray(v) << endl;
	return 0;
}