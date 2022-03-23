// Copyright 2021 NNTU-CS
int BinNum(int *arr, int len, int value) {
  int l = 0, r = len - 1, res = 0;
  int mid = (r + l) / 2;
  



int countPairs1(int *arr, int len, int value) {
  int res = 0;
  for (int i = 0; i < len - 1; i++) {
    for (int j = i + 1; j < len; j++) {
      if (arr[i] + arr[j] == value) {
        res++;
      }
    }
  }
  if (res > 0) {
    return res;
  } else {
    return 0;
  }
}
          
}
int countPairs2(int *arr, int len, int value) {
  int res = 0;
  for (int i = 0; i < len - 1; i++) {
    if (arr[i] <= value) {
      for ( int j = len - 1; j > i  ; j--) {
        if (arr[i] + arr[j] == value) {
          res++;
        }
      }
    }
  }
  if (res = 0) {
    return 0;
  } else {
    return res;
  }
}
int countPairs3(int *arr, int len, int value) {
  int res = 0;
  for (int i = 0; i <= len - 1; i++) {
    if (arr[i] > value / 2) {
      break;
    }
    res = BinNum();
  
  return 0;
}
