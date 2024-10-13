#include<bits/stdc++.h>

namespace Jo{
    template<typename T>
    class stack{
        protected :
            std::vector<T> v;
        public: 
            stack() : v(){};
            bool empty() const{
                return v.empty();
            }
            size_t size() const{
                return v.size();
            }
            const T& top() const{
                return v.back();
            }
            void push(const T& element){
                v.push_back(element);
            }
            void pop() { 
                v.pop_back();
            }
    };
} 

