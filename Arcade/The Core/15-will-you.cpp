// https://codefights.com/arcade/code-arcade/at-the-crossroads/jZ4ZSiGohzFTeg4yb
bool willYou(bool young, bool beautiful, bool loved) {
    return (young && beautiful && !loved) || (loved && (!young || !beautiful));
}
