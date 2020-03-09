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

// shorthand
// multiplyTwoStrings = ((r, a) => {
//   for (z = [], x = -1, c = 0, i = r.length - 1; i >= 0; i--) {
//     for (z[++x] = "", j = a.length - 1; j >= 0; j--) m = r[i] * a[j] + c, c = ~~(m / 10), z[x] += m % 10;
//     for (c && (z[x] += c), e = 0; e < x; e++) z[x] = "0" + z[x];
//     c = 0
//   }
//   for (i in s = "", c = 0, z[x]) {
//     for (e of (n = 0, z)) e[i] && (n += +e[i]);
//     n += c, c = ~~(n / 10), s = n % 10 + s
//   }
//   return c && (s = c + s), s
// });
