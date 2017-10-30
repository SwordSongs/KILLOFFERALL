#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int min(int n, int m) {
	return n < m ? n : m;
}

int main() {
	int n, m, price;
	cin >> n >> m;     //��Ʒ��Ŀ��n���ͻ���Ŀ��m
	vector<int> viPrice;

	for (int i = 0; i < m; ++i) {
		cin >> price;
		viPrice.push_back(price);
	}

	sort(viPrice.begin(),viPrice.end());  //����

	int index, sum, result;
	int max = 0;

	for (index = 0; index < m; ++index) {
		sum = viPrice[index] * min(n, m  - index);    //limitation of products.
		if (max < sum) {
			max = sum;
			result = index;
		}
	}

	cout << "��������ۼ�Ϊ�� " << viPrice[result] << endl;

	system("pause");
	return 0;
}