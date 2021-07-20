#include<bits/stdc++.h>
using namespace std;
  
class Hash
{
    int BUCKET;
    list<int> *table;
public:
    Hash(int V); 
    void insertItem(int x);
    void deleteItem(int key);
    int hashFunction(int x) {
        return (x % BUCKET);
    }
  
    void displayHash();
};
  
Hash::Hash(int b)
{
    this->BUCKET = b;
    table = new list<int>[BUCKET];
}
  
void Hash::insertItem(int key)
{
    int index = hashFunction(key);
    cout<<"KEY: "<<key<<" INDEX_INSER: "<<index<<endl;
    table[index].push_back(key); 
}
  
void Hash::deleteItem(int key)
{
  int index = hashFunction(key);
  cout<<"KEY: "<<key<<" INDEX_DELETE: "<<index<<endl;
  list <int> :: iterator i;
  for (i = table[index].begin();
           i != table[index].end(); i++) {
    if (*i == key)
      break;
  }
  if (i != table[index].end())
    table[index].erase(i);
}
void Hash::displayHash() {
  for (int i = 0; i < BUCKET; i++) {
    cout <<"["<<i<<"]";
    for (auto x : table[i])
      cout << " ==> " << x;
    cout << endl;
  }
} 
int main()
{
  int a[] = {13, 14, 15, 99, 88,66,77,12,55,22,10,11,9,6,5,3,33,4,44,7,8};
  int n = sizeof(a)/sizeof(a[0]);
  Hash h(3);   
  for (int i = 0; i < n; i++) 
    h.insertItem(a[i]);  
  //h.displayHash();
  //h.deleteItem(12);
  h.displayHash();
  
  return 0;
}