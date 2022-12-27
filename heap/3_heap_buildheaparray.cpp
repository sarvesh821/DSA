#include <iostream>
#include <vector>
using namespace std;
class heap
{
    vector<int>arr;
    bool minheap;
    bool compare(int a,int b){
      if(minheap){
        return a<b;
      }
       return a>b;
    }
    void heapify(int idx){
        int left=2*idx;
        int right=(2*idx)+1;
        int minidx=idx;
        int lastidx=arr.size()-1;
        if(idx<lastidx && compare())

    }

public:
    heap(int default_size = 10 ,bool type = true)
    {
        arr.reserve(default_size);
        arr.push_back(-1);
        minheap = type;
    }
    void buildheap(vector<int> &arr){
         for(int i=arr.size()/2;i>=0;i--){
            heapify(i);
         }
    }
};

int main()
{
    heap h;
   for(int i=0;i<8;i++){
    v
   }
    int n=8;

    h.buildheap(arr);
    return 0;
}