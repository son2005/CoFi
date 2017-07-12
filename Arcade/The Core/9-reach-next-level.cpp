// https://codefights.com/arcade/code-arcade/at-the-crossroads/m9wjpkCjgofg7gs8N
bool reachNextLevel(int experience, int threshold, int reward) {
    return threshold - experience <= reward;
}
