// https://app.codesignal.com/challenge/ZDcqnTLrb2hiYfWmG
h = {}
fileNaming = n => {
    for(i in n) {
        if(h[n[i]]) {
            while(h[temp = n[i] + `(${h[n[i]]})`])
              h[n[i]]++
            h[n[i] = temp] = 1
        }
        h[n[i]] = 1
    }
    return n
}

// h = {}
// fileNaming = n =>
//     n = n.map(e => {
//         if(h[e]) {
//             while(h[t = e + `(${h[e]})`]) h[e]++
//             h[e = t] = 1
//         }
//         h[e] = 1
//         return e
//     });
