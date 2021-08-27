//In C++ STL, there is priority_queue that can directly be used to implement Max Heap. 
  priority_queue <int> pq;
  
  for(int i=0;i<n;i++)
  {
      for(int j=0;j<n;j++)
      {
         pq.push(mat[i][j]);
         
         if(pq.size()>k)
         {
             pq.pop();
         }
      }
  }
  
  return pq.top();
