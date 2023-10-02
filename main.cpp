#include <stdio.h>

template <typename Type>
Type Min(Type a, Type b) {
	if (static_cast<Type>(a) < static_cast<Type>(b)) {
		return static_cast<Type>(a);
	}
	else {
		return static_cast<Type>(b);
	}
}
template<>
char Min<char>(char a, char b) {
	printf("数字以外は代入できません\n");
	return 0;
}

int main() {
	printf("%d\n",Min<int>(114, 113));
	printf("%f\n", Min<float>(114.0f, 113.0f));
	printf("%lf\n", Min<double>(114, 113));
	printf("%f\n", Min<char>(114, 113));

	return 0;
}
