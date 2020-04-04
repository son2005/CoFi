//
// Binary trees are already defined with this interface:
// function Tree(x) {
//   this.value = x;
//   this.left = null;
//   this.right = null;
// }
a = []
largestValuesInTreeRows = t => f(t) || a
p = (v, i) => a[i] = Math.max(a[i] || -1e4, v)
f = (t, i = 0) => t && (
    p(t.value, i++),
    f(t.left, i),
    f(t.right, i)
)
