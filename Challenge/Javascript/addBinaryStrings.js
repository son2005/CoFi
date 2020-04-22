// https://app.codesignal.com/challenge/dYHyPazDTukYyTN3o
z = []
temp = 0
addBinaryStrings = (a, b) => {
    f(a.split``, b.split``)
    return z.reverse().join``
}

f = (a, b) => {
    if(!a[0] && !b[0]) {
        if(temp) z.push(temp)
        return
    }
    va = +a.pop() || 0
    vb = +b.pop() || 0
    s = Math.abs(va - vb)
    if(va && vb) {
        s += temp
        temp = 1
    }
    else {
        if(s && temp) s = 0
        else {
            s += temp
            temp = 0
        }
    }
    z.push(s)
    f(a, b)
}
