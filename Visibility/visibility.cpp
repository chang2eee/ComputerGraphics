#include <GL/glut.h>
#include <GL/gl.h>
#include <Gl/glu.h>
#include <Windows.h>

void lnitvisibility() {
	glEnable(GL_CULL_FACE);
	glFrontFace(GL_CW);
	glCullFace(GL_BACK);
	glEnable(GL_DEPTH_TEST);
}
GLfloat vertices[][3] = {
	{-0.5,0.5,-0.5},{-0.5,0.5,0.5},{0.5,0.5,0.5},
	{0.5,0.5,-0.5},{-0.5,-0.5,-0.5},{-0.5,-0.5,0.5},
	{0.5,-0.5,0.5},{0.5,-0.5,-0.5}
};
GLfloat colors[][3] = {
	{1.0,0.0,0.0},{0.0,1.0,0.0},{0.0,0.0,1.0},
	{1.0,0.5,0.0},{1.0,0.0,0.5},{0.0,0.5,1.0}
};


void MyDisplay()
{
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
	glColor3f(1.0, 1.0, 0.0);
	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();
	gluLookAt(2.0, 0.5, 2.0, 0.0, 0.0, 0.0, 0.0, 1.0, 0.0);
	glBegin(GL_QUADS);
	glColor3fv(colors[0]);
	glVertex3fv(vertices[0]);
	glVertex3fv(vertices[3]);
	glVertex3fv(vertices[2]);
	glVertex3fv(vertices[1]);

	glColor3fv(colors[1]);
	glVertex3fv(vertices[1]);
	glVertex3fv(vertices[2]);
	glVertex3fv(vertices[6]);
	glVertex3fv(vertices[5]);

	glColor3fv(colors[2]);
	glVertex3fv(vertices[3]);
	glVertex3fv(vertices[7]);
	glVertex3fv(vertices[6]);
	glVertex3fv(vertices[2]);

	glColor3fv(colors[5]);
	glVertex3fv(vertices[0]);
	glVertex3fv(vertices[3]);
	glVertex3fv(vertices[7]);
	glVertex3fv(vertices[4]);

	glColor3fv(colors[4]);
	glVertex3fv(vertices[7]);
	glVertex3fv(vertices[4]);
	glVertex3fv(vertices[5]);
	glVertex3fv(vertices[6]);

	glColor3fv(colors[3]);
	glVertex3fv(vertices[4]);
	glVertex3fv(vertices[0]);
	glVertex3fv(vertices[1]);
	glVertex3fv(vertices[5]);

	glColor3fv(colors[3]);
	glVertex3f(1.0f, -0.4f, 0.3f);
	glVertex3f(-1.0f, -0.4f, 0.3f);
	glVertex3f(0.0f, 0.8f, 0.3f);
	glVertex3f(1.0f, -0.4f, 0.3f);
	glEnd();
	glutSwapBuffers();
}
void MyReshape(int w, int h) {
	glViewport(0, 0, (GLsizei)w, (GLsizei)h);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	glOrtho(-2.0, 2.0, -2.0, 2.0, -200, 100);
}

int main(int argc, char** argv)
{
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGBA | GLUT_DEPTH); //RGB 컬러 모델 사용을 사용한다.
	glutInitWindowSize(1200, 1200); //창 크기 설정해준다.
	glutInitWindowPosition(0, 0);
	glutCreateWindow("컴퓨터그래픽스 과제");
	lnitvisibility();
	glutDisplayFunc(MyDisplay);
	glutReshapeFunc(MyReshape);
	glutMainLoop();
	return 0;
}
