#include <GL/glut.h>

float angle = 0;
void drawhand()
{
    glPushMatrix();
    glScalef(1,0.3,0.3);
    glutSolidCube(0.5);
    glPopMatrix();

}

void display()

{

    glClear( GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT ); ///清背景
    glPushMatrix();///右上手臂
        glTranslatef(0.25,0,0);///3,掛上去
        glRotatef(angle,0,0,1);///2,轉動
        glTranslatef(0.25,0,0);///1,把中心放正中心

    drawhand();
    glPushMatrix();///右上手肘

        glTranslatef(0.25,0,0);
        glRotatef(angle,0,0,1);
        glTranslatef(0.25,0,0);
        drawhand();
        glPopMatrix();
    glPopMatrix();

     glPushMatrix();///左上手臂
        glTranslatef(-0.25,0,0);
        glRotatef(angle,0,0,1);
        glTranslatef(-0.25,0,0);

    drawhand();
    glPushMatrix();///左上手肘

        glTranslatef(-0.25,0,0);
        glRotatef(angle,0,0,1);
        glTranslatef(-0.25,0,0);
        drawhand();
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
