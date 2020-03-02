// https://app.codesignal.com/challenge/LC8sv7t8uDEccgDYs

arr = []
arrMin = []
arrOrg = []
popNew = e => arrMin = [...e].sort((a,b) => a - b)
pushNew = e => (arrMin[arrOrg.push(e)] = e, popNew(arrMin))

f = minimumOnStack = o => o[0] ?
(c = o.shift(), c == "min" ? arr.push(+arrMin[0]) :
                c == "pop" ? arrOrg.pop() && popNew(arrOrg) : pushNew(c.split(` `)[1]), f(o)) : arr




// Short hand
// a = []
// s = []
// d = []
// z = e => s = [...e].sort((a,b) => a - b)
// p = e => (s[d.push(e)] = e, z(s))
//
// f = minimumOnStack = o => o[0] ?
// (c = o.shift(), c == "min" ? a.push(+s[0]) :
//                 c == "pop" ? d.pop() && z(d) : p(c.split(` `)[1]), f(o)) : a
