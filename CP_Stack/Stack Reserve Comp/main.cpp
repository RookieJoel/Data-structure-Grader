#include <iostream>
#include "stack.h"
#include "student.h"

int main()
{
    std::ios_base::sync_with_stdio(false);std::cin.tie(0);

    int n1,n2,m1,m2;
    CP::stack<int> a,b;
    std::cin >> n1 >> n2;
    std::cin >> m1 >> m2;
    while(n1--) a.push(1);
    while(n2--) a.pop();
    while(m1--) b.push(1);
    while(m2--) b.pop();
    std::cout << "a.compare_reserve(b) = " << a.compare_reserve(b) << std::endl;
    std::cout << "b.compare_reserve(a) = " << b.compare_reserve(a) << std::endl;
    std::cout << "PASSWORD: 38940puyt;ohglanez;./swrh" << std::endl;
}
