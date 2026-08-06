class Solution {
public:
    int smallestNumber(int n, int t) {
        int ans;
        for (int i = n; ; i++) {
            int temp = i;
            int product = 1;

            while (temp > 0) {
                int digit = temp % 10;
                product= product* digit;
                temp /= 10;
            }

            if (product % t == 0) {
                ans = i;
                break;
            }
        }
        return ans;
    }
};