// https://app.codesignal.com/challenge/x33p5fg4AsDL9Z9J8

maxPairProduct = a {
    arr = []
    h = {}
    hh = {}
    hhh = {}
    a.sort((a,b) => (h[a] = h[b] = 1, a-b))
    m = l => Math.max(...l)
    if(a[0] == 1) return m(a)

    arr = []
    n = a.length
    for(i = 0; i < n - 1; i++) {
        if(hh[k = a[i]]) continue
        for(j = i+1; j < n; j++) {
            if(hhh[p = k * a[j]]) continue
            hhh[p] = 1
            if(h[p])
                arr.push(p)
        }
        hh[k] = 1
    }

    return arr[0] ? m(arr) : -1
}
