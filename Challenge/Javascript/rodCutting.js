https://app.codesignal.com/challenge/AHL2v6hReiaHhZCJR

h = (a,b) => a > b ? a : b
rodCutting = (n, v) => {
    r = [0]
    v.shift()
    for(m = 0, i = 1; i <= n; r[i] = m, i++)
        for(j = 0; j < i; j++) m = h(m, v[j] + r[i-j-1])
    return r.pop()
}
