// https://app.codesignal.com/challenge/qTa6hRGHeLvkaLGtD

// Not optimize but pass all test
/**
 * R = 0
 * U = 1 rotate
 * L = 2 rotate
 * D = 3 rotate
 */
 h = {R: 0, U: 1, L: 2, D: 3}
 grid = []
 rotate = n => n-- && (grid = grid.reverse()[0].map((c, m) => grid.map(e => e[m])), rotate(n))

 game2048 = (gridInput, path) => {
     grid = gridInput
     while(path) {
         d = path[0]
         path = path.slice(1)
         rotate(h[d])
         for(i = 0; i < 4; i++) {
             for(j = 3; j > 0; j--) {
                 for(k = j-1; k >= 0; k--) {
                     if(grid[i][j]) {
                         if(grid[i][k] && grid[i][j] != grid[i][k]) break
                         if(grid[i][j] == grid[i][k]) {
                             grid[i][j] *= 2
                             grid[i][k] = 0
                             break
                         }
                     }
                     else if(grid[i][k]) {
                         grid[i][j] = grid[i][k]
                         grid[i][k] = 0
                     }
                 }
             }
         }
         // Rotate back
         if(h[d]) rotate(4 - h[d])
     }
     return grid
 }



// Shorthand
// h = {R: 0, U: 1, L: 2, D: 3}
// g = []
//
// r = n => n-- && (g = g.reverse()[0].map((c, x) => g.map(e => e[x])), r(n))
//
// l = t => t[j]   ?
//                     t[k] && t[j] - t[k] ? 1
//                                         : t[j] == t[k] && (t[j] *= 2, t[k] = 0, 1)
//                 :   t[k] && (t[j] = t[k], t[k] = 0)
//
//
// // l = t => {
// //     z = 0
// //     if(t[j]) {
// //         if(t[k] && t[j] - t[k]) z = 1
// //         if(t[j] == t[k]) {
// //             t[j] *= 2
// //             t[k] = 0
// //             z = 1
// //         }
// //     }
// //     else if(t[k]) {
// //         t[j] = t[k]
// //         t[k] = 0
// //     }
// //     return z
// // }
// game2048 = (v, s) => {
//     g = v
//     while(s) {
//         d = s[0]
//         s = s.slice(1)
//         r(h[d])
//         for(i = 0; i < 4; i++)
//             for(j = 3; j > 0; j--)
//                 for(k = j-1; k >= 0; k--)
//                     if(l(g[i])) break
//         // Rotate back
//         // h[d] && r(4 - h[d])
//         r(4 - h[d])
//     }
//     return g
// }
