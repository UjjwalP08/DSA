public class Insertion_sort {

    static void InsertionSort(int arr[], int size) {
        for (int i = 1; i < size; i++) {
            int temp = arr[i];
            int j = i - 1;

            while (j >= 0) {
                if (arr[j] > temp) {
                    // Shift the element
                    arr[j + 1] = arr[j];
                } else
                    break;

                j--;
            }

            arr[j + 1] = temp;
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

        InsertionSort(arr, size);

        printArray(arr, size);
    }

}
