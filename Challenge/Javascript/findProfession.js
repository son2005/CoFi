// https://app.codesignal.com/challenge/8AF8T8vQjNnFaFL6C

h = {0: 'Engineer', 1: 'Doctor'}

f = findProfession = (l, p) => {
    if(l == 1)
        return h[0]

    if(f(l-1, (p+1)/2|0) == h[1])
        return p%2 ? h[1] : h[0]

    return p%2 ? h[0] : h[1]
}
