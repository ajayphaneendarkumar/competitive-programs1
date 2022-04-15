public class Bubblesort
{
    static void bubblesort(int[] arr)
    {
        int n=arr.length;
        int temp=0;
        for(int i=0;i<n-1;i++ )
        {
            for(int j=0;j<n-i-1;j++)
            {
                if(arr[j]>arr[j+1])
                {
                    temp=arr[j];
                    arr[j]=arr[j+1];
                    arr[j+1]=temp;
                }
            }
        }
    }
    public static void main(String args[])
    {
        int arr[]={3,47,88,77,66,5,4,1,9};
        System.out.println("Before sorting the array");
        for(int i=0;i<arr.length;i++)
        {
            System.out.println(arr[i]+"");
        }
        bubblesort(arr);
         System.out.println("After sorting the array");
        for(int i=0;i<arr.length;i++)
        {
            System.out.println(arr[i]+"");
        }
    }
}