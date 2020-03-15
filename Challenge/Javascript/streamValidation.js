// https://app.codesignal.com/challenge/9TMYWHjjAr5GAjAxy
m = a => a.replace(/0/g,'').length
f = streamValidation = s => {
    // 128   10000000
    // 240   11110000
    // 128   10000000
    // 192   11000000

    // 1 byte
    if((b = s.shift()) < 127) {
        return (!s[0]) ? !0 : f(s)
    }

    // console.log(s.map(e => e.toString(2)))
    // console.log("======",s,b,b.toString(2),numberOfByte)
    numberOfByte = m((b&240).toString(2))
    while(--numberOfByte) {
        b = s.shift()
        // console.log(numberOfByte, b, b.toString(2))
        if((b & 128) != 128) return !1
    }

    return (s.length) ? f(s) : !0
}

// short hand
// c = 128
// m = a => a.replace(/0/g,'').length
// f = streamValidation = s => {
//     // 1 byte
//     if((b = s.shift()) < 127) {
//         if(!s[0]) return !0
//         return f(s)
//     }
//
//     n = m((b&240).toString(2))
//     while(--n) if((s.shift() & c) != c) return !1
//
//     if(s.length) return f(s)
//     return !0
// }
