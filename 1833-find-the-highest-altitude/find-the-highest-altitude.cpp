class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int altitude = 0;
        int highest = 0;
        for(int i=0; i<=gain.size()-1; i++){
            altitude += gain[i];
            if(altitude > highest){
                highest = altitude;
            }
        }
        return highest;
    }
};