#include <GL/glut.h>
#include "house.h"
#include "fence.h"
#include "tree.h"
#include "colors.h"

void display()
{
    glClear(GL_COLOR_BUFFER_BIT);

    // Memanggil fungsi untuk menggambar objek
    drawHouse();
    drawFence();
    drawTree();

    glFlush();
}

void init()
{
    glClearColor(WHITE[0], WHITE[1], WHITE[2], 1.0f);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D(-1.0, 1.0, -1.0, 1.0);
}

int main(int argc, char **argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize(800, 600);
    glutCreateWindow("UTS Grafkom Kel1 - Rumah, Pagar, Pohon");
    init();
    glutDisplayFunc(display);
    glutMainLoop();
    return 0;
}
