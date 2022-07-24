public class Selection_sort {

    static void SelectionSort(int arr[], int size) {
        for (int i = 0; i < size - 1; i++) {
            int minindex = i;

            for (int j = i + 1; j < size; j++) {
                if (arr[minindex] > arr[j])
                    minindex = j;
            }

            // swap the elements
            int temp = arr[i];
            arr[i] = arr[minindex];
            arr[minindex] = temp;

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

        SelectionSort(arr, size);

        printArray(arr, size);
    }
}
