
void arrange(int *arr, int n)
{
    int left=0;
    int right=n-1;
    int k=1;
    while(left<=right){
        if(k%2==1)
        {
            arr[left]=k;
            k++;
            left++;
        }
        else
        {
            arr[right]=k;
            k++;
            right--;
        }
    }
}
