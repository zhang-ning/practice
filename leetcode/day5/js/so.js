/**
 * Definition for singly-linked list.
 * function ListNode(val, next) {
 *     this.val = (val===undefined ? 0 : val)
 *     this.next = (next===undefined ? null : next)
 * }
 */
/**
 * @param {ListNode} l1
 * @param {ListNode} l2
 * @return {ListNode}
 */
var addTwoNumbers = function(l1, l2) {
  var head, tail;
  var carry = 0;

  while (l1 || l2) {
    var n1 = 0,
      n2 = 0;

    if (l1) {
      n1 = l1.val;
      l1 = l1.next;
    }

    if (l2) {
      n2 = l2.val;
      l2 = l2.next;
    }

    var sum = n1 + n2 + carry;
    carry = parseInt(sum / 10);
    sum = parseInt(sum % 10);

    if (!head) {
      head = new ListNode(sum);
      tail = head;
    } else {
      tail.next = new ListNode(sum);
      tail = tail.next;
    }
  }

  if (carry > 0) {
    tail.next = new ListNode(carry);
  }

  return head;
};

function ListNode(val, next) {
  this.val = val === undefined ? 0 : val;
  this.next = next === undefined ? null : next;
}

var l1 = new ListNode(2, new ListNode(4, new ListNode(3)));
var l2 = new ListNode(5, new ListNode(6, new ListNode(4)));

var l3 = addTwoNumbers(l1, l2);
console.log(l3);
