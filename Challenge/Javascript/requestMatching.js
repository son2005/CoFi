// https://app.codesignal.com/challenge/LNLbdtQnJ7asefubq

function requestMatching(p, d, t) {
// [12, 10, 19, 15, 5, 20]
// [12, 8, 25, 10, 3, 10]
    var r1 = [], r2 = [], r3 = []
    for(i = 0; i < p.length; i++) {
        var a = d[i], b = t[i]
        var temp = b - a
        if (temp >= 0) r1.push(a)
        else r2.push(temp)
        temp = temp >= 0 ? a : temp

        if(r3['a'+temp])
            r3['a'+temp] += ',' + p[i]
        else r3['a'+temp] = p[i]
    }
    r1.sort( (a,b) => a-b )
    r2.sort( (a,b) => b-a )
    r4 = [...new Set([...r1, ...r2])]
    var r5 = [], c = 0
    for(i = 0; i < r4.length; i++) {
        var arr = r3['a'+r4[i]].split(',').sort()
        for(j = 0; j < arr.length; j++) {
            r5[c++] = arr[j]
            if(c == 5) return r5
        }
    }
    return r5
}
