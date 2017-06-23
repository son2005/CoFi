/*
You're given 2 huge integers represented by linked lists. Each linked list element is a number from 0 to 9999 that represents a number with exactly 4 digits. The represented number might have leading zeros. Your task is to add up these huge integers and return the result in the same format.

Example

For a = [9876, 5432, 1999] and b = [1, 8001], the output should be
addTwoHugeNumbers(a, b) = [9876, 5434, 0].

Explanation: 987654321999 + 18001 = 987654340000.

For a = [123, 4, 5] and b = [100, 100, 100], the output should be
addTwoHugeNumbers(a, b) = [223, 104, 105].

Explanation: 12300040005 + 10001000100 = 22301040105.

Input/Output

[time limit] 500ms (cpp)
[input] linkedlist.integer a

The first number, without its leading zeros.

Guaranteed constraints:
0 ≤ a size ≤ 104,
0 ≤ element value ≤ 9999.

[input] linkedlist.integer b

The second number, without its leading zeros.

Guaranteed constraints:
0 ≤ b size ≤ 104,
0 ≤ element value ≤ 9999.

[output] linkedlist.integer

The result of adding a and b together, returned without leading zeros in the same format.
*/
// Definition for singly-linked list:
// template<typename T>
// struct ListNode {
//   ListNode(const T &v) : value(v), next(nullptr) {}
//   T value;
//   ListNode *next;
// };
//
ListNode<int> * reverseL(ListNode<int> *a, int &size) {
    ListNode<int> *cur = a, *prev = NULL, *next = NULL;
    while(cur) {
        next = cur->next;
        cur->next = prev;
        prev = cur;
        cur = next;
        size++;
    }
    return prev;
}
ListNode<int> * addTwoHugeNumbers(ListNode<int> * a, ListNode<int> * b) {
    int maxNumber = 9999;
    int sizeA = 0, sizeB = 0;
    ListNode<int> *aR = reverseL(a, sizeA);
    ListNode<int> *bR = reverseL(b, sizeB);
    ListNode<int> *tmpA = aR, *tmpB = bR;
    ListNode<int> *tmpC;
    if(sizeA > sizeB) {
        tmpC = aR;
    }
    else tmpC = bR;
    ListNode<int> *tmp = tmpC;

    int carry = 0;
    while(tmpA || tmpB) {
        int valueA = 0, valueB = 0;

        if(tmpA) {
            valueA = tmpA->value;
            tmpA = tmpA->next;
        }

        if(tmpB) {
            valueB = tmpB->value;
            tmpB = tmpB->next;
        }
        // cout << "==========" << endl;
        // cout << valueA << endl;
        // cout << valueB << endl;
        // cout << carry << endl;
        int sum = valueA + valueB + carry;
        // cout << sum << endl;
        if(sum > maxNumber) {
            tmp->value = sum - maxNumber - 1;
            carry = 1;
        }
        else {
            tmp->value = sum;
            carry = 0;
        }
        if(tmp->next == nullptr && carry == 1) {
            ListNode<int> *l = new ListNode<int>();
            l->value = 1;
            tmp->next = l;
            break;
        }
        tmp = tmp->next;
    }


//     tmp = tmpC;
//     while(tmpA) {
//         cout << tmp->value << " ";
//         tmp = tmp->next;

//     }
//     cout << endl;
    return reverseL(tmpC, sizeA);
}
