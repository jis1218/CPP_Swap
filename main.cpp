#include <iostream>

using namespace std;

void swap(int &x, int &y){
    int z = x;
    x = y;
    y = z;
}

void sort(int a[], int n){
    int i, j;

    for(i=0; i<n-1; i++){
        for(j = i+1; j<n; j++){
            if(a[i] > a[j]){
                swap(a[i], a[j]);
            }
        }
    }
}

int main()
{
    int a, b, i;
    int arr[5] = {1, 3, 9, 4, 2};

    scanf("%d %d", &a, &b);
    swap(a, b);
    printf("%d %d \n", a, b);

    sort(arr, 5);

    return 0;
}
