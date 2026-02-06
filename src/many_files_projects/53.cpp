#include"common.h"
#include "quadrilaterals.h"
#include"triangles.h"

void drawsh(drawshape* a){
    a->draw();

}
int main(int argc,char** argv){
    triangle triangle(10,20,30,50,60,70);
    triangle90 triangle90(10,20,30,50,60);
    triangle_equal_two_sides triangle_equal_two_sides(10,20,50,60);
    triangle_equal_all_sides triangle_equal_all_sides(30);
    quadrilateral quadrilateral(10,20,30,40,50,60,70,80);
    rectangle rectangle(10,20);
    square square(20);
    parallelogram parallelogram(20,30,30,40);
    rhombus rhombus(30,30,40);

    drawsh(&triangle);
    drawsh(&triangle90);
    drawsh(&triangle_equal_two_sides);
    drawsh(&triangle_equal_all_sides);
    drawsh(&quadrilateral);
    drawsh(&rectangle);
    drawsh(&square);
    drawsh(&parallelogram);
    drawsh(&rhombus);

    
    



    return 0;
}