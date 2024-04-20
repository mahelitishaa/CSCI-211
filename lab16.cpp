#include <iostream>
using namespace std;
class HalalCart{
  private: 
    int ID;
    int platter;
    static int allPlatters;

  public: 
    HalalCart( int i, int p){
      if (i<=0||p<0){
        cout<< "Invalid ID/Platter ";
      }
      ID = i;
      platter = p;
      allPlatters += p;
    }
    void justSold(){
      platter++;
      allPlatters++;
    }
    int getSold(){
      return platter;
    }
    static int allSold() {
        return allPlatters;
    }
};
int HalalCart::allPlatters=0;

int main() {
  int n;
  HalalCart shah(111, 3);
  HalalCart halalguys(112, 10);
  HalalCart corner(113, 0);
  shah.justSold();
  cout << "Shah sold "<< shah.getSold( )<< " platters"<<endl;
  cout << "How many did the corner cart sell? ";
  cin >> n;
  for(int i = 0; i < n; i++){
  corner.justSold( );
  }
  cout << "total sold so far: "<< HalalCart::allSold( );
  return 0;
}