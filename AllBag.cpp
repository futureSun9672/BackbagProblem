/*完全背包问题*/
#include <iostream>
#include <vector>
#include <stdio.h>

using namespace std;

int main()
{
	int bagsize = 12;
	vector<int> M(13, 0);
	vector<int> weight = { 5,3,6,8,1 };
	vector<int> value = { 8,3,10,15,1 };
	for(unsigned int i=0;i < weight.size(); i++) // 循环物品i
	{ 
		for (unsigned int j = 1; j < M.size(); j++) // 循环背包，从1开始，0为j=0时的值
		{
			if(j>=weight[i]) M[j] = max(M[j], M[j - weight[i]] + value[i]); 
			//cout << M[j] << " ";
			printf("%d%t  ", M[j]);
		}		
		cout << "\n";
	}
	printf("此背包问题最终解：%d\n", M[M.size() - 1]);
	return 0;

}