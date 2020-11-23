#include <iostream>
template <typename T, int num = 5>
T add_num(T t) {
	return t + num;
}
int main() {
	int x = 3;
	std::cout << "x : " << add_num(0) << std::endl;
}/*	실습 1 : 수정전의 실습1 값은 8 이었습니다.	실습 1.1 : add_num(0)으로 넣어 최종값이 5가 나왔습니다.*/