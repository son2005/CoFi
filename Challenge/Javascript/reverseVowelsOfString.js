// https://app.codesignal.com/challenge/jq4PSoEAfmb4famy5
// reverseVowelsOfString = s => {
//     r = s.match(/[aeiou]/gi) || []
//     if (r[i=0])
//         r = r.reverse()
//         return s.split``.map(e => e.match(/[aeiou]/i) ? r.shift() : e).join``
//     return ''
// }


reverseVowelsOfString = s => (r = (s.match(/[aeiou]/gi) || []).reverse()) ?
    s.split``.map(e => e.match(/[aeiou]/i) ? r.shift() : e).join`` : ''
