// 206.反转链表.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>

 struct ListNode {
	int val;
	ListNode* next;
	ListNode() : val(0), next(nullptr) {}
	ListNode(int x) : val(x), next(nullptr) {}
	ListNode(int x, ListNode* next) : val(x), next(next) {}
	
};

class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode* cur = head;
        ListNode* pre = nullptr;
        ListNode* temp = nullptr;
        while (cur)
        {
            temp = cur->next;
            cur->next = pre;
            pre = cur;
            cur = temp;
        }
        return pre;
    }
    //遍历方法
    void printList(ListNode* pNode)
    {
		while (pNode)
		{
			std::cout << pNode->val << std::endl;
            pNode = pNode->next;
		}
    }
};
int main()
{
	
	ListNode* a5 = new ListNode(5);
    ListNode* a4 = new ListNode(4,a5);
	ListNode* a3 = new ListNode(3,a4);
	ListNode* a2 = new ListNode(2,a3);
	ListNode* a1 = new ListNode(1,a2);


    Solution s;
    s.printList(a1);
    
	s.printList(s.reverseList(a1));

	
   
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
