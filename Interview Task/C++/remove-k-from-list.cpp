/*
Note: Try to solve this task in O(n) time using O(1) additional space, where n is the number of elements in the list, since this is what you'll be asked to do during an interview.

Given a singly linked list of integers l and a non-negative integer k, remove all elements from list l that have a value equal to k.

Example

For l = [3, 1, 2, 3, 4, 5] and k = 3, the output should be
removeKFromList(l, k) = [1, 2, 4, 5];
For l = [1, 2, 3, 4, 5, 6, 7] and k = 10, the output should be
removeKFromList(l, k) = [1, 2, 3, 4, 5, 6, 7].
Input/Output

[time limit] 500ms (cpp)
[input] linkedlist.integer l

A singly linked list of integers.

Guaranteed constraints:
0 ≤ list size ≤ 105,
-1000 ≤ element value ≤ 1000.

[input] integer k

A non-negative integer.

Guaranteed constraints:
-1000 ≤ k ≤ 1000.

[output] linkedlist.integer

Return l with all the values equal to k removed.
*/
// Definition for singly-linked list:
// template<typename T>
// struct ListNode {
//   ListNode(const T &v) : value(v), next(nullptr) {}
//   T value;
//   ListNode *next;
// };
//
ListNode<int> * removeKFromList(ListNode<int> * l, int k) {
    ListNode<int> *tmp = l;
    ListNode<int> *tmpPrev = NULL;
    while(tmp) {
        if(tmp->value == k) {
            // Head null
            if(tmp == l && !tmpPrev) {
                tmp = tmp->next;
                delete l;
                l = tmp;
            }
            else {
                tmpPrev->next = tmp->next;
                delete tmp;
                tmp = tmpPrev->next;
            }
            continue;
        }
        tmpPrev = tmp;
        tmp = tmp->next;
    }
    return l;
}
