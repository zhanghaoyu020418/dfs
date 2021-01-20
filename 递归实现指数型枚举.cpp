#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>

using namespace std;

int n;
const int N = 15;
int str[N];       //״̬�����ѡ������1�������ѡ����2,0 �ǲ���ѡ��


void dfs(int u)
{
	if (u > n)
	{
		for (int i = 1; i <= n; i++)
		{
			if (str[i] == 1)
				printf("%d ", i);
		}
		printf("\n");
		return;
	}

	str[u] = 1;//ѡ��
	dfs(u + 1);//�������
	str[u] = 0;//�ظ��ֳ�

	str[u] = 2;//��ѡ
	dfs(u + 1);
	str[u] = 0;

}



int main()
{
	scanf("%d", &n);

	dfs(1);
	return 0;
}