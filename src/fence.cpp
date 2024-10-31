#include <GL/glut.h>
#include "fence.h"
#include "colors.h"

void drawFence()
{
    glColor3fv(GREEN); // Warna dasar pagar
    glBegin(GL_LINES);
    glVertex2f(-0.8f, -0.6f);
    glVertex2f(0.8f, -0.6f);
    glEnd();
}
