public class Bubble_sort {

    static void BubbleSort(int arr[], int size) {
        boolean check = false;

        for (int i = 1; i < size; i++) {
            for (int j = 0; j < size - i; j++) {
                if (arr[j] > arr[j + 1]) {
                    // Swap Variables
                    int temp = arr[j];
                    arr[j] = arr[j + 1];
                    arr[j + 1] = temp;

                    check = true;
                }

                if (check == false)
                    break;
            }
        }
    }

    static void printArray(int arr[], int size) {

        for (int i = 0; i < size; i++) {
            System.out.print(arr[i] + " ");
        }
    }

    public static void main(String[] args) {
        int[] arr = { 6, 5, 4, 3, 2, 1 };
        int size = arr.length;

        BubbleSort(arr, size);

        printArray(arr, size);
    }
}
