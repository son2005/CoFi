// https://codefights.com/arcade/intro/level-5/ZMR5n7vJbexnLrgaM
std::vector<std::vector<int>> minesweeper(std::vector<std::vector<bool>> a) {
   // Directions
   vector<pair<int, int>> ds;
   ds.push_back(make_pair(-1,1));
   ds.push_back(make_pair(-1,0));
   ds.push_back(make_pair(-1,-1));
   ds.push_back(make_pair(0,1));
   ds.push_back(make_pair(0,-1));
   ds.push_back(make_pair(1,1));
   ds.push_back(make_pair(1,0));
   ds.push_back(make_pair(1,-1));

   int maxR = a.size();
   int maxC = a[0].size();
   vector<vector<int>> res(maxR, vector<int>(maxC, 0));
   for(int r = 0; r < maxR; r++) {
      for(int c = 0; c < maxC; c++) {
         if(a[r][c]) {
            for(int i = 0; i < ds.size(); i++) {
               int row = r + ds[i].first;
               int col = c + ds[i].second;
               if(row < 0 || row >= maxR || col < 0 || col >= maxC)
                  continue;
               res[row][col]++;
            }
         }
      }
   }
   return res;
}
