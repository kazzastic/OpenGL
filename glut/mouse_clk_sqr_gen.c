/*#include <windows.h>
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
void myMouse(int, int, int, int);
void keyboard(unsigned char, int, int);
int main(int argc, char**argv){
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
	glutInitWindowSize(600, 600);
	glutInitWindowPosition(100, 100);
	glutCreateWindow("Task 3");
	glutDisplayFunc(myDisplay);
	glutMouseFunc(myMouse);
	glutKeyboardFunc(keyboard);
	myInit();
	glutMainLoop();
	return 0;
}
void myMouse(int button, int state, int x, int y){
	if (button == GLUT_LEFT_BUTTON){
		glColor3f(0.0, 0.0, 1.0);
		int color = rand();
		color = color % 5;
		if (color == 0)
			glColor3f(0, 0, 0);
		else if (color == 1)
			glColor3f(1, 0, 0);
		else if (color == 2)
			glColor3f(0, 1, 0);
		else if (color == 3)
			glColor3f(0, 0, 1);
		else if (color == 4)
			glColor3f(1, 1, 0);
glBegin(GL_POINTS);
	glVertex2i(x, 600 - y);
	glEnd();
	glFlush();
	}
}
void keyboard(unsigned char key, int x, int y){
	if (key == 113){
		exit(0);
	}
}
void myInit(void){
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
