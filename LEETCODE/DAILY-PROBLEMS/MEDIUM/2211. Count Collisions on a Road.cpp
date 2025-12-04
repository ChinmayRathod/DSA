class Solution {
public:
    int countCollisions(string directions) {
        int right = 0, counter = -2, collision = 0;
        if(directions[0] == 'L') counter = -1;
        else if(directions[0] == 'S') counter = 0;
        else{
            counter = 1;
            right++;
        }
        for(int i = 1; i<directions.size(); i++){
            if(directions[i] == 'L'){
                if(counter == 1){
                    collision = collision + 2 + right - 1;
                    right = 0;
                    counter = 0;
                }
                else if(counter==0)   collision += 1;
            }
            else if(directions[i] == 'R'){
                right++;
                counter = 1;
            }
            else{
                if(counter == -1)
                    counter = 0;
                else if(counter == 1){
                    collision += right;
                    right = 0;
                }
            }
        }
        return collision;
    }
};