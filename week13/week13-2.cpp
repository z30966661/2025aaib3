/// week13-2.cpp 學習計畫 Linked List 第1題
///LeetCode 21. Merge Two Sorted Lists
class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        /// ListNode* ans = new ListNode(); // 錯誤的寫法 少了 {}
        ListNode* ans = new ListNode(999); /// 正確的寫法 旁個給指標
        ListNode* now = ans; /// 現在要用的位置, 拿 ans 的分身

        while (list1 != nullptr && list2 != nullptr) { /// 兩邊都不是空的, 才能比大小啦!!! 有東西可以加的話
            if (list1->val <= list2->val) { /// 比大小 左邊小, 那就從 list1
                now->next = list1; /// 串到現在的尾巴
                list1 = list1->next; /// 用完了, 換下一筆
                now = now->next; /// 分身 要處理下一筆
            } else { /// 不夠小, 要放有值的 list2
                now->next = list2;
                list2 = list2->next; /// 用完了, 換下一筆
                now = now->next; /// 分身 要處理下一筆
            }
        }
        /// 收尾啦
        if (list1 != nullptr) now->next = list1; /// 收尾啦
        if (list2 != nullptr) now->next = list2; /// 收尾啦

        return ans->next;
    }
};
