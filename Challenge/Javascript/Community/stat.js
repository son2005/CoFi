// https://app.codesignal.com/challenge/uncDKzY6mqD9zzDbK

function stat(log) {
    f = []
    g = []
    r = []
    z = []
    log = log.map(e => e.split(", "))
    log.map(e => {
        e[1] = +e[1]
        e[2] = +e[2]
    })

    for(e of log) {
        t = e[2] - e[1]
        if(!f[e[0]]) {
            f[e[0]] = t
            g[e[0]] = 0
        }
        else f[e[0]] += t
        g[e[0]]++
    }

    for(k in f) r.push([k, g[k], f[k] / g[k]|0, f[k]])

    r.sort((a,b) => b[3] - a[3] || (a[0] > b[0] ? 1 : -1)).map(e => e[3] = "")

    for(e of r) z.push(e.join(", ").slice(0, -2))
    return z
}
