/*01��������*/
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
	for (unsigned int i = 0; i < weight.size(); i++) // ѭ����Ʒi
	{
		for (unsigned int j = bagsize ; j > 0; j--) // ѭ����������1��ʼ��0Ϊj=0ʱ��ֵ��Ϊ��ֹ���ǣ��Ӻ���ǰ����
		{
			if (j >= weight[i]) M[j] = max(M[j], M[j - weight[i]] + value[i]);
			//cout << M[j] << " ";			
		}
		// ��ӡ��ǰ��
		for (unsigned int k = 1; k < M.size(); k++)
		{
			printf("%d  ", M[k]);
		}
		cout << endl;
	}

	printf("�˱����������ս⣺%d\n", M[M.size() - 1]);
	return 0;

}