#include<stdio.h>
#include<stdlib.h>
#include<time.h>

long long comparisons=0, swaps=0;

void bubbleSort(int a[], int n){
    int i,j,temp;
    for(i=0;i<n-1;i++){
        for(j=0;j<n-i-1;j++){
            comparisons++;
            if(a[j]>a[j+1]){
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
                swaps++;
            }
        }
    }
}

void selectionSort(int a[], int n){
    int i,j,min,temp;
    for(i=0;i<n-1;i++){
        min=i;
        for(j=i+1;j<n;j++){
            comparisons++;
            if(a[j]<a[min])
                min=j;
        }
        if(min!=i){
            temp=a[i];
            a[i]=a[min];
            a[min]=temp;
            swaps++;
        }
    }
}

void insertionSort(int a[], int n){
    int i,j,key;
    for(i=1;i<n;i++){
        key=a[i];
        j=i-1;
        while(j>=0){
            comparisons++;
            if(a[j]>key){
                a[j+1]=a[j];
                swaps++;
                j--;
            }else
                break;
        }
        a[j+1]=key;
    }
}

void merge(int a[], int l, int m, int r){
    int i,j,k;
    int n1=m-l+1;
    int n2=r-m;

    int L[n1], R[n2];

    for(i=0;i<n1;i++)
        L[i]=a[l+i];
    for(j=0;j<n2;j++)
        R[j]=a[m+1+j];

    i=0; j=0; k=l;

    while(i<n1 && j<n2){
        comparisons++;
        if(L[i]<=R[j]){
            a[k]=L[i];
            i++;
        }else{
            a[k]=R[j];
            j++;
        }
        k++;
    }

    while(i<n1){
        a[k]=L[i];
        i++; k++;
    }

    while(j<n2){
        a[k]=R[j];
        j++; k++;
    }
}

void mergeSort(int a[], int l, int r){
    if(l<r){
        int m=l+(r-l)/2;
        mergeSort(a, l, m);
        mergeSort(a, m+1, r);
        merge(a, l, m, r);
    }
}

void printArray(int a[], int n){
    int i;
    for(i=0;i<n;i++)
        printf("%d ", a[i]);
    printf("\n");
}

int main(){
    int n,i,choice;
    srand(time(0));

    printf("Enter number of elements N: ");
    scanf("%d", &n);

    int arr[n], original[n];

    for(i=0;i<n;i++){
        arr[i]=rand()%1000+1;
        original[i]=arr[i];
    }

    printf("\nNumbers before sorting:\n");
    printArray(arr, n);

    printf("\nChoose Sorting Algorithm:\n");
    printf("1. Bubble Sort\n2. Selection Sort\n3. Insertion Sort\n4. Merge Sort\n");
    printf("Enter choice: ");
    scanf("%d", &choice);

    comparisons=0; swaps=0;

    switch(choice){
        case 1: bubbleSort(arr, n); break;
        case 2: selectionSort(arr, n); break;
        case 3: insertionSort(arr, n); break;
        case 4: mergeSort(arr, 0, n-1); break;
        default: printf("Invalid choice\n"); return 0;
    }

    printf("\nNumbers after sorting:\n");
    printArray(arr, n);

    printf("\nTotal Comparisons=%lld\n", comparisons);

    if(choice!=4)
        printf("Total Swaps=%lld\n", swaps);
    else
        printf("Total Swaps=Not Applicable\n");

    return 0;
}
