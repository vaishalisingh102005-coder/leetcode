class Solution {
public:
    int wateringPlants(vector<int>& plants, int capacity) {
        int rem=capacity;
        int step=0;
        for(int i=0;i<plants.size();i++){
            if(plants[i]<=rem){
                step++;
                rem-=plants[i];
            }
            else{
                rem=capacity-plants[i];
                step+=(i)+(i+1);
            }
        }
        return step;
    }
};