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
 */
#include <windows.h>
#ifdef __APPLE__
#include <GLUT/glut.h>
#else
#include <GL/glut.h>
#endif

#include <stdlib.h>                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                         [

/*void myInit(void);
void myDisplay(void);
void myMouse(int,int,int,int);
void keyboard(unsigned char,int,int);

int main(int argc, char**argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB );
    glutInitWindowSize(600,600);
    glutInitWindowPosition(100,100);
    glutCreateWindow("GLUT Introduction");
    glutDisplayFunc(myDisplay);
    glutMouseFunc(myMouse);
    glutKeyboardFunc(keyboard);
    myInit();
    glutMainLoop();

    return EXIT_SUCCESS;
}
void myMouse(int button,int state,int x,int y){
    if(button == GLUT_LEFT_BUTTON){
        glColor3f(0.0,0.0,1.0);
        int color = rand();
        color = color % 5;
        if(color==0)
            glColor3f(0.0,0.0,0.0);
        else if(color==1)
            glColor3f(0.0,1.0,0.0);
        else if(color==2)
            glColor3f(0.0,0.0,1.0);
        else if(color==3)
            glColor3f(1.0,0.0,1.0);
        glBegin(GL_POINTS);
        glVertex2i(x,600-y);
        glEnd();
        glFlush();
    }
}
void keyboard(unsigned char key,int x,int y){
    if(key==113){
        exit(0);
    }
}
void myInit(){
    glClearColor(1.0,1.0,1.0,1.0);
    glColor3f(1.0,0.0,0.0);
    glLineWidth(10);
    gluOrtho2D(0,600,0,600);
    glPointSize(10.0);
}
void myDisplay(){
    glClear(GL_COLOR_BUFFER_BIT);
    glFlush();
}*/
