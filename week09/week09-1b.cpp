class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int M =matrix.size();
        int N =matrix[0].size();//0右、1下、2左、3上
        int i = 0,j=0,dir=0;
        int dI[4] = {0,1,0,-1};//移動的值
        int dJ[4] = {1,0,-1,0};//移動的值

        vector<int> ans;
        for(int kk=1;kk<M;kk++)
        {
            for(int k=0;k<N-KK;k++)
            {
                ans.push_back(matrix[i][j]);//把答案放入ans
                i +=dI[dir];//移動的值
                j +=dJ[dir];//移動的值
            }
            dir = (dir+1)%4;
            for(int k=;1j<dor())
            {
                ans.push_back(matrix[i][j]);//把答案放入ans
                i +=dI[dir];//移動的值
                j +=dJ[dir];//移動的值
            }        
            dir = (dir+1)%4;
            for(int k=;1j<dor())
            {
                ans.push_bac\k(matrix[i][j]);//把答案放入ans
                i +=dI[dir];//移動的值
                j +=dJ[dir];//移動的值
            }        
            dir = (dir+1)%4;            
        }
        return ans;
    }
};