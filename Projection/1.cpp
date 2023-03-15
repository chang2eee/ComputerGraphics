#include <GL/glut.h>
#include <GL/gl.h>
#include <Gl/glu.h>

void lnit()
{
	glClearColor(1.0, 1.0, 1.0, 1.0);
	glMatrixMode(GL_PROJECTION);
	glOrtho(-2.0, 2.0, -2.0, 2.0, 0.5, 5.0);
	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();
}

void MyDisplay()
{
	glClear(GL_COLOR_BUFFER_BIT);
	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();
	glColor3f(0.3, 0.3, 0.3); //�� ���� ���ش�.
	gluLookAt(0.0, 0.0, 0.0, 0.0, 0.0, -1.0, 1.0, 1.0, 0.0);
	glutWireTeapot(0.5);
	glFlush();
}

int main(int argc, char** argv)
{
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_RGB); //RGB �÷� �� ����� ����Ѵ�.
	glutInitWindowSize(400, 400); //â ũ�� �������ش�.
	glutInitWindowPosition(0, 0);
	glutCreateWindow("OpenGL Sample Drawing");
	glClearColor(1.0, 1.0, 1.0, 0.0); //��� �� �������Ѵ�.
	glutDisplayFunc(MyDisplay);
	glutMainLoop();
	return 0;
}