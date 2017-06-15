// https://codefights.com/interview/7nbELjSu9Q4n6xviC
char firstNotRepeatingCharacter(std::string s) {
   int cnt[256]{0};
   for(auto c : s) {
      int v = (int)c;
      cnt[v]++;
   }

   for(int i = 0; i < 256; i++) {
      if(cnt[i] == 1) return char(i);
   }
   return '_';
}
