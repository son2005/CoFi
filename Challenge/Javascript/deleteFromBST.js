// https://app.codesignal.com/challenge/LwEk8aFCfZf733Z67

// //
// // Binary trees are already defined with this interface:
// // function Tree(x) {
// //   this.value = x;
// //   this.left = null;
// //   this.right = null;
// // }
removeNode = (node, value) => {
    if(!node) return null
    if (value < node.value) {
        node.left = removeNode(node.left, value)
        return node
    }
    if (value > node.value) {
        node.right = removeNode(node.right, value)
        return node
    }
    if(!node.right && !node.left) return null
    if(node.left) {
        if (!node.left.right) {
            node.left.right = node.right
            return node.left
        }
        temp = findRightMostNodeLeft(node.left)
        node.value = temp.right.value
        temp.right = temp.right.left
        return node

        // var aux = findRightMostNodeLeft(node.left)
        // node.value = aux.value
        // node.left = removeNode(node.left, aux.value)
        // return node
    }
    return node.right
}

findRightMostNodeLeft = node => {
    if(node.right.right == null) return node
    else return findRightMostNodeLeft(node.right)
}

// createNode = value => 1 && {
//     "value": value,
//     "left": null,
//     "right": null
// }
function deleteFromBST(t, queries) {
    // test = createNode(5)
    // test.left = createNode(2)
    // test.left.left = createNode(1)

    // test.right = createNode(7)
    // test.right.left = createNode(6)
    // test.right.right = createNode(8)

    // // return test

    // test = removeNode(test, 5)
    // return test

    for(e of queries) t = removeNode(t, e)
    return t
}
