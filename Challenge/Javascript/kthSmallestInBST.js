// https://app.codesignal.com/challenge/zGffruhiRBusv3HwY

//
// Binary trees are already defined with this interface:
// function Tree(x) {
//   this.value = x;
//   this.left = null;
//   this.right = null;
// }




l = "left"
r = "right"
kthSmallestInBST = (t, k) => p(a = [], t) | a[k-1]
p = (a, f) => {
    if (f[l]) p(a, f[l])
    a.push(f["value"])
    if (f[r]) p(a, f[r])
}

// Short hand
// p = (a, f) => f && (p(a, f[l]), a.push(f["value"]), p(a, f[r]))
