//Mahmoud Refaie 900221164
#include "Class.h"

float CenterX(point* C, float n){
float sumX;
for (int i=0; i<n; i++)
 sumX=+C[i].getX();
 
 return (sumX/n);
}

float CenterY(point* C, float n){
float sumY;
for (int i=0; i<n; i++)
 sumY=+C[i].getY();
 
 return (sumY/n);
}

void Closest_Clus (point* A, point* B, point point, float na, float nb ){
  
  
    float Da = sqrt(pow(CenterX(A, na)-point.getX(),2)+pow(CenterY(A, na)-point.getY(),2));
    float Db = sqrt(pow(CenterX(B, nb)-point.getX(),2)+pow(CenterY(B,nb)-point.getY(),2));
    if (Da>Db){
    cout << "This point ";
    point.DisplayPoints(); //This is to display the points for more illustration
    cout <<" is closer to point clusters A and the distance is " << Da <<endl;
    }
   if (Da<Db){
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
   
       for (int i=0; i<200; i++){
       (*(A+i)).setX(rand()% 90 + 71.0);
       (*(A+i)).setY(rand()% 90 + 71.0);

       }

        for (int i=0; i<200; i++){
       (*(B+i)).setX(rand()% 40 + 21.0);
       (*(B+i)).setY(rand()% 40 + 21.0);
       }

        for (int i=0; i<20; i++){
       (*(P+i)).setX(rand()% 100 + 6.0);
       (*(P+i)).setY(rand()% 100 + 6.0);
       }

       cout << "Filled" << endl;

       for (int i=0 ; i< 20; i++)
       Closest_Clus(A, B, *(P+i), 200, 200);
 
 cout << "\n END OF PROGRAM ";
}