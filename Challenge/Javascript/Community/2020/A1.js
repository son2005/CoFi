/*
Alice and Bob are playing soccer. Now it is the start of t minute of the match.
At the moment the score is a:b:

a - number of goals Alice has already scored.
b - number of goals Bob has already scored.

Alice needs c minutes to score a goal.
Bob needs d minutes to score a goal.

Considering that the match has 90 minutes, the referee will not give extra time.
Calculate which player will win the match.

If Alice wins, then "Alice" print.
If Bob wins, the "Bob" print.
If there is a draw, then the print "Draw".

[execution time limit] 4 seconds (js)

[input] integer a

number of goals Alice has already scored
0 <= a <= 1000

[input] integer b

number of goals Bob has already scored
0 <= b <= 1000

[input] integer c

minutes to score a goal - Alice
1 <= c <= 1000

[input] integer d

minutes to score a goal - Bob
1 <= d <= 1000

[input] integer t

(t - 1) minutes ended, rest of the match [t; 90]
1 <= t <= 90

[output] string

If Alice wins, then "Alice" print.
If Bob wins, the "Bob" print.
If there is a draw, then the print "Draw".
*/

// https://app.codesignal.com/challenge/zvfE9pEwRq3iQuxyF
function A1(a, b, c, d, t) {
    // a: number of goals of Alice
    // c: minutes neeeded for Alice to score next goal
    // b: number of goals of Bob
    // d: minutes neeeded for Bob to score next goal
    // t: current minute of the match
    // The score is a:b

    // Minutes left
    var minutesLeft = 90 - t;
    // Number of score Alice will make in this match with the time left
    var scoreAlice = Math.round(minutesLeft / c)
    // Number of score Bob will make in this match with the time left
    var scoreBob = Math.round(minutesLeft / d)
    // Score for alice
    a += scoreAlice
    // Score for Bob
    b += scoreBob
    return a == b ? "Draw" : b > a ? "Bob" : "Alice"
}
