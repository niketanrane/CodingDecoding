class Solution {
public:
    bool canVisitAllRooms(vector<vector<int>>& rooms) {
        int len = rooms.size();
        vector<bool> visitedRoom(len);
        int src = 0;
        //visited[src] = true;
        visit(src, visitedRoom, rooms);
        for(int i = 1; i < len; i++){
            if(!visitedRoom[i]){
                return false;
            }
        }
        return true;
    }
    
    int visit(int room, vector <bool> &visitedRoom, vector < vector <int> > &rooms){
        visitedRoom[room] = true;
        for(int i = 0; i < rooms[room].size(); i++){
            int curRoom = rooms[room][i];
            if(!visitedRoom[curRoom]){
                visit(curRoom, visitedRoom, rooms);
            }
        }
        return 0;
    }
};