///week12-5_TRT_keyboard_mouse �n�� keyboard mouse �Ӿޱ�
#include <stdio.h>
#include <GL/glut.h>
#include "glm.h"
GLMmodel * head=NULL;
GLMmodel * body=NULL;
GLMmodel * rarm=NULL;
GLMmodel * rhand=NULL;
GLMmodel * larm=NULL;
GLMmodel * lhand=NULL;
GLMmodel * rfoot=NULL;
GLMmodel * lfoot=NULL;
int show[4]={0,1,0,0};
void keyboard(unsigned char key,int x,int y){
if(key=='0')show[0]=!show[0];
if(key=='1')show[1]=!show[1];
if(key=='2')show[2]=!show[2];
if(key=='3')show[3]=!show[3];
if(key=='4')show[4]=!show[4];
if(key=='5')show[5]=!show[5];
if(key=='6')show[6]=!show[6];
if(key=='7')show[7]=!show[7];
glutPostRedisplay();
}





FILE * fout = NULL; ///step02-2 �@�}�l,�ɮרS���}, NULL
FILE * fin = NULL; ///step02-2 �nŪ�ɥΪ�����, �@�}�l�]�O NULL
float teapotX=0, teapotY=0; ///���ڭ̬ݲ��ʭ�
float angle=0, angle2=0, angle3=0;///step03-2 �\�ʧ@
void display()
{
    glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);
    glPushMatrix();
        glScalef(0.2,0.2,0.2);
        if(body==NULL){
            head=glmReadOBJ("model/head.obj");
            body=glmReadOBJ("model/body.obj");
            rhand=glmReadOBJ("model/rhand.obj");
            rarm=glmReadOBJ("model/rarm.obj");
            lhand=glmReadOBJ("model/lhand.obj");
            larm=glmReadOBJ("model/larm.obj");
            rfoot=glmReadOBJ("model/rfoot.obj");
            lfoot=glmReadOBJ("model/lfoot.obj");
        }
        if(show[0])glmDraw(head,GLM_MATERIAL);
        if(show[1])glmDraw(body,GLM_MATERIAL);
        if(show[2])glmDraw(rhand,GLM_MATERIAL);
        if(show[3])glmDraw(rarm,GLM_MATERIAL);
        if(show[4])glmDraw(lhand,GLM_MATERIAL);
        if(show[5])glmDraw(larm,GLM_MATERIAL);
        if(show[6])glmDraw(rfoot,GLM_MATERIAL);
        if(show[7])glmDraw(lfoot,GLM_MATERIAL);
        glmDraw(body,GLM_MATERIAL);
    glPopMatrix();
    glutSwapBuffers();
}
int oldX=0,oldY=0;
void motion(int x,int y){
    teapotX+=(x-oldX)/150.0;
    teapotY-=(y-oldY)/150.0;
    oldX=x;
    oldY=y;
    printf("glTranslatef(%f,%f,0);\n",teapotX,teapotY);
    glutPostRedisplay();
}


void mouse(int button, int state, int x, int y)
{
    if(state==GLUT_DOWN){

        oldX=x;///teapotX = (x-150)/150.0;
        oldY=y;///teapotY = (150-y)/150.0;
        angle = x;
        ///printf("glTranslatef(%f, %f, 0);\n", teapotX, teapotY);
        ///if(fout==NULL) fout = fopen("file4.txt", "w"); ///step02-2 �S�}��,�N�}
        ///fprintf(fout, "%f %f\n", teapotX, teapotY); ///step02-2 �n�A�s�y��
    }
    display();
}
///void keyboard(unsigned char key, int x, int y) ///step02-2 keyboard�禡
///{
    ///if(fin==NULL){ ///step02-2 �p�G�ɮ��٨S fopen(), �N�}��
      ///  fclose(fout); ///�e��mouse�|�}fout����, �ҥH�n����
        ///fin = fopen("file4.txt", "r"); ///step02-2 �S�}��,�N�}
   /// }
    ///fscanf(fin, "%f %f", &teapotX, &teapotY); ///step02-2 �u��Ū��
   /// display(); ///step02-2 ���e�e��
///}
int main(int argc, char** argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_DEPTH);
    glutCreateWindow("week12");

    glutDisplayFunc(display);
    glutMouseFunc(mouse);
    glutKeyboardFunc(keyboard); ///step02-2 keyboard�n�����o(�}�ɡBŪ��)

    glutMainLoop();
}
