#include <iostream>
using namespace std;

int main() {
    //[2][3][3][2]
    int a[2][3][3][2]= {
        {
            {
                {10,20},
                {30,40},
                {50,60}
            },
            {
                {70,80},
                {90,100},
                {110,120}
            },
            {
                {130,140},
                {150,160},
                {170,180}
            }
        },
        {
            {
                {-10,-20},
                {-30,-40},
                {-50,-60}
            },
            {
                {-70,-80},
                {-90,-100},
                {-110,-120}
            },
            {
                {-130,-140},
                {-150,-160},
                {-170,-180}
            }
        }
    };
    //cout<<a[1][1][0][1]<<endl;

    int b[2][1][2] = {
        {
            {10,20}
        },
        {
            {30,40}
        }
    };
    cout<<b[0][0][1]<<endl; //20

    int c[5]={10,20,30,40,50};

    return 0;
}