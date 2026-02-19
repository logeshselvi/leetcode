int uniquePaths(int m, int n) {
   int total = m + n - 2;
   int r=m-1;

   if(r>total-r){
    r=total-r;
   }
   int result =1;

   for(int i=1;i<=r;i++){
     result=result*(long long)(total - r + i)/i;
   }
   return (int)result;
    
}