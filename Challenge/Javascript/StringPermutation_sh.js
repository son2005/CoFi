// https://app.codesignal.com/challenge/tveq8rCtqiXC7tbe4

stringPermutations = (s) => {
    if(s && !s[1]) return [s]

    x = []
    y = []
    z = []

    for(i of s) x.push(i)
    x.sort()

    for(let i in x) {
        a = [...x]
        t = a.splice(i, 1)
        p(t, a, y, z)
    }

    return y
}

p = (t, x, y, z) => {
    for(let i in x) {
        a = [...x]
        c = a.splice(i, 1)
        d = t + c
        if (!a[0]) {
            y.push(d)
            return
        }

        u = d + a.join(",")
        if(z[u]) continue
        z[u] = 1
        p(d, a, y, z)
    }
}
