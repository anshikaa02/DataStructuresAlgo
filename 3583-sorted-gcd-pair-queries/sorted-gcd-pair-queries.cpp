class Solution {
public:
    vector<int> gcdValues(vector<int>& nums, vector<long long>& queries) {
        int n= nums.size();
        int maxValue = *max_element(nums.begin(), nums.end());
        // frequency[value] = occurrences of value
        vector<int> frequency(maxValue + 1, 0);

        for (int i = 0; i < n; i++)
            frequency[nums[i]]++;

        // divisibleCount[d] = numbers divisible by d
        vector<int> divisibleCount(maxValue + 1, 0);

        for (int divisor = 1; divisor <= maxValue; divisor++)
        {
            for (int multiple = divisor; multiple <= maxValue; multiple += divisor)
            {
                divisibleCount[divisor] += frequency[multiple];
            }
        }
        // gcdPairCount[d] = number of pairs having gcd exactly d
        vector<long long> gcdPairCount(maxValue + 1, 0);

        for (int divisor = maxValue; divisor >= 1; divisor--)
        {
            long long totalPairs =
                1LL * divisibleCount[divisor] * (divisibleCount[divisor] - 1) / 2;

            for (int multiple = 2 * divisor; multiple <= maxValue; multiple += divisor)
            {
                totalPairs -= gcdPairCount[multiple];
            }

            gcdPairCount[divisor] = totalPairs;
        }
        // prefixPairs[d] = pairs whose gcd <= d
        vector<long long> prefixPairs(maxValue + 1, 0);

        for (int i = 1; i <= maxValue; i++)
        {
            prefixPairs[i] = prefixPairs[i - 1] + gcdPairCount[i];
        }
        vector<int> answer;
        for (int i = 0; i<queries.size(); i++){
            int gcdValue= lower_bound(prefixPairs.begin(),prefixPairs.end(),queries[i] + 1) - prefixPairs.begin();
            answer.push_back(gcdValue);
        }
        return answer;
    }
};