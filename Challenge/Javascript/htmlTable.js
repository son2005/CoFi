// https://app.codesignal.com/challenge/uH8LDmezpYbqWkG84
// htmlTable = (t, r, c) => {
//     // Non-greedy
//     // z = /r>(.+?)r>/g
//     // // i = 0
//     // while(m = z.exec(t))
//     //     // if(i++ == r) {
//     //     if(!r--) {
//     //         // j = 0
//     //         x = /d>(\w+)</g
//     //         while(mm = x.exec(m[0]))
//     //             // if(j++ == c) return mm[1]
//     //             if(!c--) return mm[1]
//     //     }
//     // return "No such cell"

//     // 122
//     // if(z = t.match(/r>(.+?)r>/g)[r]) {
//     //     x = /d>(\w+)</g
//     //     while(m = x.exec(z))
//     //         if(!c--) return m[1]
//     // }
//     // return "No such cell"

//     // 117
//     // q = "No such cell"
//     // if(z = t.match(/r>(.+?)r>/g)[r])
//     //     if(x = [...z.matchAll(/d>(\w+)</g)][c])
//     //         q = x[1]
//     // return q
// }

// 108
q = "No such cell"
htmlTable = (t, r, c) => (z = t.match(/r>(.+?)r>/g)[r]) ?
                            (x = [...z.matchAll(/d>(\w+)</g)][c]) ? x[1] : q
                            : q
