# Greedy

class Solution {
public:
    int intersectionSizeTwo(vector<vector<int>>& intervals) {
        sort(intervals.begin(), intervals.end(),
            [](const vector<int>& a, const vector<int>& b) {
                if (a[1] == b[1]) return a[0] > b[0];
                return a[1] < b[1];
            }
        );

        int p1 = -1, p2 = -1; // two largest chosen points
        int count = 0;

        for (auto& it : intervals) {
            int start = it[0];
            int end = it[1];

            bool p1In = (p1 >= start && p1 <= end);
            bool p2In = (p2 >= start && p2 <= end);

            if (p1In && p2In)   continue;
            else if (p1In && !p2In) {
                count += 1;
                p2 = p1;
                p1 = end;
            }
            else {
                count += 2;
                p2 = end - 1;
                p1 = end;
            }
        }
        return count;
    }
};