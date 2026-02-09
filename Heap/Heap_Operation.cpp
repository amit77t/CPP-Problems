#include<iostream>
#include<vector>
using namespace std;

class Heap{
 vector<int> vec;
public:

  void push(int val)
  {
        vec.push_back(val);

        int x=vec.size()-1;
        int parIdx=(x-1)/2;

        while(parIdx>=0 && vec[x]>vec[parIdx])
        {
            swap(vec[x], vec[parIdx]);
            x=parIdx;
            parIdx=(x-1)/2;
        }
  }
  void hepify(int i)
  {
    if(i>= vec.size())
    {
        return;
    }
    int l=2*i+1;
    int r= 2*i+2;

    int maxIdx=i;

    if(l<vec.size() && vec[l]> vec[maxIdx])
    {
        maxIdx=l;
    }
    if(r<vec.size() && vec[r]> vec[maxIdx])
    {
        maxIdx=r;
    }

    swap(vec[i], vec[maxIdx]);

    if(maxIdx!=i)
    {
        hepify(maxIdx);
    }
  }
  void pop()
  {  

    swap(vec[0], vec[vec.size()-1]);
    vec.pop_back();
    hepify(0);

  }

  int top()
  {
    return vec[0];
  }

  bool empty()
  {
    return vec.size()==0;
  }

   

    

};

int main()
{
   Heap heap;
   heap.push(87);
   heap.push(34);
    heap.push(5);
   heap.push(38);

   cout<<"Top :" <<heap.top()<<endl;
   while(!heap.empty())
   {
    cout<<"top : "<<heap.top()<<endl;
    heap.pop();
   }


   return 0;
}