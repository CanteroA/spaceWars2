#include "ship2.h"

void ship2::initGraphicObject(point pos, float speed, char dir, int flR, int flL, int flT, int flB)
{
    graphicObjects::initGraphicObject(pos,speed,dir,flR,flL,flT,flB);

        _graphRight.clear();
        _graphRight.append(graphicChar(point(1, 3), 17, BG_GREEN));
        graphicChar c2(point(2, 2), '/', BG_GREEN);
        graphicChar c3(point(2, 3), '<', BG_RED);
        graphicChar c4(point(2, 4), '\\', BG_GREEN);
        graphicChar c5(point(3, 2), '<', BG_GREEN);
        graphicChar c6(point(3, 3), 2 , BG_WHITE);
        graphicChar c7(point(3, 4), '<', BG_GREEN);
        graphicChar c8(point(4, 2), '<', BG_GREEN);
        graphicChar c9(point(4, 3), 'K', BG_CYAN);
        graphicChar c10(point(4, 4), '<', BG_GREEN);
        graphicChar c11(point(5, 2), '-', BG_GREEN);
        graphicChar c12(point(5, 3),219 , BG_WHITE);
        graphicChar c13(point(5, 4), '-', BG_GREEN);
        graphicChar c14(point(6, 2), '-', BG_GREEN);
        graphicChar c15(point(6, 3), 219, BG_WHITE);
        graphicChar c16(point(6, 4), '-', BG_GREEN);
        graphicChar c17(point(7, 1), 187, BG_RED);
        graphicChar c18(point(7, 2), '|', BG_GREEN);
        graphicChar c19(point(7, 3), '|', BG_GREEN);
        graphicChar c20(point(7, 4), '|', BG_GREEN);
        graphicChar c21(point(7, 5), 188, BG_RED);
        graphicChar c22(point(8, 2), '<', BG_YELLOW);
        graphicChar c23(point(8, 4), '<', BG_YELLOW);

        point off(15, 5);
        c1.paint(off);
        c2.paint(off);
        c3.paint(off);
        c4.paint(off);
        c5.paint(off);
        c6.paint(off);
        c7.paint(off);
        c8.paint(off);
        c9.paint(off);
        c10.paint(off);
        c11.paint(off);
        c12.paint(off);
        c13.paint(off);
        c14.paint(off);
        c15.paint(off);
        c16.paint(off);
        c17.paint(off);
        c18.paint(off);
        c19.paint(off);
        c20.paint(off);
        c21.paint(off);
        c22.paint(off);
        c23.paint(off);


        //Rocket to Right

        graphicChar d1(point(1, 2), '>', BG_YELLOW);
        graphicChar d2(point(1, 4), '>', BG_YELLOW);
        graphicChar d3(point(2, 1), 201, BG_RED);
        graphicChar d4(point(2, 2), '|', BG_GREEN);
        graphicChar d5(point(2, 3), '|', BG_GREEN);
        graphicChar d6(point(2, 4), '|', BG_GREEN);
        graphicChar d7(point(2, 5), 200, BG_RED);
        graphicChar d8(point(3, 2), '-', BG_GREEN);
        graphicChar d9(point(3, 3), 219, BG_WHITE);
        graphicChar d10(point(3, 4), '-', BG_GREEN);
        graphicChar d11(point(4, 2), '-', BG_GREEN);
        graphicChar d12(point(4, 3), 219, BG_WHITE);
        graphicChar d13(point(4, 4), '-', BG_GREEN);
        graphicChar d14(point(5, 2), '>', BG_GREEN);
        graphicChar d15(point(5, 3), 'K', BG_CYAN);
        graphicChar d16(point(5, 4), '>', BG_GREEN);
        graphicChar d17(point(6, 2), '>', BG_GREEN);
        graphicChar d18(point(6, 3), 1, BG_WHITE);
        graphicChar d19(point(6, 4), '>', BG_GREEN);
        graphicChar d20(point(7, 2), '\\', BG_GREEN);
        graphicChar d21(point(7, 3), '>', BG_RED);
        graphicChar d22(point(7, 4), '/', BG_GREEN);
        graphicChar d23(point(8, 3), 16, BG_GREEN);

        point loff(15, 10);
        d1.paint(loff);
        d2.paint(loff);
        d3.paint(loff);
        d4.paint(loff);
        d5.paint(loff);
        d6.paint(loff);
        d7.paint(loff);
        d8.paint(loff);
        d9.paint(loff);
        d10.paint(loff);
        d11.paint(loff);
        d12.paint(loff);
        d13.paint(loff);
        d14.paint(loff);
        d15.paint(loff);
        d16.paint(loff);
        d17.paint(loff);
        d18.paint(loff);
        d19.paint(loff);
        d20.paint(loff);
        d21.paint(loff);
        d22.paint(loff);
        d23.paint(loff);


        //Rocket down

        graphicChar l1(point(2, 1), 'v', BG_YELLOW);
        graphicChar l2(point(4, 1), 'v', BG_YELLOW);
        graphicChar l3(point(1, 2), 201, BG_RED);
        graphicChar l4(point(2, 2), '-', BG_GREEN);
        graphicChar l5(point(3, 2), '-', BG_GREEN);
        graphicChar l6(point(4, 2), '-', BG_GREEN);
        graphicChar l7(point(5, 2), 187, BG_RED);
        graphicChar l8(point(2, 3), '|', BG_GREEN);
        graphicChar l9(point(3, 3), 219, BG_WHITE);
        graphicChar l10(point(4, 3), '|', BG_GREEN);
        graphicChar l11(point(2, 4), '|', BG_GREEN);
        graphicChar l12(point(3, 4), 219, BG_WHITE);
        graphicChar l13(point(2, 5), 'V', BG_GREEN);
        graphicChar l14(point(3, 5), 1, BG_GREEN);
        graphicChar l15(point(4, 5), 'V', BG_CYAN);
        graphicChar l16(point(2, 6), 'V', BG_GREEN);
        graphicChar l17(point(3, 6), 'K', BG_GREEN);
        graphicChar l18(point(4, 6), 'V', BG_WHITE);
        graphicChar l19(point(2, 7), '\\', BG_GREEN);
        graphicChar l20(point(3, 7), 'V', BG_GREEN);
        graphicChar l21(point(4, 7), '/', BG_RED);
        graphicChar l22(point(3, 8), 31, BG_GREEN);
        graphicChar l23(point(4, 4), '|', BG_GREEN);

        point doff(30, 10);
        l1.paint(doff);
        l2.paint(doff);
        l3.paint(doff);
        l4.paint(doff);
        l5.paint(doff);
        l6.paint(doff);
        l7.paint(doff);
        l8.paint(doff);
        l9.paint(doff);
        l10.paint(doff);
        l11.paint(doff);
        l12.paint(doff);
        l13.paint(doff);
        l14.paint(doff);
        l15.paint(doff);
        l16.paint(doff);
        l17.paint(doff);
        l18.paint(doff);
        l19.paint(doff);
        l20.paint(doff);
        l21.paint(doff);
        l22.paint(doff);
        l23.paint(doff);


        //Rocket Up
        graphicChar u1(point(3, 1), 30, BG_YELLOW);
        graphicChar u2(point(2, 2), '/', BG_YELLOW);
        graphicChar u3(point(3, 2), '^', BG_RED);
        graphicChar u4(point(4, 2), '\\', BG_GREEN);
        graphicChar u5(point(2, 3), '^', BG_GREEN);
        graphicChar u6(point(3, 3), 1, BG_GREEN);
        graphicChar u7(point(4, 3), '^', BG_RED);
        graphicChar u8(point(2, 4), '^', BG_GREEN);
        graphicChar u9(point(3, 4), 'K', BG_WHITE);
        graphicChar u10(point(4, 4), '^', BG_GREEN);
        graphicChar u11(point(2, 5), '|', BG_GREEN);
        graphicChar u12(point(3, 5), 219, BG_WHITE);
        graphicChar u13(point(5, 5), '|', BG_GREEN);
        graphicChar u14(point(2, 6), '|', BG_GREEN);
        graphicChar u15(point(3, 6), 219, BG_CYAN);
        graphicChar u16(point(4, 6), '|', BG_GREEN);
        graphicChar u17(point(1, 7), 200, BG_GREEN);
        graphicChar u18(point(2, 7), '-', BG_WHITE);
        graphicChar u19(point(3, 7), '-', BG_GREEN);
        graphicChar u20(point(4, 7), '-', BG_GREEN);
        graphicChar u21(point(5, 7), 188, BG_RED);
        graphicChar u22(point(2, 8), '^', BG_GREEN);
        graphicChar u23(point(4, 8), '^', BG_GREEN);

        point uoff(45, 10);
        u1.paint(uoff);
        u2.paint(uoff);
        u3.paint(uoff);
        u4.paint(uoff);
        u5.paint(uoff);
        u6.paint(uoff);
        u7.paint(uoff);
        u8.paint(uoff);
        u9.paint(uoff);
        u10.paint(uoff);
        u11.paint(uoff);
        u12.paint(uoff);
        u13.paint(uoff);
        u14.paint(uoff);
        u15.paint(uoff);
        u16.paint(uoff);
        u17.paint(uoff);
        u18.paint(uoff);
        u19.paint(uoff);
        u20.paint(uoff);
        u21.paint(uoff);
        u22.paint(uoff);
        u23.paint(uoff);
}

ship2::ship2()
{
}

ship2::ship2(point pos, float speed, char dir, int flR, int flL, int flT, int flB)
{

}
