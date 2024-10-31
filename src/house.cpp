#include <GL/glut.h>
#include "house.h"
#include "colors.h"

void drawHouse()
{
    glColor3fv(RED); // Warna dasar rumah
    glBegin(GL_POLYGON);
    glVertex2f(-0.5f, -0.5f);
    glVertex2f(0.5f, -0.5f);
    glVertex2f(0.5f, 0.5f);
    glVertex2f(-0.5f, 0.5f);
    glEnd();
}
