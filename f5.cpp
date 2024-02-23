#include <stdio.h>
int getNum() {
    int x;
    printf("Enter integer: ");
    scanf("%d", &x);
    return x;
}
void modifyArrayValues(int arr[], int number_elements) {
    for (int i = 0; i < number_elements; ++i) {
        arr[i] = getNum();
    }
}
int maxArrayValue(int arr[], int number_elements) {
    int maximum_index = 0;

    for (int i = 1; i < number_elements; ++i) {
        if (arr[i] > arr[maximum_index]) {
            maximum_index = i;
        }
    }
    return maximum_index;
}
int main() {
    int Array[10];
    modifyArrayValues(Array, 10);
    int maximum_index = maxArrayValue(Array, 10);
    printf("The highest value is: %d\n", Array[maximum_index]);
    printf("Index of the highest value is: %d\n", maximum_index);

    return 0;
}