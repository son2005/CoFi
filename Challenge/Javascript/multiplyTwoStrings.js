// https://app.codesignal.com/challenge/vXx8BRKTZMWBSsYw6
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
