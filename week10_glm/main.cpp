#include <GL/glut.h>
#include "glm.h"
GLMmodel*pmodel=NULL;

void display()
{
    glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);
    if(pmodel==NULL){
        pmodel=glmReadOBJ("Al.obj");
        glmUnitize(pmodel);
        glmFacetNormals(pmodel);
        glmVertexNormals(pmodel,90);
    }

    glmDraw(pmodel,GLM_MATERIAL);
    glutSwapBuffers(); ///step01-1 ��GLUT��e��swap�e����ܪ��a��
}
int main(int argc, char *argv[])
{ ///step01-1 �W���O�S�O�� main()�禡, ���ܦh�Ѽ�
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE | GLUT_DEPTH); ///�W���o��,����ܪ��Ҧ��]�w�n!
	glutCreateWindow("GLUT Shapes"); ///step01-1 �n�}����
	glutDisplayFunc(display); ///step01-1 �n��ܪ������禡
	glutMainLoop(); ///step01-1 �̫�Ρu�D�n���j��v,�d�b�̫᭱
}
