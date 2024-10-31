#include <GL/glut.h>
#include "tree.h"
#include "colors.h"

void drawTree()
{
    glColor3fv(GREEN); // Warna dasar pohon
    glBegin(GL_TRIANGLES);
    glVertex2f(-0.1f, 0.0f);
    glVertex2f(0.1f, 0.0f);
    glVertex2f(0.0f, 0.3f);
    glEnd();
}
