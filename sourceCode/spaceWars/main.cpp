#include <iostream>
#include "consoleTools/basicGraphic/basicgraphic.h"
#include "graphicchar.h"
#include "graphicobjects.h"
#include "ship.h"
int main(int argc, char *argv[])
{
    /*
    graphicChar c1(point(4,0),'/',BG_RED);
    graphicChar c2(point(5,0),'/',BG_BLUE);
    graphicChar c3(point(3,1),219,BG_GREEN);
    graphicChar c4(point(4,1),219,BG_GREEN);
    graphicChar c5(point(5,1),219,BG_GREEN);
    graphicChar c6(point(6,1),219,BG_GREEN);
    graphicChar c7(point(7,1),'|',BG_RED);
    graphicChar c8(point(8,1),'<',BG_YELLOW);
    graphicChar c9(point(1,2),17,BG_RED);
    graphicChar c10(point(2,2),219,BG_BLUE);
    graphicChar c11(point(3,2),219,BG_BLUE);
    graphicChar c12(point(4,2),3,BG_WHITE);
    graphicChar c13(point(5,2),4,BG_WHITE);
    graphicChar c14(point(6,2),5,BG_WHITE);
    graphicChar c15(point(7,2),6,BG_WHITE);
    graphicChar c16(point(8,2),'|',BG_RED);
    graphicChar c17(point(9,2),'<',BG_YELLOW);
    graphicChar c18(point(3,3),219,BG_GREEN);
    graphicChar c19(point(4,3),219,BG_GREEN);
    graphicChar c20(point(5,3),219,BG_GREEN);
    graphicChar c21(point(6,3),219,BG_GREEN);
    graphicChar c22(point(7,3),'|',BG_RED);
    graphicChar c23(point(8,3),'<',BG_YELLOW);
    graphicChar c24(point(4,4),'\\',BG_RED);
    graphicChar c25(point(5,4),'\\',BG_BLUE);

    graphicChar b1(point(4,0),'\\',BG_RED);
    graphicChar b2(point(5,0),'\\',BG_BLUE);
    graphicChar b3(point(1,1),'>',BG_GREEN);
    graphicChar b4(point(2,1),'|',BG_GREEN);
    graphicChar b5(point(3,1),219,BG_GREEN);
    graphicChar b6(point(4,1),219,BG_GREEN);
    graphicChar b7(point(5,1),219,BG_RED);
    graphicChar b8(point(6,1),219,BG_YELLOW);
    graphicChar b9(point(0,2),'>',BG_RED);
    graphicChar b10(point(1,2),'|',BG_BLUE);
    graphicChar b11(point(2,2),3,BG_BLUE);
    graphicChar b12(point(3,2),4,BG_WHITE);
    graphicChar b13(point(4,2),5,BG_WHITE);
    graphicChar b14(point(5,2),6,BG_WHITE);
    graphicChar b15(point(6,2),219,BG_WHITE);
    graphicChar b16(point(7,2),219,BG_RED);
    graphicChar b17(point(8,2),16,BG_YELLOW);
    graphicChar b18(point(1,3),'>',BG_GREEN);
    graphicChar b19(point(2,3),'|',BG_GREEN);
    graphicChar b20(point(3,3),219,BG_GREEN);
    graphicChar b21(point(4,3),219,BG_GREEN);
    graphicChar b22(point(5,3),219,BG_RED);
    graphicChar b23(point(6,3),219,BG_YELLOW);
    graphicChar b24(point(4,4),'/',BG_RED);
    graphicChar b25(point(5,4),'/',BG_BLUE);

    //Upside ship

    graphicChar a1(point(4,0),30,BG_RED);
    graphicChar a2(point(2,1),219,BG_RED);
    graphicChar a3(point(3,1),219,BG_RED);
    graphicChar a4(point(4,1),3,BG_RED);
    graphicChar a5(point(5,1),219,BG_RED);
    graphicChar a6(point(6,1),219,BG_RED);
    graphicChar a7(point(1,2),'/',BG_RED);
    graphicChar a8(point(2,2),219,BG_RED);
    graphicChar a9(point(3,2),219,BG_RED);
    graphicChar a10(point(4,2),4,BG_RED);
    graphicChar a11(point(5,2),219,BG_RED);
    graphicChar a12(point(6,2),219,BG_RED);
    graphicChar a13(point(7,2),'\\',BG_RED);
    //graphicChar a14(point(0,3),'/',BG_RED);
    graphicChar a15(point(1,3),'/',BG_RED);
    graphicChar a16(point(2,3),219,BG_RED);
    graphicChar a17(point(3,3),219,BG_RED);
    graphicChar a18(point(4,3),5,BG_RED);
    graphicChar a19(point(5,3),219,BG_RED);
    graphicChar a20(point(6,3),219,BG_RED);
    graphicChar a21(point(7,3),'\\',BG_RED);
    //graphicChar a22(point(8,3),'\\',BG_RED);
    graphicChar a23(point(2,4),'-',BG_RED);
    graphicChar a24(point(3,4),'-',BG_RED);
    graphicChar a25(point(4,4),4,BG_RED);
    graphicChar a26(point(5,4),'-',BG_RED);
    graphicChar a27(point(6,4),'-',BG_RED);
    graphicChar a28(point(2,5),'^',BG_RED);
    graphicChar a29(point(3,5),'^',BG_RED);
    graphicChar a30(point(4,5),'-',BG_RED);
    graphicChar a31(point(5,5),'^',BG_RED);
    graphicChar a32(point(6,5),'^',BG_RED);

    //downside ship

    graphicChar d1(point(2,0),30,BG_RED);
    graphicChar d2(point(3,0),30,BG_RED);
    graphicChar d3(point(4,0),30,BG_RED);
    graphicChar d4(point(5,0),30,BG_RED);
    graphicChar d5(point(6,0),30,BG_RED);
    graphicChar d6(point(2,1),254,BG_RED);
    graphicChar d7(point(3,1),254,BG_RED);
    graphicChar d8(point(4,1),254,BG_RED);
    graphicChar d9(point(5,1),254,BG_RED);
    graphicChar d10(point(6,1),254,BG_RED);
    graphicChar d11(point(0,2),'\\',BG_RED);
    graphicChar d12(point(1,2),'\\',BG_RED);
    graphicChar d13(point(2,2),219,BG_RED);
    graphicChar d14(point(3,2),219,BG_RED);
    graphicChar d15(point(4,2),3,BG_RED);
    graphicChar d16(point(5,2),219,BG_RED);
    graphicChar d17(point(6,2),219,BG_RED);
    graphicChar d18(point(7,2),'/',BG_RED);
    graphicChar d19(point(8,2),'/',BG_RED);
    graphicChar d20(point(1,3),'\\',BG_RED);
    graphicChar d21(point(2,3),219,BG_RED);
    graphicChar d22(point(3,3),219,BG_RED);
    graphicChar d23(point(4,3),4,BG_RED);
    graphicChar d24(point(5,3),219,BG_RED);
    graphicChar d25(point(6,3),219,BG_RED);
    graphicChar d26(point(7,3),'/',BG_RED);
    graphicChar d27(point(6,3),254,BG_RED);
    graphicChar d28(point(2,4),31,BG_RED);
    graphicChar d29(point(3,4),31,BG_RED);
    graphicChar d30(point(4,4),31,BG_RED);
    graphicChar d31(point(5,4),31,BG_RED);
    graphicChar d32(point(6,4),31,BG_RED);
    graphicChar d33(point(4,5),31,BG_RED);


    point offset(20,15);
    c1.paint(offset);
    c2.paint(offset);
    c3.paint(offset);
    c4.paint(offset);
    c5.paint(offset);
    c6.paint(offset);
    c7.paint(offset);
    c8.paint(offset);
    c9.paint(offset);
    c10.paint(offset);
    c11.paint(offset);
    c12.paint(offset);
    c13.paint(offset);
    c14.paint(offset);
    c15.paint(offset);
    c16.paint(offset);
    c17.paint(offset);
    c18.paint(offset);
    c19.paint(offset);
    c20.paint(offset);
    c21.paint(offset);
    c22.paint(offset);
    c23.paint(offset);
    c24.paint(offset);
    c25.paint(offset);

    point offsetR(5,5);
    b1.paint(offsetR);
    b2.paint(offsetR);
    b3.paint(offsetR);
    b4.paint(offsetR);
    b5.paint(offsetR);
    b6.paint(offsetR);
    b7.paint(offsetR);
    b8.paint(offsetR);
    b9.paint(offsetR);
    b10.paint(offsetR);
    b11.paint(offsetR);
    b12.paint(offsetR);
    b13.paint(offsetR);
    b14.paint(offsetR);
    b15.paint(offsetR);
    b16.paint(offsetR);
    b17.paint(offsetR);
    b18.paint(offsetR);
    b19.paint(offsetR);
    b20.paint(offsetR);
    b21.paint(offsetR);
    b22.paint(offsetR);
    b23.paint(offsetR);
    b24.paint(offsetR);
    b25.paint(offsetR);

    point offsetU(10,25);
    a1.paint(offsetU);
    a2.paint(offsetU);
    a3.paint(offsetU);
    a4.paint(offsetU);
    a5.paint(offsetU);
    a6.paint(offsetU);
    a7.paint(offsetU);
    a8.paint(offsetU);
    a9.paint(offsetU);
    a10.paint(offsetU);
    a11.paint(offsetU);
    a12.paint(offsetU);
    a13.paint(offsetU);
   // a14.paint(offsetU);
    a15.paint(offsetU);
    a16.paint(offsetU);
    a17.paint(offsetU);
    a18.paint(offsetU);
    a19.paint(offsetU);
    a20.paint(offsetU);
    a21.paint(offsetU);
    //a22.paint(offsetU);
    a23.paint(offsetU);
    a24.paint(offsetU);
    a25.paint(offsetU);
    a26.paint(offsetU);
    a27.paint(offsetU);
    a28.paint(offsetU);
    a29.paint(offsetU);
    a30.paint(offsetU);
    a31.paint(offsetU);
    a32.paint(offsetU);

    point offsetD(15,20);
    d1.paint(offsetD);
    d2.paint(offsetD);
    d3.paint(offsetD);
    d4.paint(offsetD);
    d5.paint(offsetD);
    d6.paint(offsetD);
    d7.paint(offsetD);
    d8.paint(offsetD);
    d9.paint(offsetD);
    d10.paint(offsetD);
    d11.paint(offsetD);
    d12.paint(offsetD);
    d13.paint(offsetD);
    d14.paint(offsetD);
    d15.paint(offsetD);
    d16.paint(offsetD);
    d17.paint(offsetD);
    d18.paint(offsetD);
    d19.paint(offsetD);
    d20.paint(offsetD);
    d21.paint(offsetD);
    d22.paint(offsetD);
    d23.paint(offsetD);
    d24.paint(offsetD);
    d25.paint(offsetD);
    d26.paint(offsetD);
    d27.paint(offsetD);
    d28.paint(offsetD);
    d29.paint(offsetD);
    d30.paint(offsetD);
    d31.paint(offsetD);
    d32.paint(offsetD);
    d33.paint(offsetD);
    */


    /*
    QList<graphicObjects> gos;
    gos.append(graphicObjects(point(6,2),0.002,DIR_RIGHT,50,0,0,30));
    gos.append(graphicObjects(point(0,4),0.003,DIR_RIGHT,50,0,0,30));
    gos.append(graphicObjects(point(20,20),0.004,DIR_TOP,50,0,0,30));
    gos.append(graphicObjects(point(50,10),0.01,DIR_LEFT,50,0,0,30));
    gos.append(graphicObjects(point(0,5),0.007,DIR_DOWN,50,0,0,30));
    gos.append(graphicObjects(point(21,30),0.006,DIR_TOP,50,0,0,30));
    gos.append(graphicObjects(point(20,20),0.005,DIR_LEFT,50,0,0,30));



    for(;;)
    {
        bg::clrscr();

        for(int i=0;i<gos.size();i++)
        {
            gos[i].paint();
            gos[i].tic(200);
        }

        Sleep(200);


    }
*/
    QList<ship> gos;
    gos.append(ship(point(5,5),0.003,DIR_RIGHT,50,0,0,30));
    gos.append(ship(point(5,5),0.003,DIR_DOWN,50,0,0,30));
    gos.append(ship(point(10,30),0.002,DIR_TOP,50,0,0,30));
    gos.append(ship(point(0,10),0.006,DIR_RIGHT,50,0,0,30));


    for(;;)
    {
        bg::clrscr();

        for(int i=0;i<gos.size();i++)
        {
            gos[i].paint();
            gos[i].tic(1000);
        }

        Sleep(100);


    }


    bg::gotoxy(0,40);

    return 0;
}
