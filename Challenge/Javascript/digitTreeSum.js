//
// Binary trees are already defined with this interface:
// function Tree(x) {
//   this.value = x;
//   this.left = null;
//   this.right = null;
// }
a = []
digitTreeSum = t => f(t) || a.reduce((i,j) => i += j)
f = (t, v="") => {
    if(t) {
        let c = v + "" + t.value
        f(t.left, c)
        f(t.right, c)
        if(!t.left && !t.right)
            a.push(+c)
    }
}
