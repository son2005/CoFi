/*
You decided to create an automatic image recognizer that will determine the object in the image based on its contours. The main recognition system is already implemented, and now you need to start the teaching process.

Today you want to teach your program to recognize butterfly patterns, which means that you need to implement a function that, given the adjacency matrix representing the contour, will determine whether it's a butterfly or not.

The butterfly contour looks like this:
https://codesignal.s3.amazonaws.com/tasks/isButterfly/img/butterfly.png?_tm=1582028217617
A butterfly

Given the object's contour as an undirected graph represented by adjacency matrix adj determine whether it's a butterfly or not.

Example

For

adj = [[false, true, true, false, false],
       [true, false, true, false, false],
       [true, true, false, true, true],
       [false, false, true, false, true],
       [false, false, true, true, false]]
the output should be
isButterfly(adj) = true.

Here's what the given graph looks like:
https://codesignal.s3.amazonaws.com/tasks/isButterfly/img/example1.png?_tm=1582028217870
Example

Input/Output

[execution time limit] 4 seconds (js)

[input] array.array.boolean adj

An adjacency matrix of an undirected graph.

Guaranteed constraints:
adj.length == 5,
adj[i].length == 5.

[output] boolean

true if the given contour is a butterfly, false otherwise.
*/
// https://app.codesignal.com/challenge/iBRLaC2LMW32ggB8P
function isButterfly(adj) {
    // Butter fly contour:
    // 4 points with 2 edge
    // 1 point with 4 edge
    // dictionary: {2: 4, 4: 1}
    var dict = {}
    for(let i in adj) {
        var key = 0
        for(let j in adj[i]) {
            if(adj[i][j]) {
                if(i == j) return false
                key++
            }
        }
        dict[key] = dict[key] || 0
        dict[key]++
    }
    return dict[2] == 4 && dict[4] == 1
}
