#include<stdio.h>
#include<GL/glut.h>

float x;
void timer(int e)
{
	x=x+0.5;
	glutPostRedisplay();
	glutTimerFunc(10,timer,0);
}
void scene2()
{
	glClear(GL_COLOR_BUFFER_BIT);	
	
	//building main
	// main right roof upper small
	glColor3ub(85,170,255);
	glBegin(GL_POLYGON);
		glVertex2i(97,65);
		glVertex2i(97,75);
		glVertex2i(91,75);
		glVertex2i(91,65);
	glEnd();
	
	glColor3f(0.0,0.0,0.0);
	glBegin(GL_LINES);
		glVertex2i(91,74);
		glVertex2i(97,74);
	glEnd();
	
	//roof
	//glColor3f(1.0,0.5,1.0);
	glColor3ub(146,146,146);
	glBegin(GL_POLYGON);
		glVertex2i(102,68);
		glVertex2i(37,80);
		glVertex2i(50,55);
	glEnd();
	glColor3f(0.0,0.0,0.0);
	glBegin(GL_LINE_LOOP);
		glVertex2i(102,68);
		glVertex2i(37,80);
		glVertex2i(50,55);
	glEnd();
	
	//pillar right
	glColor3ub(216,216,216);
	glBegin(GL_TRIANGLES);
		glVertex2f(48.5,35.0);
		glVertex2i(46,75);
		glVertex2i(49,74);
	glEnd();
	glColor3f(0.0,0.0,0.0);
	glBegin(GL_LINE_LOOP);
		glVertex2f(48.5,35.0);
		glVertex2i(46,75);
		glVertex2i(49,74);
	glEnd();
	//pillar left
	glColor3ub(216,216,216);
	glBegin(GL_TRIANGLES);
		glVertex2i(47,35);
		glVertex2i(40,76);
		glVertex2i(42,75);
	glEnd();
	glColor3f(0.0,0.0,0.0);
	glBegin(GL_LINE_LOOP);
		glVertex2i(47,35);
		glVertex2i(40,76);
		glVertex2i(42,75);
	glEnd();
	
	
	//tower
	glColor3ub(74,74,74);
	glBegin(GL_POLYGON);
		glVertex2i(35,79);
		glVertex2i(35,40);
		glVertex2i(31,40);
		glVertex2i(31,79);
	glEnd();
	
	glColor3ub(146,146,146);
	glBegin(GL_POLYGON);
		glVertex2f(35.5,80.0);
		glVertex2f(35.5,79.0);
		glVertex2f(30.5,79.0);
		glVertex2f(30.5,80.0);
	glEnd();
	glColor3f(0.0,0.0,0.0);
	glBegin(GL_LINE_LOOP);
		glVertex2f(35.5,80.0);
		glVertex2f(35.5,79.0);
		glVertex2f(30.5,79.0);
		glVertex2f(30.5,80.0);
	glEnd();
	
	//tower mid part
	glColor3ub(146,146,146);
	glBegin(GL_POLYGON);
		glVertex2f(35.5,80.0);
		glVertex2f(37.5,95.0);
		glVertex2f(28.0,95.0);
		glVertex2f(30.5,80.0);
	glEnd();
	glColor3f(0.0,0.0,0.0);
	glBegin(GL_LINE_LOOP);
		glVertex2f(35.5,80.0);
		glVertex2f(37.5,95.0);
		glVertex2f(28.0,95.0);
		glVertex2f(30.5,80.0);
	glEnd();
	
		
	//roof upper berth
	glColor3ub(74,74,74);
	glBegin(GL_POLYGON);
		glVertex2i(37,80);
		glVertex2i(37,85);
		glVertex2i(102,69);
		glVertex2i(102,65);
	glEnd();
	glColor3f(0.0,0.0,0.0);
	glBegin(GL_LINE_LOOP);
		glVertex2i(37,80);
		glVertex2i(37,85);
		glVertex2i(102,69);
		glVertex2i(102,65);
	glEnd();
	
	
	
	// main wall
	glColor3ub(85,170,255);
	glBegin(GL_POLYGON);
		glVertex2i(50,40);
		glVertex2i(50,65);
		glVertex2i(100,65);
		glVertex2i(100,40);
	glEnd();
	glColor3f(0.0,0.0,0.0);
	glBegin(GL_LINE_LOOP);
		glVertex2i(50,40);
		glVertex2i(50,65);
		glVertex2i(100,65);
		glVertex2i(100,40);
	glEnd();
	
	//main left small
	glColor3ub(85,170,255);
	glBegin(GL_POLYGON);
		glVertex2i(50,40);
		glVertex2i(50,41);
		glVertex2f(42.5,41.0);
		glVertex2f(42.5,40.0);
	glEnd();
	glColor3f(0.0,0.0,0.0);
	glBegin(GL_LINE_LOOP);
		glVertex2i(50,40);
		glVertex2i(50,41);
		glVertex2f(42.5,41.0);
		glVertex2f(42.5,40.0);
	glEnd();
		
	
	//main wall upper small
	glColor3f(1.0,0.0,0.0);
	glBegin(GL_POLYGON);
		glVertex2i(50,65);
		glVertex2i(50,67);
		glVertex2i(100,67);
		glVertex2i(100,65);
	glEnd();
	glColor3f(0.0,0.0,0.0);
	glBegin(GL_LINE_LOOP);
		glVertex2i(50,65);
		glVertex2i(50,67);
		glVertex2i(100,67);
		glVertex2i(100,65);
	glEnd();
	
	//road
	glColor3f(0.0,0.0,0.0);
	glBegin(GL_POLYGON);	
		glVertex2i(0,0);
		glVertex2i(0,40);
		glVertex2i(150,40);
		glVertex2i(150,0);
	glEnd();
	
	
	
	
	
	
	
	
	
	
	
	glFlush();	
}
int main(int argc,char **argv)
{
	printf("Hello");
	glutInit(&argc,argv);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
	glutInitWindowSize(1500,780);
	glutInitWindowPosition(0,0);
	glutCreateWindow("Project");
	glClearColor(1.0,1.0,1.0,0.0);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	glOrtho(0.0,150.0,0.0,150.0,0.0,200.0);
	glutDisplayFunc(scene2);
	//timer(0);
	glutMainLoop();
}
