import java.util.*;

public class Search{

    static int BinarySearch(int arr[],int size,int element)
    {
        int start = 0;
        int end = size - 1;
        int mid = start + (end - start)/2;

        while(start <= end)
        {
            if(arr[mid] == element)
            {
                return mid;
            }

            if(element < arr[mid])
            {
                    end = mid - 1;
            }
            else
            // element > arr[mid]
            {
                start = mid + 1;
            }
            // update mid
            mid = start + (end-start)/2;
        }

        return -1;
    }

    public static void main(String[] args) {
    
        int []arr = {1, 3, 12, 34, 55, 67, 78, 89};

        int index = BinarySearch(arr, 8, 55);

        System.out.println("55 is present at index "+index);
    
    }
}