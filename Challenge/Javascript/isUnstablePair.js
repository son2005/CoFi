// https://app.codesignal.com/challenge/FS3sdtMXfCFrbfdBf
// isUnstablePair = (f1, f2) => {
    // l1 = f1.length
    // l2 = f2.length
    // l = l1 < l2 ? l1 : l2
    // // To compare two filenames a and b, find the first position i at which a[i] ≠ b[i]
    // f = true
    // for (i = 0; i < l; i++) {
    //     if (f1[i] != f2[i]) {
    //         f = false
    //         // If a[i] < b[i], then a < b. Otherwise a > b
    //         if(f1[i] > f2[i])
    //             // f2 goes first
    //             [f1, f2] = [f2, f1]
    //         break
    //     }
    // }
    // // If such position doesn't exist, the shorter string goes first.
    // if(f && l2 < l1)
    //     // f2 goes first
    //     [f1, f2] = [f2, f1]
    // // For filename1 = "A" and filename2 = "z", the output should be
    // // isUnstablePair(filename1, filename2) = false.
    // // Both "A" < "z" and "a" < "z".
    // return !(f1.toUpperCase() < f2 && f1.toLowerCase() < f2)
// }

// isUnstablePair = (a, b) => {
//     if(b < a) [a, b] = [b, a]
//     return b < a.toLowerCase() && b > a.toUpperCase()
// }

isUnstablePair = (a, b) => (b < a && ([a, b] = [b, a]), b < a.toLowerCase() && b > a.toUpperCase())
