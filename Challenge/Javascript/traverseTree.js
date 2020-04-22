// https://app.codesignal.com/challenge/er8234anm4Ynj7ith

q = []
traverseTree = t => {
    f(t, 0)
    a = []
    q.map(e => a = [...a, ...e])
    return a
}

f = (t, d) => t && (
    (q[d] = q[d] || []).push(t.value),
    f(t.left, ++d),
    f(t.right, d)
)


// q = []
// traverseTree = t => {
//     f(t, 0)
//     a = []
//     q.map(e => a = [...a, ...e])
//     return a
// }
//
// f = (t, d) => {
//     if(!t) return
//     q[d] = q[d] || []
//     q[d].push(t.value)
//     f(t.left, ++d)
//     f(t.right, d)
// }
