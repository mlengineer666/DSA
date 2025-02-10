class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        if(intervals.size()==0) return {};
        if(intervals.size()==1) return {intervals[0]};

        sort(begin(intervals),end(intervals));
        vector<vector<int>>ans;
        ans.push_back(intervals[0]);


        for(int i=1;i<intervals.size();i++){
            int last = ans.back()[1];

            if(last>=intervals[i][0]){
                ans.back()[1] = max(last,intervals[i][1]);
            }else{
                ans.push_back(intervals[i]);
            }
        }

        return ans;

    }
};