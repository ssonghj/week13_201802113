#include <iostream>
template <typename T, int num = 5>
T add_num(T t) {
	return t + num;
}
int main() {
	int x = 3;
	std::cout << "x : " << add_num(0) << std::endl;
}/*	�ǽ� 1 : �������� �ǽ�1 ���� 8 �̾����ϴ�.	�ǽ� 1.1 : add_num(0)���� �־� �������� 5�� ���Խ��ϴ�.*/