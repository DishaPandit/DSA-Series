#include<iostream>
using namespace std;

int main()
{
    int arr[5] = {1,2,3,4,5};
    char ch[6] = "Disha";

    //cout is implemented differently for integer and character arrays
    cout << arr <<endl; //prints address
    cout << ch <<endl;  //prints entire content

    char *c = &ch[0];
    cout << c <<endl;   //again prints entire character array instead of address of first element
   
    char temp = 'b';
    char *c2 = &temp;
    cout << c2 <<endl;  //prints character followed by garbage values until it gets a null character.

    /*

    Here, abcde gets allocated to temporary memory,
    then it gets allocated to ch variable
    use this way 

    char ch[5] = "abcde" ;  

    Here, abcde gets allocated to temporary memory
    and a pointer points to that memory
    it might be possible that while processing that pointer 
    it may point to some read only memory
    so we should avoid the below way of writing

    char c* = "abcde";
    
    */
   
    return 0;
}