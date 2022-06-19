//#include <iostream>
//#include <OpenGL/OpenGL.h>
//#include <GLUT/GLUT.h>
//#include <stdlib.h>
//#include <math.h>
//using namespace std;
//
//int sw = 640;
//int sh = 480;
//
//
//void myInit(void) {
//    glClearColor(.3, .3, .3, 0.0);
//    glColor3f(1, 1, 1);
//    glPointSize(2.0);
//    glMatrixMode(GL_PROJECTION);
//    glLoadIdentity();
//    gluOrtho2D(0, (GLint)sw, 0, (GLint)sh);
//}
//class GLintPoint
//{
//public:
//    int x,y;
//};
//void house1(GLintPoint peak,GLint width,GLint height){
//    //structure
//    glBegin(GL_LINE_LOOP);
//    glVertex2i(peak.x,peak.y);
//    glVertex2i(peak.x+width/2, peak.y-height);
//    glVertex2i(peak.x+width/2, peak.y-2*height);
//    glVertex2i(peak.x-width/2, peak.y-2*height);
//    glVertex2i(peak.x-width/2, peak.y-height);
//    glEnd();
//
//    //chimney
//    glBegin(GL_LINE_STRIP);
//    glVertex2i((peak.x+(peak.x-width/2))/2, (peak.y+(peak.y-height))/2);
//    glVertex2i((peak.x+(peak.x-width/2))/2,peak.y);
//    glVertex2i(peak.x-(2*width)/5,peak.y);
//    glVertex2i(peak.x-(2*width)/5, (peak.y+4*(peak.y-height))/5);
//    glEnd();
//    
//    //door
//    glBegin(GL_LINE_STRIP);
//    glVertex2i(peak.x-(width/6), peak.y-2*height);
//    glVertex2i(peak.x-(width/6), peak.y-(height+(height/2)));
//    glVertex2i(peak.x+(width/6), peak.y-(height+(height/2)));
//    glVertex2i(peak.x+(width/6), peak.y-2*height);
//    glEnd();
//    
//    //window
//    glBegin(GL_LINE_STRIP);
//    glVertex2i(peak.x-(width/6), peak.y-2*(height/3));
//    glVertex2i(peak.x-(width/6), peak.y-height);
//    glVertex2i(peak.x+(width/6), peak.y-height);
//    glVertex2i(peak.x+(width/6), peak.y-2*(height/3));
//    glVertex2i(peak.x-(width/6), peak.y-2*(height/3));
//    glEnd();
//
//    //window cross one
//    glBegin(GL_LINE_STRIP);
//    glVertex2i(((peak.x-(width/6))+(peak.x+(width/6)))/2, peak.y-2*(height/3));
//    glVertex2i(((peak.x-(width/6))+(peak.x+(width/6)))/2, peak.y-2*(height/2));
//    glEnd();
//    
//    //window cross two
//    glBegin(GL_LINE_STRIP);
//    glVertex2i(peak.x-(width/6), ((peak.y-2*(height/3)) + peak.y-2*(height/2))/2);
//    glVertex2i(peak.x+(width/6), ((peak.y-2*(height/3)) + peak.y-2*(height/2))/2);
//    glEnd();
//}
//
//void myDisplay() {
//    glClear(GL_COLOR_BUFFER_BIT);
//    
//    house1({140,150},50,50);
//    house1({300,150},50,50);
//    house1({450,170},50,60);
//    house1({110,315},65,65);
//    house1({250,285},70,50);
//    house1({370,265},40,40);
//    house1({500,245},90,30);
//    house1({450,350},90,-50);
//    house1({310,390},70,-30);
//    house1({170,350},70,-50);
//    
//    glFlush();
//}
//int main(int argc, char** argv)
//{
//    glutInit(&argc, argv);
//    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
//    glutInitWindowSize(1024, 720);
//    glutInitWindowPosition(200, 100);
//    
//    glutCreateWindow("Triangle");
//    glutDisplayFunc(myDisplay);
//    myInit();
//    glutMainLoop();
//}
