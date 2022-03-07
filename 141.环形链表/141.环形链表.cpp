// 141.环形链表.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>

struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
public:
    bool hasCycle(ListNode* head) {
        if (head == nullptr || head->next == nullptr) return false;
        ListNode* fast = head;
        ListNode* slow = head;
        while (fast->next != nullptr && fast->next->next != nullptr)
        {
            fast = fast->next->next;
            slow = slow->next;
            if (fast == slow)
            {
                return true;
            }
        }
        return false;
    }
	bool hasCycle2(ListNode* head) {
		if (head == nullptr || head->next == nullptr) return false;
		ListNode* slow = head;
		ListNode* fast = head->next;
		while (fast != slow)
		{
			if (fast == nullptr || fast->next == nullptr) {
				return false;
			}
			fast = fast->next->next;
			slow = slow->next;
		}
		return false;
	}
};
int main()
{
	ListNode* a1 = new ListNode(1);
	ListNode* a2 = new ListNode(2);

	ListNode* a3 = new ListNode(3);
	ListNode* a4 = new ListNode(4);
	ListNode* a5 = new ListNode(5);

	

    a1->next = a2;
	a2->next = a3;
	a3->next = a4;
    a4->next = a5;
    a5->next = a3;
    Solution s;
   std::cout <<  s.hasCycle2(a1);
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
