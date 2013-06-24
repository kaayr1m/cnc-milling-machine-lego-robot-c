#include <iostream>
#include <fstream>
#include <cmath>
#include <iomanip>
#include <cstdlib>

using namespace std;

int main()
{
    ifstream fin ("mill.txt");
    if (!fin)
    {
             cout << "File not found" << endl;
             cin.get();
             return EXIT_FAILURE;
    }
    
    ofstream fout ("coordOutput.txt");
    
    cout << "Arranging array" << endl;
    
    string useless;
    fin >> useless >> useless >> useless >> useless;
    string dummy;
    int realvalue;
    
          for (int i=0; i<52; i++)
           {  
              fout << "{" ;
              for (int j=0; j<51; j++)
              {
                  fin >> dummy >> dummy >> realvalue >> dummy;
                  fout << ((-1)*realvalue)+600 << ", ";
              }
              fin >> dummy >> dummy >> realvalue >> dummy;
              fout << ((-1)*realvalue)+600;
              
              fout << "}, " << endl;
          }   
          
    cout << "Array Done" << endl;
    return 0;
    
}
