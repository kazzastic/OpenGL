#include <windows.h>
#ifdef __APPLE__
#include <GLUT/glut.h>
#else
#include <GL/glut.h>
#endif

#include <stdlib.h>
void init();
void lineSegment();
void trigonometry();
void some_para();
void lines_ew();

void init(){
    glClearColor(1.0,1.0,1.0,1.0);
    glColor3f(0.0,0.0,0.0);
    //glPointSize(50.0);
    glLineWidth(8.0);
    //glMatrixMode(GL_PROJECTION);
    gluOrtho2D(0, 600, 0, 600);
}
void lines_ew(){
    glClear(GL_COLOR_BUFFER_BIT);
    glBegin(GL_LINE_STRIP);
        glVertex2i(100, 100);
        glVertex2i(100, 545);
        glVertex2i(545, 100);
        glVertex2i(545, 545);
    glEnd();
    glFlush();
}
void lineSegment(){
    glClear(GL_COLOR_BUFFER_BIT);
    glBegin(GL_POINTS);
        glColor3f(0.0, 0.0, 0.0);
        glVertex2i(300, 300);

        glColor3f(1.0, 0.0, 0.0);
        glVertex2i(350, 350);

        glColor3f(0.0, 0.0, 1.0);
        glVertex2i(250, 250);

        glColor3f(0.0, 1.0, 0.0);
        glVertex2i(250, 350);

        glColor3f(2.0, 1.0, 0.0);
        glVertex2i(350, 250);
    glEnd();
    glFlush();
}
void trigonometry(){
    glClear(GL_COLOR_BUFFER_BIT);
    glBegin(GL_TRIANGLES);
        glVertex2i(0, 0);
        glVertex2i(200, 0);
        glVertex2i(100, 200);
    glEnd();
}

void some_para(){
    glClear(GL_COLOR_BUFFER_BIT);
    glBegin(GL_TRIANGLE_STRIP);
        glVertex2i(0, 0);
        glVertex2i(200, 0);
        glVertex2i(100, 200);

        glColor3f(1.0, 0.0, 0.0);
        glVertex2i(300, 200);
    glEnd();
}
int main(int argc, char**argv){
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize(600, 600);
    glutInitWindowPosition(100, 100);
    glutCreateWindow("A New Thing");
    glutDisplayFunc(lineSegment);
    init();
    glutMainLoop();
}
