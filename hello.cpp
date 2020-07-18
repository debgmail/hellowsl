#include "hello.h"

using namespace std;
int main(){
	std::cout<<"hello WSL\n";
	vector<string> msg {"Hello", "C++", "World", "from", "VS Code", "and the C++ extension!"};

   for (const string& word : msg)
   {
      cout << word << " ";
   }
   cout << endl;
   cout << "enter number of days you want to print: ";
   int nodays;
   cin>>nodays;
   simplemath(nodays);

	return 0;


}

void simplemath(int no_days)
{
	cout << "Rishita you entered: "<< no_days <<endl;

}

