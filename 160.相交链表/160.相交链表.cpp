﻿// 160.相交链表.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>


 struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};
 
class Solution {
public:
    ListNode* getIntersectionNode(ListNode* headA, ListNode* headB) {
        if (headA == nullptr || headB == nullptr)
            return nullptr;
        ListNode* listA = headA;
        ListNode* listB = headB;
        while (listA != listB)
        {
            listA = listA == nullptr ? headB : listA->next;
            listB = listB == nullptr ? headA : listB->next;
        }
        return listA;//不相交就是nullptr
    }
};
int main()
{
	ListNode* a1 = new ListNode(1);
	ListNode* a2 = new ListNode(2);

	ListNode* b1 = new ListNode(3);
	ListNode* b2 = new ListNode(4);
	ListNode* b3 = new ListNode(5);

	ListNode* c1 = new ListNode(6);
	ListNode* c2 = new ListNode(7);
	ListNode* c3 = new ListNode(8);

    a1->next = a2;
    a2->next = c1; //相交c1
    c1->next = c2;
    c2->next = c3;
    b1->next = b2;
    b2->next = b3;
    b3->next = c1; //相交c1

    Solution s;
    ListNode* res = s.getIntersectionNode(a1, b1);
    std::cout << res->val;
}

// 运行程序: Ctrl + F5 或调试 >“开始执行(不调试)”菜单
// 调试程序: F5 或调试 >“开始调试”菜单

// 入门使用技巧: 
//   1. 使用解决方案资源管理器窗口添加/管理文件
//   2. 使用团队资源管理器窗口连接到源代码管理
//   3. 使用输出窗口查看生成输出和其他消息
//   4. 使用错误列表窗口查看错误
//   5. 转到“项目”>“添加新项”以创建新的代码文件，或转到“项目”>“添加现有项”以将现有代码文件添加到项目
//   6. 将来，若要再次打开此项目，请转到“文件”>“打开”>“项目”并选择 .sln 文件
