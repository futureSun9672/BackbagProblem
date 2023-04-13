/*01背包问题*/
#include <iostream>
#include <vector>
#include <stdio.h>

using namespace std;

int main()
{
	int bagsize = 12;
	vector<int> M(bagsize + 1, 0);
	vector<int> weight = { 5,3,6,8,1 };
	vector<int> value = { 8,3,10,15,1 };
	for (unsigned int i = 0; i < weight.size(); i++) // 循环物品i
	{
		for (unsigned int j = bagsize ; j > 0; j--) // 循环背包，从1开始，0为j=0时的值，为防止覆盖，从后往前遍历
		{
			if (j >= weight[i]) M[j] = max(M[j], M[j - weight[i]] + value[i]);
			//cout << M[j] << " ";			
		}
		// 打印当前行
		for (unsigned int k = 1; k < M.size(); k++)
		{
			printf("%d  ", M[k]);
		}
		cout << endl;
	}

	printf("此背包问题最终解：%d\n", M[M.size() - 1]);
	return 0;

}