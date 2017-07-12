// https://codefights.com/arcade/code-arcade/at-the-crossroads/J7PQDxpWqhx7HrvBZ
std::vector<int> metroCard(int lastNumberOfDays) {
    // daysOfMonth = {31,28,31,30,31,30,31,31,30,31,30,31};
    return lastNumberOfDays == 31 ? vector<int>{28,30,31} : vector<int>{31};
}
