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
#include<math.h>
#define pi 3.14159
void myDisplay(void);
void mouse(int,int,int,int);
void myInit(void);
void drawCircleI(int,int,int);
void animateRadius(void);
int incr_count=0,dec_count=0,radius,X,Y;
void myInit(void){
    glClearColor(1.0,1.0,1.0,1.0);
    glColor3f(0.0,0.0,1.0);
    glPointSize(1.0);
    glLineWidth(2.0);
    gluOrtho2D(0,600,0,600);
}
void myDisplay(void){
    glClear(GL_COLOR_BUFFER_BIT);
    glFlush();
}
void mouse(int button,int state,int x,int y){
    if (incr_count>=0&&incr_count<=10){
        radius+=10;
        incr_count++;
    }
    else if((dec_count<=10 && dec_count>=0) && incr_count>10){
        radius-=10;
        dec_count++;
    }
    else if(dec_count>10&&incr_count>10){
        incr_count =1;
        radius += 10;
        dec_count = -1;
    }
    else if(dec_count == -1 && incr_count>10){
        dec_count = 1;
        radius -= 10;
}
   if (button==GLUT_LEFT_BUTTON){
        X = x;
        Y = 600-y;
		glBegin(GL_POINTS);
        glVertex2i(x,600-y);
        glEnd();
        glFlush();
        drawCircleI(x,600-y,radius);
        glFinish();
    }
}
void drawCircleI(int x,int y,int rad){
    int theta = 0,xO,yO;
    for(theta = 0;theta<=360;theta++){
        xO = rad*cos(theta)+x;
        yO = rad*sin(theta)+y;
        glBegin(GL_POINT);
        glVertex2i(xO,yO);
        glEnd();
        glFlush();
    }
    glutIdleFunc(animateRadius);
}
void animateRadius(void){
    int theta = 0,xO,yO;
    for(theta = 0;theta<=360;theta++){
        xO = radius*cos(theta)+X;
        yO = radius*sin(theta)+Y;
        glBegin(GL_LINES);
        glVertex2i(X,Y);
		glVertex2i(xO,yO);
        glEnd();
        glFlush();

    }
}
int main(int argc,char** argv){
    glutInit(&argc,argv);
    glutInitDisplayMode(GLUT_RGB|GLUT_SINGLE);
    glutInitWindowSize(600,600);
    glutInitWindowPosition(100,100);
    glutCreateWindow("Circle Animation");
    glutDisplayFunc(myDisplay);
    glutMouseFunc(mouse);
    myInit();
    glutMainLoop();
}
*/
