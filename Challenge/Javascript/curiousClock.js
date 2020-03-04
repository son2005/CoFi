// https://app.codesignal.com/challenge/x42YSsHZ4yekunyW4

/*
l - s       // differences time between s & l
s - (l - s) // s run opposite direction
=> 2s - l
*/
d = i => new Date(i)
curiousClock = (s, l) => d(2*d(s)-d(l)).toJSON().slice(0, 16).replace(/T/, ` `)
