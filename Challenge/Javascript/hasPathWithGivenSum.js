// https://app.codesignal.com/challenge/prdMm5qccz5eiQ8Gx
q = {}
i = 0
hasPathWithGivenSum = (t, s) => f(t, s, 0) || q[i] || !1
f = (t, s, j) => t && (
    q[j] = q[j] || !(s -= t.value),
    i = i > j ? i : j,
    f(t.left, s, ++j),
    f(t.right, s, j)
)

// q = {}
// i = 0
// hasPathWithGivenSum = (t, s) => {
//     f(t, s, 0)
//     return q[i] || !1
// }
// f = (t, s, index) => {
//     if (!t) return
//     s -= t.value
//     q[index] = q[index] || !s
//     i = i > index ? i : index
//     f(t.left, s, ++index)
//     f(t.right, s, index)
// }
