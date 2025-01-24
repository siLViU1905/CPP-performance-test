#include "performance_test.h"

    float test_func(float a, float b)
{
	float f = 0.f;
	for (float i = 0.f; i < 1e6f; i += 1.f)
		f += i / (b + a);
	return f;
}

int main()
{
	std::cout << performance_test(test_func, 2.2f, 9.4f) << " ms\n";
}
