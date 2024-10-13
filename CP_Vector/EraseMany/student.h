template <typename T>
void CP::vector<T>::erase_many(const std::vector<int> &pos) {
    int k = 0;
    CP::vector<T> ans;
    for(int i =0;i<mSize;i++){
        if( k < pos.size() && i == pos[k]){
            k++;
        }else{
            ans.push_back(mData[i]);
        }
    }

    *this = ans;
}
