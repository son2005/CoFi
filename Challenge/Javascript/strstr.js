// https://app.codesignal.com/challenge/2J2DXnJ6SWJNHJhNH

strstr = (s, x) => s.indexOf(x)

// not optimized but can pass all test
// strstr = (s, x) => {
//     h = new Set(x)
//     lx = x.length - 1
//     ls = s.length - 1
//     for(i = 0; i <= ls; i++) {
//         if(s[i] == x[0] && i + lx <= ls) {
//             flag = true
//             jump = true
//             // check from 2 side of x
//             for(j = 0, k = lx; j < k; j++, k--) {
//                 // check and skip jump if value of x from the right side exists in our set
//                 if(h.has(s[i+k])) jump = false
//                 if (s[i + k] != x[k] || s[i + j] != x[j]) {
//                     flag = false
//                     break
//                 }
//             }
//             if(flag) return i
//             if(jump) i += lx - 1
//         }
//     }
//     return -1
// }
