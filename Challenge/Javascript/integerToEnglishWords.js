https://app.codesignal.com/challenge/eXhrnce6nJixhbd33

units = ",One ,Two ,Three ,Four ,Five ,Six ,Seven ,Eight ,Nine ,Ten "
teens = "Eleven ,Twelve ,Thirteen ,Fourteen ,Fifteen ,Sixteen ,Seventeen ,Eighteen ,Nineteen "
tys = ",,Twenty ,Thirty ,Forty ,Fifty ,Sixty ,Seventy ,Eighty ,Ninety "
thousands = "Hundred ,Thousand ,Million ,Billion "

p = a => a.split(',')
units = p(units)
teens = p(teens)
tys = p(tys)
thousands = p(thousands)

integerToEnglishWords = num => num ? f(num).trim() : "Zero"
f = (num) => {
    if(num <= 10) return units[num]
    if(num < 20) return teens[num%10-1]
    if(num < 100) return tys[num/10|0] + f(num%10)
    if(num < 1000) return f(num/100|0) + thousands[0] + f(num%100)
    if(num < 10**6) return f(num/10**3|0) + thousands[1] + f(num%10**3)
    if(num < 10**9) return f(num/10**6|0) + thousands[2] + f(num%10**6)
    if(num < 10**12) return f(num/10**9|0) + thousands[3] + f(num%10**9)
}

// Short hand
// t = 10e2
// s = [",One ,Two ,Three ,Four ,Five ,Six ,Seven ,Eight ,Nine ,Ten ",
// "Eleven ,Twelve ,Thirteen ,Fourteen ,Fifteen ,Sixteen ,Seventeen ,Eighteen ,Nineteen ",
// ",,Twenty ,Thirty ,Forty ,Fifty ,Sixty ,Seventy ,Eighty ,Ninety ",
// "Hundred ,Thousand ,Million ,Billion "].map(e => e.split(','))
//
// integerToEnglishWords = n => n ? f(n).trim() : "Zero"
// f = n => n <= 10 ? s[0][n] :
//         n < 20 ? s[1][n%10-1] :
//         n < 100 ? s[2][n/10|0] + f(n%10) :
//         n < t ? f(n/100|0) + s[3][0] + f(n%100) :
//         g(n)
// g = n => {
//     for(m = t, i=1; i<4; m *= t, i++)
//         if(n < m*t)
//             return f(n/m|0) + s[3][i] + f(n%m)
// }
