int main() {
  int arr[5] = {1, 2, 3, 4, 5};
  int *ptr = arr + 5; // Pointer points to the memory location just after the array
  *ptr = 6; // Writing to memory location beyond array bounds

  return 0;
}