void changeArray(int *p, unsigned int n) {
  int i;
  for(i=0;i<n;i++) p[i] = i;
}

int main() {
  int arr[4] = {0, 0, 0, 0};
  changeArray(arr,4);
  for(i=0;i<n;i++) printf("arr[%d]=%d\n",i,arr[i]);
  return 0;
}
