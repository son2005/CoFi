// https://app.codesignal.com/challenge/p4qArskGsNtf6ecdP

missingNumber = a =>
{
    // Another method
    // s = 0
    // a.map(e => s += e + 1)
    // l = a.length + 1
    // return (r = (l * (l+1)) / 2 % s - 1) < 0 ? l - 1 : r

    i = 0
    for(e of a.sort((a,b) => a - b))
        if(e != i++) {
            --i
            break
        }
    return i
}
