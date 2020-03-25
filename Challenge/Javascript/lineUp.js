// https://app.codesignal.com/challenge/niL5z2ZY5DPuHGiro

// g = lineUp = s => {
//     if(s[0])
//         return (s[0] == 'A' ? f : f ^= 1) + g(s.substr(1))
//     return 0
// }
f = 1
// g = lineUp = s => s[0] ? (s[0] == 'A' ? f : f^=1) + g(s.substr(1)) : 0
g = lineUp = s => s ? (f ^= s[0] != 'A') + g(s.substr(1)) : 0
