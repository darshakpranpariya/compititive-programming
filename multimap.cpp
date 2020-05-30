//Multimap/map always store value in asending order..
//map -> store value with only unique key..
//multimap -> can store value with duplicate key..

class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int K) {
        multimap<float,vector<int>> m1;
        for(int i=0;i<points.size();i++){
            float euclidean_distance = float(sqrt((points[i][0]-0)*(points[i][0]-0) + (points[i][1]-0)*(points[i][1]-0)));
            m1.insert({euclidean_distance,{points[i][0],points[i][1]}});
        }
        vector<vector<int>> ans;
        for(auto v:m1){
            if(K>0){
                ans.push_back({v.second[0],v.second[1]});
                K--;
            }
            else{
                break;
            }
        }
        return ans;
    }
};
