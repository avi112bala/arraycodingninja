void sortZeroesAndOne(int *input, int size)
{
    //Write your code here
    int low= 0;
   int high= size-1;
   int mid=0;
   while(mid<=high){
      if(input[mid]==0){
         swap(input[mid],input[low]);
         mid++;
         low++;
      }
      if(input[mid]==1){
         mid++;
      }
      if(input[mid]==2){
         swap(input[mid],input[high]);
         high--;
      }
   }
    
}

