int duplicateNumber(int *arr, int size)
{
    //Write your code here
    int i=0,j=0;
        
        for(i=0;i<size;i++)
        {
            
            for(j=i+1; j<size ;j++)
            {
                if(arr[i]==arr[j])
                {
                    return arr[i];
                    
                }
            }
        }
    
     
}
