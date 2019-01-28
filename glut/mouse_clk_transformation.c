/*
#include <windows.h>
#ifdef __APPLE__
#include <GLUT/glut.h>
#else
#include <GL/glut.h>
#endif

#include <stdlib.h>

#include<windows.h>
#include<gl/Gl.h>
#include<gl/glut.h>

class Point
{
public:
	GLint x, y;
};

static Point pt[2];
static int numCorners = 0;

void myInit(void)
{
	glClearColor(1, 1, 1.0, 1.0);
	glColor3f(0, 0, 0);
	glPointSize(10.0);
	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();
	gluOrtho2D(0.0, 640.0, 0.0, 480.0);
}

void myDisplay(void)
{
	glClear(GL_COLOR_BUFFER_BIT);
	glFlush();
}
void rect(void)
{
	glClear(GL_COLOR_BUFFER_BIT);
	glRecti(pt[0].x, pt[0].y, pt[1].x, pt[1].y);
	glFlush();
}
void myMouse(int button, int state, int x, int y)
{

	if (button == GLUT_LEFT_BUTTON && state == GLUT_DOWN)
	{
		pt[numCorners].x = x;
		pt[numCorners].y = 480 - y;
		glBegin(GL_POINTS);
		glVertex2i(pt[numCorners].x, pt[numCorners].y);
		glEnd();
		glFlush();
		numCorners++;
		if (numCorners == 2)
		{
			rect();
			numCorners = 0;
		}
		glFlush();
	}
}
void myKeyboard(unsigned char key, int x, int y)
{
	if ((key == 'e') || (key == 'E'))
		exit(-1);
	if ((key == 't') || (key == 'T'))
	{
		glTranslated(0, 10, 0);
		rect();
	}
	if ((key == 'b') || (key == 'B'))
	{
		glTranslated(0, -10, 0);
		rect();
	}
	if ((key == 'r') || (key == 'R'))
	{
		glTranslated(10, 0, 0);
		rect();
	}
	if ((key == 'l') || (key == 'L'))
	{
		glTranslated(-10, 0, 0);
		rect();
	}
    if ((key == 'i') || (key == 'I'))
     {
	glScaled(2,2,0);
	rect();
     }
	if ((key == 'd') || (key == 'D'))
	{
		glScalef(0.5, 0.5, 0);
		rect();
	}
	if ((key == 'a') || (key == 'B'))
	{
		glRotated(30,10,0,0);
		rect();
	}
}
int main(int argc, char** argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize(640, 480);
    glutInitWindowPosition(100, 150);
    glutCreateWindow("Transformation Assignment");
    glutDisplayFunc(myDisplay);
    glutMouseFunc(myMouse);
    glutKeyboardFunc(myKeyboard);
    myInit();
    glutMainLoop();
}
*/
