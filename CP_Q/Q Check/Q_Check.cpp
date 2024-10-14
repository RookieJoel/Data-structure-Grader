#include <iostream>

using namespace std;

int main(){
    int n, mFront, mSize, mCap, last, correction, Ans;
    cin >> n;
    for (int i = 0; i < n; i++){
        cin >> mFront >> mSize >> mCap >> last >> correction;
        if (mFront < mCap &&
            mCap >= mSize &&
            last < mCap &&
            (mFront + mSize) % mCap == last) {cout << "OK\n"; continue;}

        if (correction == 0) {cout << "WRONG\n"; continue;}

        if (correction == 1){
            Ans = (last + mCap - mSize) % mCap;
        }

        if (correction == 2){
            Ans = (last + mCap - mFront) % mCap;
        }

        if (correction == 3){
            Ans = (mFront < last)? mSize + mFront + 1: mFront - last + mSize;
        }

        if (correction == 4){
            Ans = (mFront + mSize) % mCap;
        }

        cout << "WRONG " << Ans << "\n";
    }
}
