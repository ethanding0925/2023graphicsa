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

    glClear( GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT ); ///�M�I��
    glPushMatrix();///�k�W���u
        glTranslatef(0.25,0,0);///3,���W�h
        glRotatef(angle,0,0,1);///2,���
        glTranslatef(0.25,0,0);///1,�⤤�ߩ񥿤���

    drawhand();
    glPushMatrix();///�k�W��y

        glTranslatef(0.25,0,0);
        glRotatef(angle,0,0,1);
        glTranslatef(0.25,0,0);
        drawhand();
        glPopMatrix();
    glPopMatrix();

     glPushMatrix();///���W���u
        glTranslatef(-0.25,0,0);
        glRotatef(angle,0,0,1);
        glTranslatef(-0.25,0,0);

    drawhand();
    glPushMatrix();///���W��y

        glTranslatef(-0.25,0,0);
        glRotatef(angle,0,0,1);
        glTranslatef(-0.25,0,0);
        drawhand();
        glPopMatrix();
    glPopMatrix();
    glutSwapBuffers();

    angle++; ///step02-1 �⨤��++

}

int main(int argc, char* argv[] )

{

    glutInit(&argc, argv);

    glutInitDisplayMode(GLUT_RGB|GLUT_DOUBLE|GLUT_DEPTH);

    glutCreateWindow("week04");

    glutDisplayFunc(display);

    glutIdleFunc(display); ///step02-1 ����idle��,�N���e�e��

    glutMainLoop();

}
