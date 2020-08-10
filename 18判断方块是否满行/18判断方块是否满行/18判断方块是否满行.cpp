// 18判断方块是否满行.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>

int main()
{
	void Del_Fullline(struct Tetris* tetris)
	{
		int k, del_rows = 0;
		for (j = FrameY + Frame_height - 1;j >= Frame + 1;j--)
		{
			k = 0;
			for (i = FrameX + 2;i < FrameX + 2 * Frame_width - 2;i += 2)
			{
				if (a[i][j] == 1)
				{
					k++;
					if (k == Frame_width - 2)
					{
						for (k = FrameX + 2;K < FrameX + 2 * Frame_width - 2;k += 2)
						{
							a[k][j] = 0;
							gotoxy(k, j)
								printf(" ");
						}
						for (k = j - 1;k > FrameY;k--)
						{
							for (i = FrameX + 2;i < FrameX + 2 * Frame_width - 2;i += 2)
							{
								if (a[i][k] == 1)
								{
									a[i][k] == 0;
									gotoxy(i, k);
									printf(" ");
									a[i][k + 1] == 1;
									gotoxy(i, k + 1);
									printf("■");
								}
							}
						}
						j++;
						del_rows++;
					}
				}
			}
		}
		tetris->score += 100 * del_rows;
		if (del_rows > o && (tetris->score % 1000 == 0 || tetris->score / 100 > tetris->level - 1))
		{
			tetris->speed -= 20;
			tetris->level++_;
		}

 }
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
