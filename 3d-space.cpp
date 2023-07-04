/*
Name: Eliyas Philip
Email: eliyas.philip84@myhunter.cuny.edu 
Course: CSCI-135
Instructor: Tong Yi
Assignment: Lab1A

This program
takes input from
an external text file 
and appends all the numbers
and produces one final sum. 
*/

#include <iostream>
#include <cmath>

using namespace std;

class Coord3D {
    public:
        double x;
        double y;
        double z;
};

double length(Coord3D *p){
    return sqrt((p->x * p->x) + (p->y * p->y) + (p->z * p->z));
}

Coord3D * fartherFromOrigin(Coord3D *p1, Coord3D *p2){
    if(length(p1) != length(p2)){
        if(length(p1) > length(p2)){
            return p1;
        }
        else{
            return p2;
        }
    }

    return p1;
}

Coord3D* createCoord3D(double x, double y, double z){
    
}

void deleteCoord3D(Coord3D *p){
    delete p;
    p = nullptr;
}

void move(Coord3D *ppos, Coord3D *pvel, double dt){
    double newX = ppos->x + pvel->x * dt; 
    double newY = ppos->y + pvel->y * dt;
    double newZ = ppos->z + pvel->z * dt;

    ppos->x = newX;
    ppos->y = newY;
    ppos->z= newZ;
}

int main() {
    Coord3D pos = {0, 0, 100.0};
    Coord3D vel = {1, -5, 0.2};

    move(&pos, &vel, 2.0); // object pos gets changed
    cout << pos.x << " " << pos.y << " " << pos.z << endl;
    // prints: 2 -10 100.4
}