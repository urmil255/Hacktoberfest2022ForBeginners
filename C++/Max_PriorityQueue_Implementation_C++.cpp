#include<vector>
#include<bits/stdc++.h>
class PriorityQueue {
    // Declare the data members here
	vector<int> pq;
    
   public:
    PriorityQueue() {
        // Implement the constructor here
    }

    /**************** Implement all the public functions here ***************/

    void insert(int x) {
        // Implement the insert() function here
        pq.push_back(x);
        
        int ci = pq.size()-1;
     while(ci>0){   
        int pi = (ci-1)/2;
        
        if(pq[ci] <= pq[pi]){
            break;
        }
        else{
            int temp = pq[ci];
            pq[ci] = pq[pi];
            pq[pi] = temp;
        }
        ci = pi;
    }
    }

    int getMax() {
        // Implement the getMax() function here
        if(!isEmpty())
            return pq[0];
        return INT_MIN;
    }

    int removeMax() {
        // Implement the removeMax() function here
        if(isEmpty())
			return INT_MIN;
        
        int ans = pq[0];
        pq[0] = pq[pq.size()-1];
        pq.pop_back();
        int pi = 0;
      while(pi<pq.size()){  
        int li=2*pi+1;
        int ri=2*pi+2;
        
        int maxc=pi;
          
        if(li>=pq.size()){
            break;
        }
         else if(ri == pq.size()){
             maxc = li;
         }
          
          else{
              if(pq[li] > pq[ri]){
                  maxc = li;
              }
              else{
                  maxc = ri;
              }
          }
            
        if(pq[maxc] > pq[pi]){
            int temp = pq[maxc];
            pq[maxc] = pq[pi];
            pq[pi] = temp;
        }
        
        pi = maxc;
     }
    
     return ans;
    }

    int getSize() { 
        // Implement the getSize() function here
        return pq.size();
    }

    bool isEmpty() {
        // Implement the isEmpty() function here
        return pq.size()==0;
    }
};
