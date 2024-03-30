//===-- cmplx/heapsort/heapsort.h - Heapsort Implementation ----------===//
///
/// \file
/// This file contains the implementation of the Heapsort algorithm.
///
//===-----------------------------------------------------------------===//

#pragma once
#include <cmplx/heapsort/heap.h>
#include <iostream>

namespace cmplx::heapsort {
void printHello();
template<typename T>
void sort(T *Arr, int Length) {
  auto *Heap = new cmplx::heapsort::MaxHeap(Arr, Length);
  Heap->heapSort();
}
}// namespace cmplx::heapsort