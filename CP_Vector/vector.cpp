#include<bits/stdc++.h>

namespace Jo{
    template <typename T>
    class vector{
        protected: 
            T *mData;
            size_t mSize,mCap;

        public: 
            //default constructor
            vector(){
                int cap = 1;
                mData = new T[cap]();
                mCap = cap;
                mSize = 0;
            // สร้าง vector เปล่าๆเอาไว้ ให้มีเริ่มต้น 1 ช่อง
            }

            //constructor with initial size
            vector(size_t cap){
                mData = new T[cap]();
                mCap = cap;
                mSize = cap;
            // สร้าง array ตามที่ user สั่งมาว่าให้มีขนาดเท่าไหร่
            }

            //destructor
            ~vector(){
                delete [] mData; //จองไว้ตอนสร้าง เสร็จแล้วก็คืนให้ด้วย
            }

            //ขยายช่อง เผื่อไม่พอ 
            void expand(size_t capacity){
                T *arr = new T[capacity](); //จอง array ใหม่ให้มีขนาดเท่ากับที่ ensure มา
                //copy ข้อมูลเดิมจากอันเก่า มาอันใหม่
                for(size_t i=0;i<mSize;i++){
                    arr[i] = mData[i];
                }

                //ลบ array เดิม
                delete [] mData;

                //ให้ mData ชี้ไปยัง array ใหม่ที่พึ่งสร้าง แล้วปรับขนาด mCap ให้เท่ากับ capacity
                mData = arr;
                mCap = capacity;
            }

            //เช็คว่าที่เต็มมั้ย ก่อนจะ push_back หรือ เพิ่ม element
            void ensureCapacity(size_t capacity){
                if(capacity > mCap){
                    //เบิ้ลให้ 2 เท่าเลย
                    size_t s = (capacity > 2*mCap) ? capacity : 2*mCap;
                    expand(s);
                }
            }


            // ----------------Access Data-----------------------

            T& at(int index){
                if(index < 0 || index >= mSize){
                    throw std::out_of_range("Index out of range");
                }
                else return mData[index];
            }

            //return by ref ของที่ส่งไปจะเป็น**ตัวแปร**ตัวนี้เลย ไม่ได้ copy มา
            T& operator[](int index){
                return mData[index];
            } 
            // ----------------Modifier-----------------------
            
            // push_back 

            void push_back(const T& element){
                ensureCapacity(mSize+1);
                mData[mSize++] = element;
                // เอา element ใส่ใน mData ช่องที่ mSize แล้วค่อยเพิ่มขนาด mSize
            }

            //pop_back 

            void pop_back(){
                mSize--;
                //ยังไม่เรียก destructor แค่เลื่อนไปไม่เอาช่องสุดท้าย ถ้ามีเพิ่มก็จะเขียนทับอันเก่าเอง
            }

            //-----------------------copy constructor-------------------

            bool empty(){
                return mSize == 0;
            }

            size_t size(){
                return mSize;
            }
            size_t capacity(){
                return mCap;
            }

            // เอาไว้ตอนของทุกอย่างยังว่างๆอยู่
            vector(const vector<T> &v){
                mData = new T[v.capacity()]();
                mCap = v.capacity();
                mSize = v.size();
                for(auto i=0;i<v.size();i++){
                    mData[i] = v[i];
                }
            }

            //----------------------copy assigment operator----------------

            //เอาไว้ตอนมีข้อมูลอยู่แล้ว แล้วโดนจับให้เท่ากับตัวอื่น
            // vector<T>& operator=(vector<T> &o){
            //     //ตรวจดูก่อน เผื่อมันเท่ากันอยู่แล้ว จะได้ไม่ต้องทำซ้ำ แล้วก็เผื่อเขาสั่ง v=v ลบตัวเองทิ้ง เจ๊งเลย
            //     if(mData != o.mData){
            //         delete [] mData; //ลบของเก่าทิ้งก่อน
            //         //สร้างของเราใหม่
            //         mData = new T[o.capacity()]();
            //         mCap = o.capacity();
            //         mSize = o.size();
            //         for(auto i=0;i<o.size();i++){
            //         mData[i] = o[i];
            //     }
            //     }
            // }

            //หรือใช้ copy-and-swap idiom ก็ได้นะ แบบด้านล่าง recommended *** ง่าย ไม่ใช่ไร 55555
                                        //ตั้งใจ้ pass by value ให้ก็อปค่ามาเลย ไม่ใช้อันเดิม จะ copy construc
            vector<T> &operator=(vector<T> o ){
                using std::swap;
                swap(this->mSize,o->mSize);
                swap(this->mCap,o->mCap);
                swap(this->mData,o->mData);
                return *this;
            } 

            //-------------------------iterator---------------------------

            typedef T* iterator; //กำหนดให้ T คือ type ที่ pointer ชี้ไปยัง type T

            iterator begin(){
                return &mData[0];
            }

            iterator end(){
                return begin()+mSize;
            }
            //-------------------------insert & erase---------------------------

            iterator insert(iterator it,const T& val){
                size_t pos = it - begin(); // หา index ที่จะ insert
                ensureCapacity(mSize + 1); //เผื่อ insert แล้วที่ไม่พอ
                for(auto i=mSize;i>pos;i--){
                    mData[i] = mData[i-1]; //copy เพื่อเลื่อนไป 1 ตำแหน่ง **จากหลังไปหน้า**
                }
                mData[pos] = val; //เขียนทับข้อมูลเก่าช่องที่จะ insert
                mSize++;
                return begin()+pos;
            }

            void erase(iterator it){
                while((it+1)!=end()){
                    *it = *(it+1);
                    it++;
                }
                mSize--;
            }

    };
}

int main(){
    Jo::vector<int> v(100);
    for (int i = 0; i < 100; i++)
    v[i] = i;
    auto it = v.begin() + 42;
    for (int i = 10; i < 30; i++)
    v.erase(v.begin());

    std::cout << *it;
}
