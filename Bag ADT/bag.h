class Bag {
  public:
    Bag() { n=0; } // default constructor
    bool add(string t);
    void display();
    void remove(string tar);
    bool isEmpty() { (n == 0); }
    int getSize() { return n; }
    bool clear() { (n=0); return (n==0); }
    bool contains(string anItem);
    int  getFrequencyOf(string anItem);

  private:
    int find(string tar);
    item groceries[50];  //array of objects
    int n;  // item count
};

bool Bag::add(string t) {
  if (n < 50) {
    groceries[n].setTitle(t);
    n++;
  return true;
}
 else {
    cout << "Bag is full! Item not added\n";
  }
}

void Bag::display() {
  for (int i=0; i<n; i++)
    groceries[i].show();
}

void Bag::remove(string tar) {
  int pos; //position of match
  pos = find(tar);
  if (pos >= 0) {
    groceries[pos] = groceries[n-1];
    n--;
    cout << "Book removed\n";
  }
  else
    cout << "Book not removed\n";
}

int Bag::find(string tar) {
  int i=0;
  while ((i < n) && (groceries[i].getTitle() != tar)) i++;
  if (i==n) i =-1;
  return i;
}

bool Bag::contains(string anItem) {
  for(int i=0; i<n; i++){
  if (anItem == groceries[i].getTitle()) {
    return true;
  }
}
  return false;
}

int Bag::getFrequencyOf(string anItem) {
  int freq=0;
  for(int i=0; i<n; i++) {
    if (anItem == groceries[i].getTitle())
      freq++;
    }
  return freq;
}
