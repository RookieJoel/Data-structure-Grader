#include<bits/stdc++.h>

namespace jo{
    template<typename T1,typename T2>
    class pair{
        public:
            T1 first;
            T2 second;
        
        bool operator==(const pair<T1,T2> &other){
            return (this->first == other.first && this->second == other.second);
        }

        bool operator<(const pair<T1,T2> &other) const{
            return ((first < other.first) || (first == other.first && second < other.second));
        }
    };
}