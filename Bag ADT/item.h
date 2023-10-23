class item {
  private:
    string title;
  public:

  void setTitle( string t ) { title = t; }  // fuction to name items
  string getTitle() { return title; }      // function to retrieve item name
  void show() {
   cout << "-------------------\n";
   cout << title << endl;
   }
};

