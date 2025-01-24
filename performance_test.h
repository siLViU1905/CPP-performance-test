#include <chrono>
#include <iostream>

template <typename _ty, typename... Args>
size_t performance_test(_ty (*func)(Args...), Args &&...args)
{
    auto start = std::chrono::high_resolution_clock::now();
    func(std::forward<Args>(args)...);
    return std::chrono::duration_cast<std::chrono::milliseconds>(std::chrono::high_resolution_clock::now() - start).count();
}