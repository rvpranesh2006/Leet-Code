class Solution {
public:
    int distanceBetweenBusStops(vector<int>& distance, int start, int destination) {
        int clockwise = 0;
        int total  = 0;
        for(int d : distance)
        {
            total += d;

        } 
        if(start > destination)
        {
            swap(start,destination);
        }
        for(int i = start; i < destination ; i++)
        {
            clockwise += distance[i];
        }
        int counterclockwise = total - clockwise;
        return min(clockwise,counterclockwise);
    }
};