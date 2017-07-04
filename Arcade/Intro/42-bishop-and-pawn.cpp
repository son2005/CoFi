// https://codefights.com/arcade/intro/level-9/6M57rMTFB9MeDeSWo
bool bishopAndPawn(std::string bishop, std::string pawn) {
    int r1 = bishop[0] - 'a';
    int c1 = bishop[1] - '0';
    int r2 = pawn[0] - 'a';
    int c2 = pawn[1] - '0';
    return std::abs(r1-r2) == std::abs(c1-c2);
}
