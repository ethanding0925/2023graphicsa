#include <GL/glut.h>
#include <stdio.h>
void display()
{
      glColor3f(0,1,0);
    glBegin(GL_POLYGON);
    glVertex2f(-0.420, 0.328);
    glVertex2f(-0.416, 0.288);
    glVertex2f(-0.416, 0.244);
    glVertex2f(-0.348, 0.236);
    glVertex2f(-0.292, 0.224);
    glVertex2f(-0.252, 0.220);
    glVertex2f(-0.236, 0.244);
    glVertex2f(-0.244, 0.300);
    glVertex2f(-0.244, 0.380);
    glVertex2f(-0.352, 0.388);
    glVertex2f(-0.360, 0.388);
    glVertex2f(-0.420, 0.388);
    glVertex2f(-0.432, 0.388);
    glEnd();

     glBegin(GL_POLYGON);
    glVertex2f(0.084, 0.384);
    glVertex2f(0.088, 0.328);
    glVertex2f(0.100, 0.256);
    glVertex2f(0.144, 0.180);
    glVertex2f(0.228, 0.176);
    glVertex2f(0.324, 0.176);
    glVertex2f(0.368, 0.176);
    glVertex2f(0.376, 0.324);
    glVertex2f(0.388, 0.360);
    glVertex2f(0.392, 0.372);
    glVertex2f(0.376, 0.372);
    glVertex2f(0.224, 0.376);
    glVertex2f(0.164, 0.376);
    glEnd();
    glBegin(GL_POLYGON);
    glVertex2f(-0.160, -0.144);
    glVertex2f(-0.168, -0.188);
    glVertex2f(-0.160, -0.240);
    glVertex2f(-0.140, -0.148);
    glVertex2f(-0.052, -0.144);
    glVertex2f(0.024, -0.156);
    glVertex2f(0.068, -0.160);
    glVertex2f(0.080, -0.248);
    glVertex2f(0.080, -0.264);
    glVertex2f(0.124, -0.268);
    glVertex2f(0.248, -0.296);
    glVertex2f(0.276, -0.312);
    glVertex2f(0.288, -0.408);
    glVertex2f(0.284, -0.484);
    glVertex2f(0.200, -0.500);
    glVertex2f(0.052, -0.524);
    glVertex2f(-0.260, -0.516);
    glVertex2f(-0.292, -0.516);
    glVertex2f(-0.360, -0.504);
    glVertex2f(-0.416, -0.364);
    glVertex2f(-0.416, -0.292);
    glVertex2f(-0.388, -0.248);
    glVertex2f(-0.168, -0.244);
    glVertex2f(-0.168, -0.244);
    glEnd();








    glBegin(GL_LINE_LOOP);
      glVertex2f(-0.492, 0.568);
    glVertex2f(-0.584, 0.188);
    glVertex2f(-0.592, 0.072);
    glVertex2f(-0.604, -0.076);
    glVertex2f(-0.604, -0.196);
    glVertex2f(-0.600, -0.324);
    glVertex2f(-0.600, -0.496);
    glVertex2f(-0.516, -0.604);
    glVertex2f(-0.376, -0.596);
    glVertex2f(-0.216, -0.596);
    glVertex2f(-0.080, -0.596);
    glVertex2f(0.088, -0.596);
    glVertex2f(0.304, -0.584);
    glVertex2f(0.424, -0.584);
    glVertex2f(0.508, -0.552);
    glVertex2f(0.508, -0.360);
    glVertex2f(0.508, -0.228);
    glVertex2f(0.508, -0.080);
    glVertex2f(0.480, 0.156);
    glVertex2f(0.468, 0.384);
    glVertex2f(0.456, 0.568);
    glVertex2f(0.432, 0.568);
    glVertex2f(0.280, 0.592);
    glVertex2f(0.164, 0.604);
    glVertex2f(0.020, 0.604);
    glVertex2f(-0.152, 0.604);
    glVertex2f(-0.284, 0.612);
    glVertex2f(-0.368, 0.620);
    glVertex2f(-0.544, 0.620);
    glVertex2f(-0.556, 0.620);
    glEnd();

    glutSwapBuffers();
}
void mouse(int button, int state, int x, int y)
{
    float X = (x-250)/250.0;
    float Y = -(y-250)/250.0;
    if(state==GLUT_DOWN){
        printf("    glVertex2f(%.3f, %.3f);\n", X, Y);
    }
}
int main(int argc, char* argv[] )
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_RGB|GLUT_DOUBLE|GLUT_DEPTH);
    glutInitWindowSize(500,500);
    glutCreateWindow("week03");

    glutDisplayFunc(display);
    glutMouseFunc(mouse);

    glutMainLoop();
}
