/*
 * @lc app=leetcode.cn id=3 lang=c
 *
 * [3] 无重复字符的最长子串
 *
 * https://leetcode-cn.com/problems/longest-substring-without-repeating-characters/description/
 *
 * algorithms
 * Medium (33.64%)
 * Likes:    3434
 * Dislikes: 0
 * Total Accepted:    421.4K
 * Total Submissions: 1.3M
 * Testcase Example:  '"abcabcbb"'
 *
 * 给定一个字符串，请你找出其中不含有重复字符的 最长子串 的长度。
 * 
 * 示例 1:
 * 
 * 输入: "abcabcbb"
 * 输出: 3 
 * 解释: 因为无重复字符的最长子串是 "abc"，所以其长度为 3。
 * 
 * 
 * 示例 2:
 * 
 * 输入: "bbbbb"
 * 输出: 1
 * 解释: 因为无重复字符的最长子串是 "b"，所以其长度为 1。
 * 
 * 
 * 示例 3:
 * 
 * 输入: "pwwkew"
 * 输出: 3
 * 解释: 因为无重复字符的最长子串是 "wke"，所以其长度为 3。
 * 请注意，你的答案必须是 子串 的长度，"pwke" 是一个子序列，不是子串。
 * 
 * 
 */

// @lc code=start


int lengthOfLongestSubstring(char * s){
    int cnt = 0, max_len, j, start;
    int hash_flag[128] = {0};

    max_len = cnt;
    for (j = 0, start = 0; s[j] != '\0'; hash_flag[s[j]] = j + 1, ++j) {
        if (hash_flag[s[j]] > start) {
            max_len = (max_len > cnt) ? max_len : cnt;
            cnt = j - hash_flag[s[j]] + 1;
            start = hash_flag[s[j]];
            continue;
        }
        cnt++;
    }
    max_len = (max_len > cnt) ? max_len : cnt;
    return max_len;
}


// @lc code=end

