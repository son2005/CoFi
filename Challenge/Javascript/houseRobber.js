// https://app.codesignal.com/challenge/DhSw9hKytEtAbJMnP
o = e = 0

// 82 chars
// m = (a,b) => a > b ? a : b
// houseRobber = n => n.map((v,i) => i & 1 ? e = m(e + v, o) : o = m(o + v, e)) | m(e, o)

// 80 chars
m = () => o > e ? o : e
houseRobber = n => n.map((v,i) => i & 1 ? (e += v, e = m()) : (o += v, o = m())) | m()
