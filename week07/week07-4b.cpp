class Solution {
public:
    bool isRobotBounded(string instructions) {
        int dx[4]={1,0,-1,0};//移動的方向
        int dy[4]={0,1,0,-1};
        int x= 0,y=0,dir=0;//dir方向direction:0:右 1:下 2:左 3:右
        for(char c : instructions)
        {
            if(c=='G')
            {
                x +=dx[dir];
                y +=dy[dir];
            }
            if(c=='L')dir = (dir+3)%4;//往左轉，其實是-1但會有負的，再加4，變+3
            if(c=='R')dir = (dir+1)%4;//0變1便2變3變0變1變2變3變0...
        }
        if(x==0 && y==0)return true;//留在原地
        else if(dir==0)return false;//不在原地，且向在原來的方向，就會越走越遠
        else return true;//方向有改，就醫定會繞圈圈     
    }
};