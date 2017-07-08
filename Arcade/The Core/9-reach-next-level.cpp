// https://codefights.com/arcade/code-arcade/intro-gates/m9wjpkCjgofg7gs8N
bool reachNextLevel(int experience, int threshold, int reward) {
    return threshold - experience <= reward;
}
