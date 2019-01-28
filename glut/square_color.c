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
int main(int argc, char** argv){
 glutInit(&argc, argv);
 glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
 glutInitWindowSize(600, 600);
 glutInitWindowPosition(100, 100);
 glutCreateWindow("Multi Color Quads");
 glutDisplayFunc(myDisplay);
 myInit();
 glutMainLoop();
}
void myInit(void){
 glClearColor(1.0, 1.0, 1.0, 1.0);
 gluOrtho2D(0, 600, 0, 600);
}
void myDisplay(void){
 glClear(GL_COLOR_BUFFER_BIT);
 glBegin(GL_QUADS);
 glColor3f(1.0,0.0,0.0);
 glVertex2i(100,100);
 glColor3f(0.0,1.0,0.0);
 glVertex2i(500,100);
 glColor3f(0.0,0.0,1.0);
 glVertex2i(500,500);
 glColor3f(0.0,0.0,0.0);
 glVertex2i(100,500);
 glEnd();
 glFlush();
}*/

