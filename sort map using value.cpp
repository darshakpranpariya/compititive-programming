// sort cpp map using value.....


template <typename T1, typename T2>
        struct less_second {
            typedef pair<T1, T2> type;
            bool operator ()(type const& a, type const& b) const {
                return a.second > b.second;
            }
        };

class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        
        

        map<int, int> mymap;
        for(auto num:nums){
            mymap[num]++;
        }
        // …

        vector<pair<int, int> > mapcopy(mymap.begin(), mymap.end());
        sort(mapcopy.begin(), mapcopy.end(), less_second<int, int>());        
        
        vector<int> ans;
        for(int i=0;i<k;i++){
            ans.push_back(mapcopy[i].first);
        }
        return ans;
    }
};
