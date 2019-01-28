
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
 *
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
int main(int argc, char**argv){
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
	glutInitWindowSize(600, 600);
	glutInitWindowPosition(100, 100);
	glutCreateWindow("Shapes");
	glutDisplayFunc(myDisplay);
	myInit();
	glutMainLoop();
	return 0;
}
void myInit(void){
	glClearColor(1, 1, 1, 1);
	glColor3f(0, 0, 0);
	glLineWidth(1);
	gluOrtho2D(0, 600, 0, 600);
}
void myDisplay(void){
	glClear(GL_COLOR_BUFFER_BIT);
	glPolygonMode(GL_FRONT_AND_BACK, GL_LINE);
    glBegin(GL_POLYGON);
	glVertex2f(100, 100);
	glVertex2f(100, 200);
	glVertex2f(210, 200);
	glVertex2f(270, 150);
	glVertex2f(210, 100);
	glEnd();
	glBegin(GL_POLYGON);
	glVertex2f(380, 100);
	glVertex2f(500, 100);
	glVertex2f(550, 200);
	glVertex2f(330, 200);
	glEnd();
	glBegin(GL_POLYGON);
	glVertex2f(100, 300);
	glVertex2f(250, 300);
	glVertex2f(175,400);
	glEnd();
	glBegin(GL_POLYGON);
	glVertex2f(380, 300);
	glVertex2f(500, 300);
	glVertex2f(550, 400);
	glVertex2f(380, 400);
	glEnd();
    glFlush();
}*/
