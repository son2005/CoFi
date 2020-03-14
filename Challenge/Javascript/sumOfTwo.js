// https://app.codesignal.com/challenge/MaMiLK5PHhqiwwTGS
function sumOfTwo(a, b, v) {
    a = new Set([...a].map(e => e = v - e))
    b = new Set(b)

    n = new Set([...a].filter(x => b.has(x)))
    return n.size ? true : false
}

// short hand
// sumOfTwo = (a, b, v) => (b = new Set(b.map(e => e = v - e)),
//                         a.filter(x => b.has(x))).length ? true : false
