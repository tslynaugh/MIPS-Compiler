#include <stdio.h>
#include <math.h>

    int low;
    int mid;
    int high;
    int temp;
    int count;
    
    read(count);
    while (count > 0) {
	read(low, mid, high);
        if (low > mid) {
            temp = low;
            low = mid;
            mid = temp;
        }
        if (low > high) {
            temp = low;
            low = high;
            high = temp;
        }
        if (mid > high) {
            temp = mid;
            mid = high;
            high = temp;
        }
        print(low, mid, high);
        count = count - 1;
    }
