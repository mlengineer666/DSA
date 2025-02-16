class Solution {
public:
    bool possible(vector<int>& time,long long given_time, int totalTrips){
        long actual_time = 0;
        for(int &t:time){
            actual_time+=given_time/t;
        }
        return actual_time>=totalTrips;
    }
    long long minimumTime(vector<int>& time, int totalTrips) {
        long long l = 1;
        long long r = (long long)*min_element(time.begin(),time.end())*totalTrips;

        while(l<r){
            long long mid = l+(r-l)/2;
            if(possible(time,mid,totalTrips)) r = mid;
            else l = mid+1;
        }
        return r;
    }
};