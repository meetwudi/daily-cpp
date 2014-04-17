#ifndef BUBBLE_SORTER_H
#define BUBBLE_SORTER_H

class BubbleSorter
{
public:
  static void sort(int*, int, bool (*)(int, int));
private:
  static void swap(int*, int*);
};

#endif