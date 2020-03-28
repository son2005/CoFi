// https://app.codesignal.com/challenge/p6Ro6CZYq5j3vS7DY
// Singly-linked lists are already defined with this interface:
// function ListNode(x) {
//   this.value = x;
//   this.next = null;
// }
//
reverseNodesInKGroups = (l, k) => {
    i = 1
    a = []
    b = []
    while(l) {
        b.push(l.value)
        if(i++ % k == 0) {
            a = [...a, ...b.reverse()]
            b = []
        }
        l = l.next
    }
    return b[0] ? [...a, ...b] : a
}
