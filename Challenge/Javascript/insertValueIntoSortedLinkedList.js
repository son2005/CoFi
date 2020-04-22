// https://app.codesignal.com/challenge/XDFFwxLCs52YeJb9H
// Singly-linked lists are already defined with this interface:
// function ListNode(x) {
//   this.value = x;
//   this.next = null;
// }
//
m = 1e10
insertValueIntoSortedLinkedList = (l, value)  => {
    if(!l) return [value]
    if(value < l.value) return [value, ...l.toJSON()]
    res = [l.value]
    while(l = l.next) {
        if(value < l.value) {
            res.push(value)
            value = m
        }
        res.push(l.value)
    }
    return value != m ? [...res, value] : res
}
