// https://app.codesignal.com/challenge/vXx8BRKTZMWBSsYw6
/*
Avoid using built-in big integers when solving this challenge. Implement them yourself, since this is what you would be asked to do during a real interview.

Multiply two numbers that have been given to you as strings, s1 and s2, and return the result as a string. Neither s1 nor s2 contain leading zeros, and your answer shouldn't either.

Example

For s1 = "15" and s2 = "3", the output should be
multiplyTwoStrings(s1, s2) = "45";
For s1 = "13" and s2 = "13", the output should be
multiplyTwoStrings(s1, s2) = "169".
Input/Output

[execution time limit] 4 seconds (js)

[input] string s1

Guaranteed constraints:
1 ≤ s1.length ≤ 1000.

[input] string s2

Guaranteed constraints:
1 ≤ s2.length ≤ 1000.

[output] string

The result of s1 * s2, without a leading zero.
*/
multiplyTwoStrings=(s1, s2) => {
    let arr = []
    let index = -1
    let carry = 0

    for(let i = s1.length - 1; i >= 0; i--) {
        arr[++index] = ""
        for(let j = s2.length - 1; j >= 0; j--) {
            let mul = s1[i] * s2[j] + carry
            carry = ~~(mul / 10)
            arr[index] += mul % 10
        }
        if(carry) arr[index] += carry

        for(let e = 0; e < index; e++) arr[index] = "0" + arr[index]
        carry = 0
    }

    res = ""
    carry = 0
    for(let i = 0; i < arr[index].length; i++) {
        let num = 0
        for(let ele of arr) if(ele[i]) num += +ele[i]
        num += carry
        carry = ~~(num / 10)
        res = num % 10 + res
    }

    return carry && (res = carry + res), res
}
