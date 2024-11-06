#ifndef __STUDENT_H_
#define __STUDENT_H_

#include <algorithm>

template <typename T>
typename CP::list<T>::iterator CP::list<T>::reverse(iterator a, iterator b) {
  // กรณีลิสต์ว่างหรือ a == b ให้คืนค่า a โดยไม่ทำงานใด ๆ
  if (mSize == 0 || a == b) return a;

  // บันทึกตำแหน่งเดิมของ `a.ptr`
  node* original_position = a.ptr;

  // เริ่มต้น pointer ที่ตำแหน่งเริ่มต้นและสิ้นสุดของส่วนที่ต้องการ reverse
  node* left = a.ptr;
  node* right = b.ptr->prev;

  // ทำการสลับข้อมูลของ left และ right จนกว่าทั้งคู่จะพบกัน
  while (left != right && left->prev != right) {
    std::swap(left->data, right->data);
    left = left->next;
    right = right->prev;
  }

  // หลังจาก reverse เสร็จ ค้นหาตำแหน่งใหม่ของข้อมูลเดิมที่ `a` ชี้
  node* new_position = mHeader->next;
  while (new_position != mHeader) {
    if (new_position->data == original_position->data) break;
    new_position = new_position->next;
  }

  // คืนค่า iterator ที่ชี้ไปยังตำแหน่งใหม่ของข้อมูลเดิมที่ `a` ชี้ก่อนการ reverse
  return iterator(new_position);
}

#endif
