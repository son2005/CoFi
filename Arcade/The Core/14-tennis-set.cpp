// https://codefights.com/arcade/code-arcade/at-the-crossroads/7jaup9HprdJno2diw
bool tennisSet(int score1, int score2) {
    if(score1 >= 7 && score2 >= 7) return false;
    if(score1 >= 5 && score1 <= 7 && score2 >= 5 && score2 <= 7)
        return (score1 == 7 || score2 == 7) ? true : false;
    if(score1 == 6 && score2 < 6 || score2 == 6 && score1 < 6)
        return true;
    return false;
}
