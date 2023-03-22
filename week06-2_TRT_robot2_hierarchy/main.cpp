#include <GL/glut.h>

float angle = 0;

void display()

{

    glClear( GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT ); ///清背景



   glutSolidSphere(0.02,30,30);
   glutSolidTeapot(0.3);///身體
   glPushMatrix();
   glTranslatef(0.49,0.13,0);
    glRotatef(angle,0,0,1);///2,就可以轉動了

    glTranslatef(0.46,-0.05,0);///1,把轉動的中心,放中心
    glutSolidTeapot(0.3);
    glPushMatrix();
    glTranslatef(0.49,0.13,0);
    glRotatef(angle,0,0,1);///2,就可以轉動了
    glTranslatef(0.46,-0.05,0);///1,把轉動的中心,放中心
    glutSolidTeapot(0.3);
    glPopMatrix();



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
