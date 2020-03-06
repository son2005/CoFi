// https://app.codesignal.com/challenge/cETsz2TdCTtEpJD4b

/**
(2 (7 (2 () ()) (6 (5 () ()) (11 () ()))) (5 () (9 (4 () ()) ())))
(2 (7 (2) (6 (5) (11))) (5 () (9 (4) ())))      tree = tree.replace(/ \(\) \(\)/g, ``)
(2(7(2)(6(5)(11)))(5()(9(4)())))                tree = tree.replace(/ /g, ``)

i = 1
    2 = 1
i = 2
    7 = 2
i = 3 (
    2 = 3
i = 3 )(
    6 = 3
i = 4 (
    5 = 4
i = 4 )(
    11 = 4
i = 2 )))(
    5 = 2
i = 3 ()(
    9 = 3
i = 4 (
    4 = 4

(413(683)(355(913(985)())()))
i = 1
413 = 1
i = 2
683 = 2
i = 2 ()
355 = 2
i = 3
913 = 3
i = 4
985 = 4
*/


treeBottom = tree => {
    tree = tree.replace(/ /g, ``)
    h = {'(': 1, ')': -1}
    keys = []
    values = []
    m = 0
    c = 0
    z = []
    s = ''
    while(tree) {
        s += tree[0]
        tree = tree.slice(1)
        if(!h[s] && !h[tree[0]]) continue

        if(h[s]) c += h[s]
        else {
            keys.push(s)
            values.push(c)
        }

        m = Math.max(m, c)
        s = ''
    }

    m--
    for(i in values) if(values[i] == m) z[c++] = +keys[i]

    return z
}

// short hand
// treeBottom = t => {
//     t = t.replace(/ /g, ``)
//     h = {'(': 1, ')': -1}
//     k = []
//     v = []
//     z = []
//     s = ''
//     m = 0
//     c = 0
//     j = 0
//     while(t) {
//         s += t[0]
//         t = t.slice(1)
//
//         if(h[s]) c += h[s]
//         else {
//             if(!h[t[0]]) continue
//             k[j] = s
//             v[j++] = c
//         }
//
//         m = Math.max(m, c)
//         s = ''
//     }
//     m--
//     for(i in v) if(v[i] == m) z[c++] = +k[i]
//
//     return z
// }
