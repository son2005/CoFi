// https://app.codesignal.com/challenge/vE9Ykd7mtRq7E77oY
function firstOperationCharacter(expr) {
    h = {'(': 1, ')': -1}
    m = 0
    c = 0
    z = {}
    i = 0
    while((s = expr[0], expr = expr.slice(1))) {
        if(h[s]) m = Math.max(m, c += h[s])
        if(s == '+' || s == '*') {
            v = s + '-' + i
            z[c] ? z[c].push(v) : z[c] = [v]
        }
        i++
    }

    r = 0
    for(e of z[m]) {
        v = +e.split`-`[1]
        if(!r && e[0] == '+')
            r = v
        if(e[0] == '*') return v
    }
    return r
}
