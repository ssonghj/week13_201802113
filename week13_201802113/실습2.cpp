#include <iostream>
#include <string>

template<typename T> 
auto sum(T x) {
	return x;
}
template<typename T, typename...Args>
auto sum(T x, Args... args) {
	return x + sum(args...);
}
int main() {
	auto x = sum(42.5, 10, 11.1f);
	std::cout << x;
	getchar();
}

/* �ǽ� 2 ó���� ������ �߻��� ���� : ���� x�� ���ڰ� 3������ auto sum(T x, Args... args)���� 42.5�� 10������ �޾�����
* 11.1f �ϳ� ������ �� ó���� �� �ִ� template�� ������ �����Դϴ�. ���� auto sum(T x)�� ����� �־ ����� 63.6�� ����� ��µǾ����ϴ�.
*/