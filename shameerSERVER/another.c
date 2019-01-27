#include <windows.h>
#ifdef __APPLE__
#include <GLUT/glut.h>
#else
#include <GL/glut.h>
#endif

#include <stdlib.h>
void init_lineEW();
void init_boxes();
void lineSegment();
void trigonometry();
void some_para();
void lines_ew();
void boxes();
void weird_lines();
void init_weird();

void init_lineEW(){
    glClearColor(1.0,1.0,1.0,1.0);
    glColor3f(0.0,0.0,0.0);
    glLineWidth(8.0);
    gluOrtho2D(0, 600, 0, 600);
}
void init_lineSeg(){
    glClearColor(1.0, 1.0, 1.0, 1.0);
    glColor3f(0.0, 0.0, 0.0);
    glLineWidth(10.0);
    gluOrtho2D(0, 600, 0, 600);
}
void init_boxes(){
    glClearColor(1.0, 1.0, 1.0, 1.0);
    glPointSize(50.0);
    gluOrtho2D(0, 600, 0, 600);
}
void init_weird(){
    glClearColor(1.0, 1.0, 1.0, 1.0);
    glColor3f(0.0, 0.0, 0.0);
    glLineWidth(5.0);
    gluOrtho2D(0, 600, 0, 600);
}
void weird_lines(){
    glClear(GL_COLOR_BUFFER_BIT);
    glBegin(GL_LINE_LOOP);
        glVertex2i(100, 0);
        glVertex2i(100,400);
        glVertex2i(100, 400);
        glVertex2i(400, 0);
        glVertex2i(400, 0);
        glVertex2i(400, 400);
    glEnd();
    glFlush();
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
void boxes(){
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
void lineSegment(){
    glClear(GL_COLOR_BUFFER_BIT);
    glBegin(GL_LINES);
        glVertex2i(0, 600);
        glVertex2i(600, 0);
    glEnd();
    glFlush();
}
int main(int argc, char**argv){
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize(600, 600);
    glutInitWindowPosition(100, 100);
    glutCreateWindow("A New Thing");
    glutDisplayFunc(weird_lines);
    init_weird();
    glutMainLoop();
}
