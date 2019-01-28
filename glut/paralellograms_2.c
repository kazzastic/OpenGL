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
void display(void);
void init(void);
int main(int argc, char ** argv){
    glutInit(&argc,argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize(600,600);
    glutInitWindowPosition(50,50);
    char title[50]="My Program";
    glutCreateWindow(title);
    glutDisplayFunc(display);
    init();
    glutMainLoop();
}
void init(){
    glClearColor(1.0,1.0,1.0,1.0);
    glColor3f(0.0,0.0, 0.0);
    glLineWidth(1.0); //defines line width
    gluOrtho2D(0,600,0,600);
}
void display(){
    glClear(GL_COLOR_BUFFER_BIT);
    int x=100;
    glBegin(GL_TRIANGLE_STRIP);
        glColor3f(0.0,0.0,0.0);
        glVertex2i(x,100);
        glVertex2i(x+100,100);
        glVertex2i(x+50,200);
        glColor3f(0.0,0.0,1.0);
        glVertex2i(x+150,200);
        glColor3f(1.0,0.0,0.0);
        glVertex2i(x+100,300);
        glColor3f(0.0,1.0,0.0);
        glVertex2i(x+200,300);
    glEnd();
    x=350;
    glBegin(GL_TRIANGLE_STRIP);
        glColor3f(1.0,0.0,1.0);
        glVertex2i(x,100);
        glVertex2i(x+100,100);
        glVertex2i(x+50,200);
        glColor3f(0.0,0.0,1.0);
        glVertex2i(x+150,200);
        glColor3f(1.0,0.0,0.0);
        glVertex2i(x+100,300);
        glColor3f(0.0,1.0,0.0);
        glVertex2i(x+200,300);
    glEnd();
    glFlush();
}
*/

