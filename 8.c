*****
 ***
  *


void nStarTriangle(int n) {
    // Write your code here.


for(int i=0; i<n; i++){

//space
for(int j=0; j<i; j++){
cout<<" ";
 }

 for (int j = 0; j < 2 * n - (2 * i + 1); j++) {
cout << "*";
 }
 // space
 for (int j = 0; j < i; j++)
cout << " ";
}
}
