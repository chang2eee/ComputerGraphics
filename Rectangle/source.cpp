#include <gl\glut.h>

void Display() {
	glClear(GL_COLOR_BUFFER_BIT);
	glBegin(GL_POLYGON);
	glVertex3f(0.0, -1.0, 0.0);
	glVertex3f(0.0, 1.0, 0.0);
	glVertex3f(0.5, 0.5, 0.0);
	glVertex3f(-0.5, 0.5, 0.0);
	glVertex3f(0.0, 0.3, 0.0);
	glVertex3f(0.0, -0.3, 0.0);
	glEnd();
	glFlush();
}

int main() {
	glutInitWindowPosition(200, 50);
	glutInitWindowSize(250, 150);
	glutCreateWindow("OpenGL Hello World!");
	glutDisplayFunc(Display);
	glutMainLoop();
	return 0;
}