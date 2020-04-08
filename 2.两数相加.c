/*
 * @lc app=leetcode.cn id=2 lang=c
 *
 * [2] 两数相加
 *
 * https://leetcode-cn.com/problems/add-two-numbers/description/
 *
 * algorithms
 * Medium (37.05%)
 * Likes:    4153
 * Dislikes: 0
 * Total Accepted:    381.5K
 * Total Submissions: 1M
 * Testcase Example:  '[2,4,3]\n[5,6,4]'
 *
 * 给出两个 非空 的链表用来表示两个非负的整数。其中，它们各自的位数是按照 逆序 的方式存储的，并且它们的每个节点只能存储 一位 数字。
 * 
 * 如果，我们将这两个数相加起来，则会返回一个新的链表来表示它们的和。
 * 
 * 您可以假设除了数字 0 之外，这两个数都不会以 0 开头。
 * 
 * 示例：
 * 
 * 输入：(2 -> 4 -> 3) + (5 -> 6 -> 4)
 * 输出：7 -> 0 -> 8
 * 原因：342 + 465 = 807
 * 
 * 
 */

// @lc code=start
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */


struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2){
    int flag = 0, a = 0, b = 0, tmp;
    struct ListNode *sum = NULL, *head;
    
     while (l1 || l2 || flag) {
        if (sum) {
            sum->next = (struct ListNode *)malloc(sizeof(struct ListNode));
            sum = sum->next;
        } else {
            sum = (struct ListNode *)malloc(sizeof(struct ListNode));
            head = sum;
        }
        
        if (l1) {
            a = l1->val;
            l1 = l1->next; 
        } else {
            a = 0;
        }
        if (l2) {
            b = l2->val;
            l2 = l2->next; 
        } else {
            b = 0;
        }
        tmp = a + b + flag;
        sum->val = tmp % 10;
        tmp > 9 ? (flag = 1): (flag = 0);
        sum->next = NULL;
    }
    return head;
}


// @lc code=end

