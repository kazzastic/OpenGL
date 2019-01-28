/*
 * GLUT Shapes Demo
 *
 * Written by Nigel Stewart November 2003
 *
 * This program is test harness for the sphere, cone
 * and torus shapes in GLUT.
 *
 * Spinning wireframe and smooth shaded shapes are
 * displayed until the ESC or q key is pressed.  The
 * number of geometry stacks and slices can be adjusted
 * using the + and - keys.

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
#include<windows.h>
#include<gl/Gl.h>
#include<gl/glut.h>
void myInit(void);
void myDisplay(void);
void myMouse(int, int, int, int);
int main(int argc, char**argv){
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
	glutInitWindowSize(600, 600);
	glutInitWindowPosition(100, 100);
	glutCreateWindow("POLYGON USING MOUSE CLICK");
	glutDisplayFunc(myDisplay);
	glutMouseFunc(myMouse);
	myInit();
	glutMainLoop();
	return 0;
}
void myMouse(int button, int state, int x, int y){
	if (button == GLUT_LEFT_BUTTON)
	{
		glColor3f(0.0, 0.0, 1.0);
		glBegin(GL_POLYGON);
		glVertex2i(x,600-y);
		glVertex2f(x+150,600-y);
		glVertex2f(x,300-y);
		glVertex2f(x+150, 300-y);

		glEnd();
		glFlush();
	}
	else{
		exit(1);
	}
}
void myInit(void)
{
	glClearColor(1, 1, 1, 1);
	glColor3f(0, 0, 0);
	gluOrtho2D(0, 600, 0, 600);
	glPointSize(10.0);
}
void myDisplay(void)
{
	glClear(GL_COLOR_BUFFER_BIT);
	glFlush();
}
*/
