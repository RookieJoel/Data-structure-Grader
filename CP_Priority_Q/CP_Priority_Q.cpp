#include<bits/stdc++.h>

#define pq CP::priority_queue<T>;

using namespace CP{
    template <typename T,typename Comp = std::less<T>>
    class priority_queue {
        protected: 
            T *mData;
            size_t mCap;
            size_t mSize;
            // same as vector

            Comp mLess;
            void expand(size_t capacity){

            }

            void fixUp(size_t idx){

            }

            void fixDown(size_t idx){

            } 

        public: 
        //---------------Constructor---------------//
        priority_queue(priority_queue<T,Comp> &a) : 
            mData(new T[a.mCap]()), mCap(a.mCap) , mSize(a.mSize), mLess(a.mLess) {
                for(int i =0;i<a.mCap;i++){
                    mData[i] = a.mData[i];
                }
            }
        priority_queue(const Comp& c = Comp()) : 
            mData(new T[1]()), mCap(1) ,mSize(0), mLess(c) {}
        ~priority_queue(){
            delete [] mData;
        }

        priority_queue<T,Comp>& operator=()

    }
}