#include <GL/glut.h>

float angle = 0;

void display()

{

    glClear( GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT ); ///清背景



   glutSolidSphere(0.02,30,30);
   glPushMatrix();
    glRotatef(angle,0,0,1);
    glTranslatef(0.46,-0.05,0);
    glutSolidTeapot(0.3);


    glPopMatrix();



    glutSwapBuffers();

    angle++; ///step02-1 把角度++

}

int main(int argc, char* argv[] )

{

    glutInit(&argc, argv);

    glutInitDisplayMode(GLUT_RGB|GLUT_DOUBLE|GLUT_DEPTH);

    glutCreateWindow("week04");



    glutDisplayFunc(display);

    glutIdleFunc(display); ///step02-1 有空idle時,就重畫畫面

    glutMainLoop();

}
