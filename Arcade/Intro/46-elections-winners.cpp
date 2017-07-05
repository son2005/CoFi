// https://codefights.com/arcade/intro/level-10/8RiRRM3yvbuAd3MNg
int electionsWinners(std::vector<int> votes, int k) {
    int maxVote = *std::max_element(votes.begin(), votes.end());
    int counter = 0, counterSame = 0;
    for(auto &&i:votes) {
        if(k==0 && i == maxVote) counterSame++;
        else if(i+k > maxVote) counter++;
    }
    if(k==0) return counterSame == 1 ? 1 : 0;
    return counter;
}
