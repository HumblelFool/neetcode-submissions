class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int n=matrix.size();
        int m=matrix[0].size();
       
        if (n == 0 || matrix[0].empty()){
             return false;
         }

        int top=0;
        int bot=n-1;

        while(top<=bot){
            int row=(top+bot)/2;
            if(target>matrix[row][m-1]){
                top=row+1;
            }else if(target<matrix[row][0]){
                bot=row-1;
            }else{
                break;
            }
        }
        if(!(top<=bot)){
            return false;
        }
        int row=(top+bot)/2;
        int l=0;
        int r=m-1;
        while(l<=r){
            int m=(l+r)/2;
            if(target>matrix[row][m]){
                l=m+1;
            }else if(target<matrix[row][m]){
                r=m-1;
            }
            else{
                return true;
            }
        }
        return false;
    }
};
