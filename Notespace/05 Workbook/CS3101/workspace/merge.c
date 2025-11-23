#include <stdio.h>

void merge(int *lst1, int *lst2, int len1, int len2, int *flist);
void MergeSort(int *inlist, int *outlist, int len);

int main() {
  int lst[] = {5, 8, 6, 3, 4, 78, 0, 2, 4, 1, 7};
  int len = sizeof(lst) / sizeof(lst[0]); /* sizeof(array) only works when the
                                       array is defined and its not just a */
  int sorted_list[len];
  MergeSort(lst, sorted_list, len);

  // printing final array
  for (int i = 0; i < len; i++) {
    printf("%d ", sorted_list[i]);
  }
  printf("\n");

  return 0;
}

void merge(int *lst1, int *lst2, int len1, int len2, int *flist) {
  int i = 0, j = 0, k = 0;

  while (i < len1 && j < len2) {
    if (lst1[i] < lst2[j]) {
      flist[k++] = lst1[i++];
    } else {
      flist[k++] = lst2[j++];
    }
  }
  while (i < len1) {
    flist[k++] = lst1[i++];
  }
  while (j < len2) {
    flist[k++] = lst2[j++];
  }
}

void MergeSort(int *inlist, int *outlist, int len) {
  // conditioning part (base case)
  if (len <= 1) {
    outlist[0] = inlist[0];
    return;
  }
  // recursion part
  int part1[len / 2], part2[len - (len / 2)], sorted1[len / 2],
      sorted2[len - (len / 2)];
  // partitioning the input list
  for (int i = 0; i < len; i++) {
    if (i < len / 2)
      part1[i] = inlist[i];
    else
      part2[i - len / 2] = inlist[i];
  }
  MergeSort(part1, sorted1, len / 2);
  MergeSort(part2, sorted2, len - len / 2);
  // Dont merge until sorted
  // Merging the parts and storing the output
  merge(sorted1, sorted2, len / 2, len - (len / 2), outlist);
}
