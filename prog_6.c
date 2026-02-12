#include <stdio.h>

#define MAX 100

void swap(int *a,int *b){
    int temp=*a;
    *a=*b;
    *b=temp;
}

void maxHeap(int arr[], int n, int i){
    int largest=i;
    int left=2*i+1;
    int right=2*i+2;

    if(left<n && arr[left]>arr[largest])
        largest=left;
    if(right<n && arr[right]>arr[largest])
        largest=right;

    if(largest!=i){
        swap(&arr[i], &arr[largest]);
        maxHeap(arr, n, largest);
    }
}
void minHeap(int arr[], int n, int i){
    int smallest=i;
    int left=2*i+1;
    int right=2*i+2;

    if(left<n && arr[left]<arr[smallest])
        smallest=left;
    if(right<n && arr[right]<arr[smallest])
        smallest=right;

    if(smallest!=i){
        swap(&arr[i], &arr[smallest]);
        minHeap(arr, n, smallest);
    }
}
void buildMaxHeap(int arr[], int n){
    for(int i=n/2-1; i>=0; i--)
        maxHeap(arr, n, i);
}
void buildMinHeap(int arr[], int n){
    for(int i=n/2-1; i>=0; i--)
        minHeap(arr, n, i);
}
void printHeap(int arr[], int n){
    for(int i=0;i<n;i++)
        printf("%d ", arr[i]);
    printf("\n");
}
int main(){
    int arr[MAX], n;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    printf("Enter elements: ");
    for(int i=0;i<n;i++)
        scanf("%d", &arr[i]);
    int maxHeap[MAX];
    for(int i=0;i<n;i++) maxHeap[i]=arr[i];
    buildMaxHeap(maxHeap, n);
    printf("Max-Heap: ");
    printHeap(maxHeap, n);
    int minHeap[MAX];
    for(int i=0;i<n;i++) minHeap[i]=arr[i];
    buildMinHeap(minHeap, n);
    printf("Min-Heap: ");
    printHeap(minHeap, n);

    return 0;
}
