// https://app.codesignal.com/challenge/tveq8rCtqiXC7tbe4
/*
Avoid using C++'s std::next_permutation or similar features in other languages to solve this challenge. Implement the algorithm yourself, since this is what you would be asked to do during a real interview.

Given a string s, find all its potential permutations. The output should be sorted in lexicographical order.

Example

For s = "CBA", the output should be
stringPermutations(s) = ["ABC", "ACB", "BAC", "BCA", "CAB", "CBA"];
For s = "ABA", the output should be
stringPermutations(s) = ["AAB", "ABA", "BAA"].
Input/Output

[execution time limit] 4 seconds (js)

[input] string s

A string containing only capital letters.

Guaranteed constraints:
1 ≤ s.length ≤ 5.

[output] array.string

All permutations of s, sorted in lexicographical order.
*/

stringPermutations = (s) => {
    if(s && !s[1]) return [s]

    x = []
    y = []
    z = []

    for(i of s) x.push(i)
    x.sort()

    for(let i in x) {
        a = [...x]
        t = a.splice(i, 1)
        p(t, a, y, z)
    }

    return y
}

p = (t, x, y, z) => {
    for(let i in x) {
        a = [...x]
        c = a.splice(i, 1)
        d = t + c
        if (!a[0]) {
            y.push(d)
            return
        }

        u = d + a.join(",")
        if(z[u]) continue
        z[u] = 1
        p(d, a, y, z)
    }
}
