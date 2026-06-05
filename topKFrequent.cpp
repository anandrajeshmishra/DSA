class Solution
{
public:
    vector<int> topKFrequent(vector<int> &nums, int k)
    {

        unordered_map<int, int> freq;

        // Count frequencies
        for (int num : nums)
        {
            freq[num]++;
        }

        // Store (frequency, element)
        vector<pair<int, int>> v;

        for (auto p : freq)
        {
            v.push_back({p.second, p.first});
        }

        // Sort by frequency in descending order
        sort(v.begin(), v.end(), greater<pair<int, int>>());

        vector<int> ans;

        // Take first k elements
        for (int i = 0; i < k; i++)
        {
            ans.push_back(v[i].second);
        }

        return ans;
    }
};