int findUnique(int * arr, int size){


 int i=0,j=0;
        
        for(i=0;i<size;i++)
        {
            bool found = false;
            for(j=0; j<size ;j++)
            {
                if(arr[i]==arr[j] && j!=i)
                {
                    found  = true;
                    break;
                }
            }
            if(found == false)
                return arr[i];
        }
}
