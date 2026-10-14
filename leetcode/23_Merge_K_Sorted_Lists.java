public class ListNode {
    int val;
    ListNode next;
    ListNode() {}
    ListNode(int val) { this.val = val; }
    ListNode(int val, ListNode next) { this.val = val; this.next = next; }
}

class Solution {
    public ListNode mergetwolist(ListNode list1, ListNode list2){
        if(list1 == null)return list2;
        if(list2 == null)return list1;
        if(list1.val > list2.val){
            list2.next = mergetwolist(list1, list2.next);
            return list2;
        }
        else{
            list1.next = mergetwolist(list1.next, list2);
            return list1;
        }
    }
    
    public ListNode mergebreak(ListNode[]lists, int left, int right){
        if(left == right) return lists[left];
        int mid = (left+right)>>1;
        ListNode l1 = mergebreak(lists, left, mid);
        ListNode l2 = mergebreak(lists, mid+1, right);
        return mergetwolist(l1, l2);
    }

    public ListNode mergeKLists(ListNode[] lists) {
        if(lists.length == 0) return null;
        return mergebreak(lists, 0, lists.length-1);
    }
}

public class Main{
    public static void main(String[] args) {
        ListNode l1 = new ListNode(1, new ListNode(4, new ListNode(5)));
        ListNode l2 = new ListNode(1, new ListNode(3, new ListNode(4)));
        ListNode l3 = new ListNode(2, new ListNode(6));
        ListNode[] lists = {l1, l2, l3};

        Solution solution = new Solution();
        ListNode mergedList = solution.mergeKLists(lists);

        // Print the merged list
        while (mergedList != null) {
            System.out.print(mergedList.val + " ");
            mergedList = mergedList.next;
        }
    }
}