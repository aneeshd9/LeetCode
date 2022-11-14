#include <cstdint>
#include <vector>

class Solution {
public:
	int hammingWeight(uint32_t n) {
		int ans = 0;
		while (n != 0) {
			int bit = n & 1;
			if (bit == 1) {
				ans += 1;
			}
			n = n >> 1;
		}
		return ans;
	}

	std::vector<int> countBits(int n) {
		std::vector<int> ans(n + 1, 0);
		for (int i = 1; i <= n; ++i) {
			ans[i] = ans[i >> 1] + (i & 1);
		}
		return ans;
	}
};