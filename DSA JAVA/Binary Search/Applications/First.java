// find the first occurence and last occurence of element in array using binary search
public class First {

    static int FirstOccurence(int arr[], int size, int element) {
        int start = 0;
        int end = size - 1;
        int mid = start + (end - start) / 2;
        int firstoccurence = 0;

        while (start < end) 
        {
            if (arr[mid] == element)
             {
                firstoccurence = mid;
                end = mid - 1;
            } 
            else if (element > arr[mid]) 
            {
                start = mid + 1;
            }
            else if (element < arr[mid])
            {
                end = mid - 1;
            }

            mid = start + (end-start)/2;
        }
        return firstoccurence;
    }

    static int LastOccurence(int arr[], int size, int element) {
        int start = 0;
        int end = size - 1;
        int mid = start + (end - start) / 2;
        int lastoccurence = 0;

        while (start <= end) 
        {
            if (arr[mid] == element)
             {
                lastoccurence = mid;
                start = mid + 1;
            } 
            else if (element > arr[mid]) 
            {
                start = mid + 1;
            }
            else if (element < arr[mid])
            {
                end = mid - 1;
            }

            mid = start + (end-start)/2;
        }
        return lastoccurence;
    }

    public static void main(String[] args) {

        int[] arr = { 1, 3, 3, 3, 3, 3, 78, 89 };
        
        int firstoccurence = FirstOccurence(arr, 8, 3);
        
        int lastoccurence = LastOccurence(arr, 8, 3);

        System.out.println("First Occurence of 3 at index "+firstoccurence);
        
        System.out.println("Last Occurence of 3 at index "+lastoccurence);
    }
}