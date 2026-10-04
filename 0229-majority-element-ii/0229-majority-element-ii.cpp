class Solution {
public:
    // ---------- APPROACH 1: BRUTE FORCE ----------
    vector<int> bruteForce(vector<int>& nums) {
        int n = nums.size();
        vector<int> res;

        for (int i = 0; i < n; i++) {
            int count = 0;
            for (int j = 0; j < n; j++) {
                if (nums[i] == nums[j])
                    count++;
            }
            if (count > n / 3) {
             if (find(res.begin(), res.end(), nums[i]) == res.end())
                    res.push_back(nums[i]);
            }
        }
        return res;
    }

    // ---------- APPROACH 2: HASH MAP ----------
    vector<int> hashMap(vector<int>& nums) {
      unordered_map<int, int> freq;
        vector<int> res;
        int n = nums.size();

        for (int x : nums)
            freq[x]++;

        for (auto &p : freq) {
            if (p.second > n / 3)
                res.push_back(p.first);
        }
        return res;
    }

    // ---------- APPROACH 3: BOYER–MOORE (OPTIMAL) ----------
    vector<int> boyerMoore(vector<int>& nums) {
        int n = nums.size();

        int cand1 = 0, cand2 = 0;
        int cnt1 = 0, cnt2 = 0;

        // Pass 1: find candidates
        for (int x : nums) {
            if (x == cand1)
                cnt1++;
            else if (x == cand2)
                cnt2++;
            else if (cnt1 == 0) {
                cand1 = x;
                cnt1 = 1;
            }
            else if (cnt2 == 0) {
                cand2 = x;
                cnt2 = 1;
            }
            else {
                cnt1--;
                cnt2--;
            }
        }

        // Pass 2: verify
        cnt1 = cnt2 = 0;
        for (int x : nums) {
            if (x == cand1) cnt1++;
            else if (x == cand2) cnt2++;
        }

        vector<int> res;
        if (cnt1 > n / 3) res.push_back(cand1);
        if (cnt2 > n / 3) res.push_back(cand2);

        return res;
    }

    vector<int> majorityElement(vector<int>& nums) {
        // return bruteForce(nums);   
        // return hashMap(nums);    
        return boyerMoore(nums);     
    }
};
