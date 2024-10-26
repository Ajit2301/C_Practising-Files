#include<stdio.h>
int main() {
    int a[]={1,2,3,5,6,4,3,2,6,5,7};
    int n = sizeof(a)/sizeof(a[0]); // Get the size of the array
printf("\n value%d:",n);
printf("\n value%d:",sizeof(a));
printf("\n value%d:",sizeof(a[0]));
int arr[1]={0};

    for(int i = 0; i < n; i++) {
        for(int j = i + 1; j < n; j++) {
            if(a[i] == a[j]) {
                printf("\n Duplicate value %d found ", a[i]);
                arr[0]=a[i];
                printf("\n Duplicate value array %d found ", arr[0]);


            }

        }



    }

    return 0;
}
