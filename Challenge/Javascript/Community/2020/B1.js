/*
While Alice and Bob were playing soccer in the previous task, the dragons came and they drank tea and decided to play a game with you.

The dragons go behind the screen and say how many heads they have. You also need to find a number that is the product of the number of heads of each dragon. And it is the greatest!

Let's say the dragons reported that they have 8 heads then, the highest possible number is 3 * 3 * 2, i.e. there are three dragons that have 3, 3, 2 heads respectively. Return the largest number.

[execution time limit] 4 seconds (js)

[input] integer64 n

n <= 100

[output] integer64
*/
// https://app.codesignal.com/challenge/7cHoyRn3WjMC4WJXe
function B1(n) {
    // The result should be mul of 2 or 3 for maximum product
    // If n = 4, 2*2 > 3*1
    if(n < 2) return 1

    // var arr = []
    var p = 1
    while(n > 0) {
        // if(n == 4) {
        //     arr.push(4)
        //     n -= 4
        // }
        // else if(n > 2) {
        //     arr.push(3)
        //     n -= 3
        // }
        // else if(n > 1) {
        //     arr.push(2)
        //     n -= 2
        // }
        // p *= arr[arr.length-1]
        var i = n == 4 ? 4 : n > 2 ? 3 : 2
        n -= i
        p *= i
    }

    return p
}
