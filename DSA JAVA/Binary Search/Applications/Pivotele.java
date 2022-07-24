// find the pivot element = minimum element of array using binary search
public class Pivotele {

    static int getPivot(int arr[], int size) {
        int start = 0;
        int end = size - 1;
        int mid = start + (end - start) / 2;

        while (start < end) {
            if (arr[0] <= arr[mid]) {
                start = mid + 1;
            } else {
                end = mid;
            }

            mid = start + (end - start) / 2;

        }
        return start;
    }

    public static void main(String[] args) {
        // int[] arr = { 3, 4, 5, 6, 1, 2 };
        int []arr = {4,5,6,1,2,3};
        // int []arr = {5,6,1,2,3,4};

        int pivot = getPivot(arr, 8);

        System.out.println("You pivot element at index " + pivot);
    }

}
