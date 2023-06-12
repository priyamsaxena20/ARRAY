int findUnique(int *arr, int size)
{
    //Write your code here
    int sum=0;
    for (int i = 0; i < size; i++) {
      sum = sum ^ arr[i];
    }
    return sum;
}
// for(int i=0;i<arr.size();i++){
//         int c=0;
//         for(int j=0;j<arr.size();j++){
//             if(arr[i]=arr[j])
//             c++;
//         }
//         return arr[c];
//     }
