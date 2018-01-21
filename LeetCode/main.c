//
//  main.c
//  LeetCode
//
//  Created by lidaojian on 2018/1/2.
//  Copyright © 2018年 lidaojian. All rights reserved.
//

#include <stdio.h>
#include "leetCodeCommon.h"
#include "twoSum.h"
#include "addTwoNumbers.h"
#include "reverseInteger.h"
#include "integerToRoman.h"
#include "romanToInteger.h"
#include "longestCommonPrefix.h"
#include "validParentheses.h"
#include "mergeTwoSortedLists.h"
#include "longestSubstringWithoutRepeatingCharacters.h"
#include "removeDuplicatesfromSortedArray.h"
#include "implementstrStr.h"
#include "countAndSay.h"
#include "searchInsertPosition.h"
#include "maximumSubarray.h"
#include "plusOne.h"
#include "sqrtx.h"
#include "sameTree.h"
#include "maximumDepthOfBinaryTree.h"
#include "invertBinaryTree.h"
#include "pathSum.h"
#include "lowestCommonAncestorOfABinarySearchTree.h"
#include "lowestCommonAncestorOfABinaryTree.h"
#include "majorityElement.h"
#include "sumRootToLeafNumbers.h"

int main(int argc, const char * argv[]) {
    // insert code here...
   
    //  Two Sum
    int twoSum_nums[4] = {1, 7, 8, 8};
    int *twoSum_result = twoSum(twoSum_nums, 4, 9);
    printf("========= Two Sum ==========\n");
    printf("the result is:\n%d %d\n", twoSum_result[0], twoSum_result[1]);
    
    //  Add Two Numbers
    int addTwoNumbers_number1Array[3] = {5, 6, 7};
    int addTwoNumbers_number2Array[3] = {5, 6, 4};
    struct ListNode *addTwoNumbers_number1 = tailCreatList(addTwoNumbers_number1Array, 3);
    struct ListNode *addTwoNumbers_number2 = tailCreatList(addTwoNumbers_number2Array, 3);
    printf("========= Add Two Numbers ==========\n");
    printList(addTwoNumbers(addTwoNumbers_number1, addTwoNumbers_number2));
    
    //  Reverse Integer
    printf("========= Reverse Integer ==========\n");
    printf("%d\n", reverse(1534236469));
    printf("%d\n", reverse(-123));
    
    //  Integer to Roman
    printf("========= Integer to Roman ==========\n");
    printf("%s\n", intToRoman(1456));
    
    //   Roman to Integer
    printf("========= Roman to Integer ==========\n");
    printf("%d\n", romanToInt("MCDLVI"));
    
    //  Longest Common Prefix
    printf("========= Longest Common Prefix ==========\n");
    char *longestCommonPrefix_strs[2] = {"ca","a"};
    printf("%s\n", longestCommonPrefix(longestCommonPrefix_strs, 2));
    
    //   Valid Parentheses
    printf("========= Valid Parentheses ==========\n");
    printf("%d\n", isValid("{}[]{}{{[]}}"));
    printf("%d\n", isValid("{}[]{}{{[]}"));
    
    //  Merge Two Sorted Lists
    printf("========= Merge Two Sorted Lists ==========\n");
    int mergeTwoSortedLists_number1Array[2] = {1, 2};
    int mergeTwoSortedListss_number2Array[3] = {1, 3, 4};
    struct ListNode *mergeTwoSortedLists_number1 = tailCreatList(mergeTwoSortedLists_number1Array, 2);
    struct ListNode *mergeTwoSortedLists_number2 = tailCreatList(mergeTwoSortedListss_number2Array, 3);
    printList(mergeTwoLists(mergeTwoSortedLists_number1, mergeTwoSortedLists_number2));
    
    
    // Longest Substring Without Repeating Characters
    printf("======Longest Substring Without Repeating Characters===\n");
    printf("%d\n",lengthOfLongestSubstring("abcabcbb"));
    printf("%d\n",lengthOfLongestSubstring("bbbbb"));
    printf("%d\n",lengthOfLongestSubstring("pwwkew"));
    
    
    printf("%d\n",lengthOfLongestSubstring_method2(""));
    printf("%d\n",lengthOfLongestSubstring_method2("bbbbb"));
    printf("%d\n",lengthOfLongestSubstring_method2("pwwkew"));
    
    //  Remove Duplicates from Sorted Array
    printf("======Remove Duplicates from Sorted Array====\n");
    int removeDuplicates_numberArray[5] = {1, 2, 4, 5, 7};
    printf("%d\n",removeDuplicates(removeDuplicates_numberArray, 5));
    
    //  Implement strStr().
    printf("======Implement strStr()====\n");
    printf("%d\n",strStr("hello", "ll"));
    printf("%d\n",strStr("aaaaa", "bba"));
    printf("%d\n",strStr("aaabbaa", "bba"));
    printf("%d\n",strStr("", ""));
    printf("%d\n",strStr(NULL, ""));
    
    //  Count and Say
    printf("======Count and Say====\n");
    printf("%s\n", countAndSay(1));
    printf("%s\n", countAndSay(2));
    printf("%s\n", countAndSay(3));
    printf("%s\n", countAndSay(4));
    printf("%s\n", countAndSay(5));
    printf("%s\n", countAndSay(6));
    printf("%s\n", countAndSay(7));
    
    
    //   Search Insert Position
    printf("====== Search Insert Position====\n");
    int searchInsert_number1Array[4] = {1, 3, 5, 6};
    printf("%d\n", searchInsert(searchInsert_number1Array, 4, 5));
    int searchInsert_number2Array[4] = {1, 3, 5, 6};
    printf("%d\n", searchInsert(searchInsert_number2Array, 4, 2));
    int searchInsert_number3Array[4] = {1, 3, 5, 6};
    printf("%d\n", searchInsert(searchInsert_number3Array, 4, 7));
    int searchInsert_number4Array[4] = {1, 3, 5, 6};
    printf("%d\n", searchInsert(searchInsert_number4Array, 4, 0));
    
    //  Maximum Subarray
    printf("====== Maximum Subarray====\n");
    int maxSubArray_numberArray[9] = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
    int maxSubArray_number1Array[2] = {-2, 1};
    int maxSubArray_number2Array[1] = {-1};
    printf("%d\n", maxSubArray(maxSubArray_numberArray, 9));
    printf("%d\n", maxSubArray2(maxSubArray_numberArray, 9));
    printf("%d\n", maxSubArray(maxSubArray_number1Array, 2));
    printf("%d\n", maxSubArray2(maxSubArray_number1Array, 2));
    printf("%d\n", maxSubArray(maxSubArray_number2Array, 1));
    printf("%d\n", maxSubArray2(maxSubArray_number2Array, 1));
    
    //  Plus One
    printf("====== Plus One ====\n");
    int plusOne_numberArray[3] = {9, 9, 9};
    int plusOne_returnSize;
    int *plusOne_res = plusOne(plusOne_numberArray, 3, &plusOne_returnSize);
    for (int i = 0; i < plusOne_returnSize; i ++) {
         printf("%d ", plusOne_res[i]);
    }
    printf("\n");
    
    // Sqrt(x)
    printf("====== Sqrt(x) ====\n");
    printf("%d\n", mySqrt(4));
    printf("%d\n", mySqrt(8));
    printf("%d\n", mySqrt(9));
    printf("%d\n", mySqrt(5));
    printf("%d\n", mySqrt(0));
    printf("%d\n", mySqrt(1));
    printf("%d\n", mySqrt(2147483647));
    
    printf("%d\n", mySqrt_method2(4));
    printf("%d\n", mySqrt_method2(8));
    printf("%d\n", mySqrt_method2(9));
    printf("%d\n", mySqrt_method2(5));
    printf("%d\n", mySqrt_method2(0));
    printf("%d\n", mySqrt_method2(1));
    printf("%d\n", mySqrt_method2(2147483647));
    
    printf("%d\n", mySqrt_method3(4));
    printf("%d\n", mySqrt_method3(8));
    printf("%d\n", mySqrt_method3(9));
    printf("%d\n", mySqrt_method3(5));
    printf("%d\n", mySqrt_method3(0));
    printf("%d\n", mySqrt_method3(1));
    printf("%d\n", mySqrt_method3(2147483647));

    
//    //  Same Tree
//    printf("======  Same Tree ====\n");
//    struct TreeNode *isSameTree_T = createBinaryTree();
//    preOrderTraversalBinaryTree(isSameTree_T);
//    printf("\n");
//    inOrderTraversalBinaryTree(isSameTree_T);
//    printf("\n");
//    postOrderTraversalBinaryTree(isSameTree_T);
//    printf("\n");
//
//
//    struct TreeNode *isSameTree_T1 = createBinaryTree();
//    preOrderTraversalBinaryTree(isSameTree_T1);
//    printf("\n");
//
//    printf("%d\n", isSameTree(isSameTree_T, isSameTree_T1));
    
    //   Maximum Depth of Binary Tree
//    printf("======   Maximum Depth of Binary Tree ====\n");
//    struct TreeNode *maxDepth_T = createBinaryTree();
//    printf("%d\n", maxDepth(maxDepth_T));
    
    
    //    Invert a binary tree.
//    printf("======   Invert a binary tree. ====\n");
//    printf("input 421##3##76##9#换行\n");
//    struct TreeNode *invertBinaryTree_T = createBinaryTree();
//    preOrderTraversalBinaryTree(invertTree(invertBinaryTree_T));
//    printf("\n");
    
    // Path Sum
//    printf("======   Path Sum ====\n");
//    printf("input 421##3##76##9#换行\n");
//    struct TreeNode *pathSumBinaryTree_T = createBinaryTree();
//    printf("%d\n", hasPathSum(pathSumBinaryTree_T, 24));
    
    // Lowest Common Ancestor of a Binary Search Tree
    // 620##43##5##87##9#
//    printf("======   Lowest Common Ancestor of a Binary Search Tree ====\n");
//    struct TreeNode *sortBinaryRootTree_T = createBinaryTree();
//    preOrderTraversalBinaryTree(sortBinaryRootTree_T);
//    printf("\n");
//    struct TreeNode *sortBinary_lowestCommonAncestor = lowestCommonAncestor(sortBinaryRootTree_T, sortBinaryRootTree_T->left, sortBinaryRootTree_T->right);
//    preOrderTraversalBinaryTree(sortBinary_lowestCommonAncestor);
    
    // Lowest Common Ancestor of a Binary Tree
    // 356##27##4##10##8#
//    printf("======   Lowest Common Ancestor of a Binary Tree ====\n");
//    struct TreeNode *binaryRootTree_T = createBinaryTree();
//    preOrderTraversalBinaryTree(binaryRootTree_T);
//    printf("\n");
//    // 6 4     CommonAncestor   5
//    struct TreeNode *sortBinary_lowestCommonAncestor = lowestCommonAncestor2(binaryRootTree_T, binaryRootTree_T->left->left, binaryRootTree_T->left->right->right);
//    preOrderTraversalBinaryTree(sortBinary_lowestCommonAncestor);
    
    //  Majority Element
    printf("======  Majority Element ====\n");
    int majorityElement_array[3] = {3, 2, 3};
    int majorityElement_res = majorityElement(majorityElement_array, 3);
    printf("%d\n", majorityElement_res);
    majorityElement_res = majorityElement2(majorityElement_array, 3);
    printf("%d\n", majorityElement_res);
    
    int majorityElement_array2[5]  = {8, 9, 8, 9, 8};
    int majorityElement_res2 = majorityElement(majorityElement_array2, 5);
    printf("%d\n", majorityElement_res2);
    majorityElement_res2 = majorityElement2(majorityElement_array2, 5);
    printf("%d\n", majorityElement_res2);
    
    //  Sum Root to Leaf Numbers
    printf("======  Sum Root to Leaf Numbers ====\n");
    struct TreeNode *sumRootLeafNumbers_T = createBinaryTree();
    printf("sum: %d\n", sumNumbers(sumRootLeafNumbers_T));
    
    return 0;
}



