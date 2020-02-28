// https://app.codesignal.com/challenge/dF75kDpLMi3WKMkdD

areFollowingPatterns = (s, p) => {
    a = []
    b = []
    for(i in s) {
        x = s[i]
        y = p[i]
        if (a[x] && a[x] != y || b[y] && b[y] != x) return !1
        a[x] = y
        b[y] = x
    }
    return !0
}
