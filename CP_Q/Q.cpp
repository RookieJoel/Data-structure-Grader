#include<bits/stdc++.h>

namespace jo{
    template<typename T>
    class queue{
        protected: 
            T *mData;
            size_t mSize,mCap,mFront;

            void expand(size_t capacity){
                T* arr = new T[capacity]();
                for(auto i= 0;i<mSize;i++){
                    arr[i] = mData[(mFront+i)%mCap];
                }

                delete [] mData;

                mData = arr;
                mCap = capacity;
                mFront = 0; //ชี้ไปตำแหน่งแรก
            }
            
            void ensureCap(size_t capacity){
                if(capacity > mCap){
                    size_t s = 2*mCap;
                    expand(s);
                }
            }
        public: 
            queue(){
                int cap = 1;
                mData = new T[cap]();
                mCap = cap;
                mSize = 0;
                mFront = 0;
            }
            queue(size_t cap){
                mData = new T[cap]();
                mCap = cap;
                mSize = cap;
                mFront = 0;
            }

            //copy construc

            queue(const queue<T>& a) : mData(new T[a.mCap]()), mCap(a.mCap),
                                        mSize(a.mSize),mFront(a.mFront){
                for(auto i=0;i<a.mCap;i++){ //ต้องใช้ถึง mCap เพราะเราไม่รู้ว่าข้อมูลอยู่ตรงไหนบ้าง
                    mData[i] = a.mData[i];
                }
            }

            ~queue(){
                delete [] mData;
            }

            //copy assignment op
            queue<T>& operator=(queue<T> o){
                using std::swap;
                swap(this->mSize,o->mSize);
                swap(this->mCap,o->mCap);
                swap(this->mData,o->mData);
                swap(this->mFront,o->mFront);
                return *this;
            } 

            bool empty(){
                return mSize == 0;
            }

            size_t size(){
                return mSize;
            }
            size_t capacity(){
                return mCap;
            }
            
            const T& front() const{
                return mData[mFront];
            }

            const T& back() const{
                return mData[(mFront+mSize -1)%mCap];
            }

            void pop()  {
                mFront = (mFront+1)%mCap;
                mSize--;
            }

            void push(const T& val){
                ensureCap(mSize+1);
                mData[(mFront+mSize)%mCap] = val;
                mSize++;
            }

    };
}

int main(){
    jo::queue<int> q;
    
    std::cout << q.back();
}