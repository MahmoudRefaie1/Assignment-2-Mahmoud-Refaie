//Mahmoud Refaie 900221164
#include "Class.h"

int CenterX(point* C, int n){
int sumX;
for (int i=0; i<n; i++)
 sumX=sumX +C[i].getX();
 
 int Cenx= sumX/n;
 return Cenx;
}

int CenterY(point* C, int n){
int sumY;
for (int i=0; i<n; i++)
 sumY= sumY + C[i].getY();
 
 int Ceny= sumY/n;
 return Ceny;
}

void Closest_Clus (point* A, point* B, point point, float na, float nb ){
  
    int Da = sqrt(pow((CenterX(A, na)-point.getX()),2)+pow((CenterY(A, na)-point.getY()),2));
    int Db = sqrt(pow((CenterX(B, nb)-point.getX()),2)+pow((CenterY(B,nb)-point.getY()),2));
    if (Da<Db){
    cout << "This point ";
    point.DisplayPoints(); //This is to display the points for more illustration
    cout <<" is closer to point clusters A and the distance is to the center of A is " <<Da <<endl;
    }
   else {
    cout << "This point ";
    point.DisplayPoints();
    cout <<" is closer to point clusters B and the distance is " << Db <<endl;
    }

}

int main(){
    point* A, *B, *P;
    A= new point [200];
    B= new point [200];
    P= new point [20];

    cout<< "Filling the clusters" <<endl;

    srand(time(0));

    

       for (int i=0; i<200; i++){
       (*(A+i)).setX((rand() % (90 - 71 + 1)) + 71);
       (*(A+i)).setY((rand() % (90 - 71 + 1)) + 71);

       }

        for (int i=0; i<200; i++){
       (*(B+i)).setX((rand() % (40 - 20 + 1)) + 20);
       (*(B+i)).setY((rand() % (40 - 20 + 1)) + 20);
       }

        for (int i=0; i<20; i++){
       (*(P+i)).setX((rand() % (100 - 6 + 1)) + 6);
       (*(P+i)).setY((rand() % (100 - 6 + 1))+ 6);
       }

       cout << "Filled" << endl;
    cout << endl << CenterX(A, 200) << " " << CenterY(A,200) << endl;// For tracing 
    cout << endl << CenterX(B, 200) << " " << CenterY(B,200) << endl;
   
       for (int i=0 ; i< 20; i++)
       Closest_Clus(A, B, *(P+i), 200, 200);
 
 cout << "\n END OF PROGRAM ";
}