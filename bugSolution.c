int main() {
  int arr[5] = {1, 2, 3, 4, 5};
  // Avoid accessing memory beyond array bounds
  for (int i = 0; i < 5; i++) {
    printf("%d ", arr[i]);
  }
  printf("\n");

  return 0;
}