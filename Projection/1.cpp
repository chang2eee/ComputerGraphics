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
	glColor3f(0.3, 0.3, 0.3); //색 지정 해준다.
	gluLookAt(0.0, 0.0, 0.0, 0.0, 0.0, -1.0, 1.0, 1.0, 0.0);
	glutWireTeapot(0.5);
	glFlush();
}

int main(int argc, char** argv)
{
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_RGB); //RGB 컬러 모델 사용을 사용한다.
	glutInitWindowSize(400, 400); //창 크기 설정해준다.
	glutInitWindowPosition(0, 0);
	glutCreateWindow("OpenGL Sample Drawing");
	glClearColor(1.0, 1.0, 1.0, 0.0); //배경 색 랜더링한다.
	glutDisplayFunc(MyDisplay);
	glutMainLoop();
	return 0;
}