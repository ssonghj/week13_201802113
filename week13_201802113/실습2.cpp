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

/* 실습 2 처음에 에러가 발생한 이유 : 들어온 x의 인자가 3개여서 auto sum(T x, Args... args)에서 42.5와 10까지는 받았으나
* 11.1f 하나 남았을 때 처리할 수 있는 template이 없었기 때문입니다. 따라서 auto sum(T x)를 만들어 주어서 제대로 63.6이 제대로 출력되었습니다.
*/