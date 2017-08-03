/*
You are climbing a staircase that has n steps. You can take the steps either 1 or 2 at a time. Calculate how many distinct ways you can climb to the top of the staircase.

Example

For n = 1, the output should be
climbingStairs(n) = 1;

For n = 2, the output should be
climbingStairs(n) = 2.

You can either climb 2 steps at once or climb 1 step two times.

Input/Output

[time limit] 500ms (cpp)
[input] integer n

Guaranteed constraints:
1 ≤ n ≤ 50.

[output] integer

It's guaranteed that the answer will fit in a 32-bit integer.
*/
map<int, int> m;
int climbingStairs(int n) {
// 1: [1]
// 2: [11, 2]       => f(1) + f(0)
// 3: [111, 12, 21] => f(2) + f(1)
// 4: [1111, 121, 112, 211, 22] => f(3) + f(2)
    if(m[n]) return m[n];
    if(n<3) return n;
    m[n] = climbingStairs(n-1) + climbingStairs(n-2);
    return m[n];
}
