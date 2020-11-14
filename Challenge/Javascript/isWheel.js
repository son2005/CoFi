/*
You decided to create an automatic image recognizer that will determine the object in the image based on its contours. The main recognition system is already implemented, and now you need to start the teaching process.

Today you want to teach your program to recognize wheel patterns, which means that you need to implement a function that, given the adjacency matrix representing the contour, will determine whether it's a wheel or not.

The wheel contour can be thought of as a single center vertex and a regular polygon with n (n > 2) vertices which are all connected to the center. Here is an example:

https://codesignal.s3.amazonaws.com/tasks/isWheel/img/wheel.png?_tm=1582033246637

Given the object's contour as an undirected graph represented by its adjacency matrix adj determine whether it's a wheel or not.

Example

For

adj = [[false, true, true, true, true],
       [true, false, true, false, true],
       [true, true, false, true, false],
       [true, false, true, false, true],
       [true, true, false, true, false]]
the output should be
isWheel(adj) = true.

Here's what the given graph looks like:

https://codesignal.s3.amazonaws.com/tasks/isWheel/img/example1.png?_tm=1582033247042

Input/Output

[execution time limit] 4 seconds (js)

[input] array.array.boolean adj

An adjacency matrix of an undirected graph.

Guaranteed constraints:
3 < adj.length < 100,
adj[i].length == adj.length.

[output] boolean

true if the given contour is a wheel, false otherwise.
*/
// https://app.codesignal.com/challenge/CZBN32YvXfKqwX9h6
// function isWheel(adj) {
//     var arrC = []
//     for(var i in adj) {
//         var count = 0
//         for(var j in adj[i]) {
//             if(adj[i][j]) count++
//         }
//         arrC.push(count)
//     }
//
//     var n = arrC.length - 1
//     var countAdj = arrC[0] == n ? arrC[1] : arrC[0]
//     var count = 0
//     // console.log(arrC, countAdj)
//     for(var i in arrC) {
//         if (arrC[i] == n) count++
//         else if(arrC[i] != countAdj) return false
//     }
//     // console.log(count, n, countAdj)
//     return countAdj == 3 && (count == n+1 || count == 1 && (n - countAdj == 1 || n > 6))
// }

function isWheel(adj) {
    var c = 0, q = 0
    for(var i of adj) {
        for(var j of i) c -= q = +j
        c += 4
    }
    return c == q + 4
}
