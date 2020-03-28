# Singly-linked lists are already defined with this interface:
# class ListNode(object):
#   def __init__(self, x):
#     self.value = x
#     self.next = None
#
def reverseNodesInKGroups(l, k):
    i = 1
    a = []
    b = []
    while l:
        b.append(l.value)
        if not i % k:
            b.reverse()
            a = [*a, *b]
            b = []
        l = l.next
        i += 1
    return [*a, *b] if b else a
