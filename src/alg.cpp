// Copyright 2021 NNTU-CS
int countPairs1(int *arr, int len, int value) {
  int res = 0;
  for (int i = 0; i < len - 1; i++) {
    for (int j = i + 1; j < len; j++) {
      if (arr[i] + arr[j] == value) {
        res++;
      }
    }
  }
  return res;
}
int countPairs2(int *arr, int len, int value) {
  int res = 0;
  for (int i = 0; i < len - 1; i++) {
    if (arr[i] <= value) {
      for (int j = len - 1; j > i  ; j--) {
        if (arr[i] + arr[j] == value) {
          res++;
        }
      }
    }
  }
  return res;
}
int countPairs3(int *arr, int len, int value) {
  int res = 0;
  for (int i = 0; i <= len - 1; i++) {
    int l = i + 1, r = len, part = value - arr[i];
    while (l < r) {
      int mid = (r + l) / 2;
      if (arr[mid] < part) {
        l = mid + 1;
      } else {
        r = mid;
      }
    }
    while (arr[l] == part) {
      res++;
      l++;
    }
  }
  return res;
}
