int pairSum(int *input, int size, int x)
{

   
int count=0;
	for(int i=0;i<size-1;i++)
    {
        for(int j=i+1;j<size;j++)
        {
            if(input[i]+input[j]==x)
                count++;
        }
    }
    return count;

}
