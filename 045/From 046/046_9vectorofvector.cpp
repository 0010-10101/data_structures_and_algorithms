// #include<iostream>
// #include<vector>
// using namespace std;

// int main(){
//     vector<vector<int> > arr;
//     //Bahar wale vector ke andar vector<int> type ka data push hoga, 
//     //Andar wale vector ke andar <int> type ka data push hoga.

//     //below vectors declare kiye hai
//     vector<int> a{1,2,3};
//     vector<int> b{4,5,6};
//     vector<int> c{5,6,7};


//     //below vectors mai elements push kiya hai 
//     arr.push_back(a);
//     arr.push_back(b);
//     arr.push_back(c);

//     //printing ki baari 
//     for(int i=0;i<arr.size();i++){

//         //below thing works on in the case where number of columns same hai.
//         //below line mai... arr[0], arr[1], arr[2] kuch bhi use kr skte hai
//         for(int j=0;j<arr[0].size();j++){       
//             cout<<arr[i][j]<<" ";
//         }cout<<endl;
//     }

//     return 0;
// }


/*------------------------------------------------------*/




// //different type to define vector of vector.
// #include<iostream>
// #include<vector>
// using namespace std;
// int main(){
//     int row = 5;
//     int col = 5;


//     //difficult way to declar a vector of vector of int. 
//     vector<vector<int> > arr(row, vector<int>(col,0));
//     //arr -> array ka name hai, col jo hai woh inner vector ka size hai , 0 initialization ki value hai.




//     for(int i=0;i<arr.size();i++){
//         for(int j=0;j<arr[0].size();j++){
//             cout<<arr[i][j]<<" ";
//         }
//         cout<<endl;
//     }
// }

/*---------------------------------*/




#include<iostream>
#include<vector>
using namespace std;
int main(){
    int rows = 5;
    int cols = 5;
    vector<vector<int> > arr(rows ,vector<int> (5,-8));
    for(int i=0;i<arr.size();i++){
        for(int j=0;j<arr[0].size();j++){
            cout<<arr[i][j];
        }
        cout<<endl;
    }
}