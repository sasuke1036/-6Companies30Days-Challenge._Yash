class Solution {
public:
    vector<vector<int>> highestPeak(vector<vector<int>>& isWater) {
       //Let us try to do with O(1) extra space.. and a clear bfs solution
        int m = isWater.size();
        int n = isWater[0].size();
        queue<pair<int,int>>q;

        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(isWater[i][j]==0)
                isWater[i][j]=-1;
                else{
                    isWater[i][j]=0;
                    q.push({i,j});
                }
            }
        }
        int total=0;
        while(!q.empty()){
            int s = q.size();
            for(int i=0;i<s;i++){
                pair<int,int>p=q.front();
                q.pop();
                int x = p.first,y=p.second;
                if(x>0 && isWater[x-1][y]==-1){
                    isWater[x-1][y] = total+1;
                    q.push({x-1,y});
                }
                if((x<m-1) && (isWater[x+1][y] == -1)){
                    isWater[x+1][y] = total+1;
                    q.push({x+1,y});
                }
                if(y>0 && (isWater[x][y-1]==-1)){
                    isWater[x][y-1] = total+1;
                    q.push({x,y-1});
                }
                if((y<n-1) && (isWater[x][y+1]==-1)){
                    isWater[x][y+1] = total+1;
                    q.push({x,y+1});
                }

            }
            total +=1;
        }
        return isWater;
    }
};
