// https://app.codesignal.com/challenge/nPRjRHYLCiHPA5byC

decodeString = s => {
    while(m = s.match(/]/)) {
        i = m.index
        str = ""
        while(--i)
            if(s[i] == "[") break
            else str = s[i] + str
        s = s.replace(`${loop = s.substr(0, i).match(/\d+/g).pop()}[${str}]`, str.repeat(loop))
    }
    return s
}
