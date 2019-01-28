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
void myInit(void);
void myDisplay(void);
int main(int argc, char** argv){
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize(600, 600);
    glutInitWindowPosition(100, 100);
    glutCreateWindow("My first program");
    glutDisplayFunc(myDisplay);
    myInit();
    glutMainLoop();
}
void myInit(void){
    glClearColor(1.0, 1.0, 1.0, 1.0);
    glPointSize(50.0);
    gluOrtho2D(0, 600, 0, 600);
}
void myDisplay(void){
    glClear(GL_COLOR_BUFFER_BIT);
    glBegin(GL_TRIANGLES);
        glColor3f(0, 0, 1);
        glVertex2i(0, 0);
        glColor3f(0, 1, 0);
        glVertex2i(300, 600);
        glColor3f(1, 0, 0);
        glVertex2i(600,0);
        glColor3f(1, 0, 0);
        glVertex2i(100, 100);
        glColor3f(0, 0, 1);
        glVertex2i(300, 500);
        glColor3f(0, 1, 0);
        glVertex2i(500, 100);
    glEnd();
    glFlush();
}*/

