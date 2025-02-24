#include <iostream>
#include <cstdlib>
using namespace std;
#include <string.h>

class binary
{
public:
  int binnum[20];
  char bin[20];
  int size;
  int inpdeci;

  void getnum();
  void chkbin();
  void onescomp();
  int todeci();
  void refreshnum(); // after we get complement the value gets change , this fun will change the changed value to its orig input value to do more opertaion
  void chartoint();
  int tooctal();
  int decitobin();
  int octtobin();
};
// To get the input binary number
void binary ::getnum()
{
  cout << "\n\t\t\t\tEnter the Binary number : ";
  cin >> bin;
  size = strlen(bin);
  chkbin();
}

// To check it is Binary  or not
void binary ::chkbin()
{
  for (int i = 0; i < size; i++)
  {
    if (bin[i] != '1' && bin[i] != '0')
    {
      cout << "\t\t\t\tsorry ! It is not a Binary Number ! \n"
           << endl;
      ;
      getnum();
    }
  }
}

// To calculate the Ones compliment
/**
 * The above function performs a one's complement operation on a binary number.
 */
void binary ::onescomp()
{

  for (int i = 0; i < size; i++)
  {
    if (bin[i] == '0')
    {
      bin[i] = '1';
    }
    else
    {
      bin[i] = '0';
    }
  }
  cout << "\t\tOne's compliment of the entered binary number is : ";
  cout << bin;
  refreshnum();
}
void binary ::refreshnum()
{
  for (int i = 0; i < size; i++)
  {
    if (bin[i] == '0')
    {
      bin[i] = '1';
    }
    else
    {
      bin[i] = '0';
    }
  }
}
/**
 * The function converts a binary string into an integer array, where each element represents a binary
 * digit.
 */
void binary ::chartoint()
{
  for (int i = 0; i < size; i++)
  {
    if (bin[i] == '0')
    {
      binnum[i] = 0;
    }
    else
    {
      binnum[i] = 1;
    }
  }
}

// To convert Binary number to decimal number
// actually we have to do some aritmhetic work to convert it in decimal so we first first convert the char input to int data type
int binary ::todeci()
{
  chartoint();

  int decinum = binnum[0] * 2 + binnum[1];
  if (size == 1)
  {
    // cout<<"\t\t\tIt is both binary and decimal number\n";
    return decinum;
  }
  for (int i = 1; i < size; i++)
  {
    if (i == size - 1)
    {
      //  cout<<"\n\t\tDecimal form of " <<bin<<" is : "<<decinum;
      return decinum;
    }
    else
    {
      decinum = decinum * 2 + binnum[i + 1];
    }
  }
  return decinum;
}
// to convert decimal to binary
int binary ::decitobin()
{
  int inpdeci;
  cout << "\t\t\t\tEnter a Decimal Number : ";
  cin >> inpdeci;
  int x = inpdeci;
  int outbin = 0;
  int i = 1;
  while (x != 0)
  {
    outbin = outbin + (x % 2) * i;
    x = x / 2;
    i = i * 10;
  }
  cout << "\t\t\t\tBinary number of " << inpdeci << " is : " << outbin;
  cout << "\n_________________________________________________________________________________________\n";
}

int binary ::tooctal()
{
  // we convertd binary to decimal
  int deci = todeci();
  // cout<<x;
  // now we convert decimal to octal
  int octal = 0, i = 1;
  while (deci != 0)
  {
    octal = octal + (deci % 8) * i;
    deci = deci / 8;
    i = i * 10;
  }
  return octal;
}
int binary ::octtobin()
{
}

int main()
{
  binary a;
  cout << "_________________________________________________________________________________________\n\n";
  cout << "\t\tOPERATIONS ON BINARY , DECIMAL & OCTAL NUMBER\n";
  cout << "__________________________________________________________________________________________\n\n";
  cout << "\t\t\t\t\tTASK LIST\n\n";
  cout << "\t1. To Calculate the Ones's compliment of the Binary Number\n";
  cout << "\t2. To Convert the Binary Number into Decimal Number\n";
  cout << "\t3. To Convert the Decimal Number into Binary Number\n";
  cout << "\t4. To Convert the Binary Number into Octal Number\n";
  cout << "\t5. To Convert Binary Number to both Decimal and Octal Number\n";
  cout << "\t6. To Exit\n";

  cout << "_____________________________________________________________________________________________\n";
  int k = 0;
  while (k != 1)  //whenever the exist code is enterd k will be incremented so that loop ends
  {
    int x;
    cout << "\nEnter the task code to perform : ";
    cin >> x;
    switch (x)
    {
    case 1:
      a.getnum();
      a.onescomp();
      cout << "\n__________________________________________________________________________________________\n";
      break;

    case 2:
      a.getnum();
      //  a.todeci();
      cout << "\n\t\t\t\tDecimal form of " << a.bin << " is : " << a.todeci();
      cout << "\n__________________________________________________________________________________________\n";
      break;

    case 3:
      a.decitobin();
      //  cout<<"\n\t\tBinary number of "<<a.inpdeci<<" is"<<a.decitobin();
      break;

    case 4:
      a.getnum();
      // a.tooctal();
      cout << "\n\t\t\t\tOctal number of " << a.bin << " is : " << a.tooctal();
      cout << "\n_________________________________________________________________________________________\n";
      break;

    case 5:
      a.getnum();
      a.onescomp();
      cout << "\n\t\tDecimal form of " << a.bin << " is : " << a.todeci();
      cout << "\n\t\tOctal number of " << a.bin << " is : " << a.tooctal();

      cout << "\n__________________________________________________________________________________________\n";
      break;

    case 6:
      k++;
      system("cls");
      cout << "\t\t\t\t\t THANKS TO VISIT ";
      break;

    default:
      cout << "!! No such Task code Exist !!";
    }
  }
}