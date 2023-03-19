// Copyright 2021 NNTU-CS

int cbinsearch(int *arr, int size, int value) {
  int lefty = 0; 
  int righty = size - 1; 
  int county = 0; 
  int middly = 0; 
  while (righty >= lefty) { 
    middly = (righty + lefty) / 2; 
    if (arr[middly] == value) { 
      county++; 
      int sered = middly - 1; 
      while (sered >= lefty && arr[sered] == value) { 
        county++; 
        sered--; 
      } 
      ser = middly + 1; 
      while (sered <= righty && arr[sered] == value) { 
        county++; 
        sered++; 
      } 
      break; 
    } else if (value < arr[middly]) { 
      righty = middly - 1; 
    } else { 
      lefty = middly + 1; 
    } 
  } 
  return county; 
}
