// O( m + n)
class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m = matrix.size();
        int n = matrix[0].size();
        int i = 0, j = n - 1;  // Start from top-right corner
        
        while(i < m && j >= 0){
            if(matrix[i][j] == target) 
                return true;
            else if(matrix[i][j] > target) 
                j--; // Move left
            else 
                i++; // Move down
        }
        return false;
    }
};


// Binary Search - O(log(m*n))
#include <vector>
using namespace std;

class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m = matrix.size();
        if (m == 0) return false;
        int n = matrix[0].size();
        
        int left = 0, right = m * n - 1;
        
        while (left <= right) {
            int mid = left + (right - left) / 2;
            int midValue = matrix[mid / n][mid % n]; // convert 1D index to 2D
            
            if (midValue == target)
                return true;
            else if (midValue < target)
                left = mid + 1;
            else
                right = mid - 1;
        }
        
        return false;
    }
};
