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
	glColor3f(0.0,0.0,0.0);
	glBegin(GL_LINE_LOOP);
		glVertex2i(35,79);
		glVertex2i(35,40);
		glVertex2i(31,40);
		glVertex2i(31,79);
	glEnd();
	
	//tower between
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
	
	//mid part between
	glColor3f(1.0,0.0,0.0);
	glBegin(GL_POLYGON);
		glVertex2f(37.5,95.0);
		glVertex2f(37.5,97.0);
		glVertex2f(28.0,97.0);
		glVertex2f(28.0,95.0);
	glEnd();
	glColor3f(0.0,0.0,0.0);
	glBegin(GL_LINE_LOOP);
		glVertex2f(37.5,95.0);
		glVertex2f(37.5,97.0);
		glVertex2f(28.0,97.0);
		glVertex2f(28.0,95.0);
	glEnd();
	
	//mid part above between
	glColor3ub(85,170,255);
	glBegin(GL_POLYGON);
		glVertex2f(35.0,98.5);
		glVertex2f(37.5,97.0);
		glVertex2f(28.0,97.0);
		glVertex2f(31.0,98.5);
	glEnd();
	glColor3f(0.0,0.0,0.0);
	glBegin(GL_LINE_LOOP);
		glVertex2f(35.0,98.5);
		glVertex2f(37.5,97.0);
		glVertex2f(28.0,97.0);
		glVertex2f(31.0,98.5);
	glEnd();
	
	//tower top sphere
	glColor3ub(74,74,74);
	glPushMatrix();
	glTranslatef(33,103,0);
	glutSolidSphere(2.8,100,10);
	glPopMatrix();
	glEnd();
	//tower top part
	glColor3ub(146,146,146);
	glBegin(GL_POLYGON);
		glVertex2f(35.0,98.5);
		glVertex2f(36.0,102.5);
		glVertex2f(30.0,102.5);
		glVertex2f(31.0,98.5);
	glEnd();
	glColor3f(0.0,0.0,0.0);
	glBegin(GL_LINE_LOOP);
		glVertex2f(35.0,98.5);
		glVertex2f(36.0,102.5);
		glVertex2f(30.0,102.5);
		glVertex2f(31.0,98.5);
	glEnd();
	
	//tower antena
	glColor3f(0.0,0.0,0.0);
	glBegin(GL_LINES);
		glVertex2i(33,106);
		glVertex2i(33,116);
	glEnd();
	glColor3ub(74,74,74);
	glPushMatrix();
	glTranslatef(33,116.5,0);
	glutSolidSphere(0.7,100,10);
	glPopMatrix();
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
	
	//window 1
	glColor3f(0.0,0.0,0.0);
	glBegin(GL_LINE_LOOP);
		glVertex2i(52,41);
		glVertex2i(52,64);
		glVertex2i(60,64);
		glVertex2i(60,41);
	glEnd();
	
	//window 2
	glColor3f(0.0,0.0,0.0);
	glBegin(GL_LINE_LOOP);
		glVertex2i(64,41);
		glVertex2i(64,64);
		glVertex2i(72,64);
		glVertex2i(72,41);
	glEnd();
	
	//window 3
	glColor3f(0.0,0.0,0.0);
	glBegin(GL_LINE_LOOP);
		glVertex2i(76,41);
		glVertex2i(76,64);
		glVertex2i(84,64);
		glVertex2i(84,41);
	glEnd();
	
	//window 4
	glColor3f(0.0,0.0,0.0);
	glBegin(GL_LINE_LOOP);
		glVertex2i(88,41);
		glVertex2i(88,64);
		glVertex2i(96,64);
		glVertex2i(96,41);
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
	
	
	//aeroplane front circle
	glColor3ub(85,170,255);
	glPushMatrix();
	//glRotatef(x,1,0,0);
	glTranslatef(120,45,0);
	glutSolidSphere(2.5,100,10);
	
	glPopMatrix();
	glEnd();
	
	glColor3ub(85,85,85);
	glBegin(GL_LINES);
		glVertex2f(116.0,45.5);
		glVertex2f(124.0,45.5);
		
		glVertex2f(117.85,46.5);
		glVertex2f(122.0,46.5);
		
		glVertex2f(120.0,46.5);
		glVertex2f(120.0,45.5);
	glEnd();
	
	
	
	glColor3f(0.0,0.0,0.0);
	glBegin(GL_POLYGON);
		glVertex2f(119.0,41.5);
		glVertex2f(121.0,41.5);
		glVertex2f(121.0,40.0);
		glVertex2f(119.0,40.0);
	glEnd();
	glColor3ub(131,131,131);
	glLineWidth(3.0);
	glBegin(GL_LINES);
	
		glVertex2f(120.0,42.5);
		glVertex2f(120.0,40.0);
	glEnd();
	
	//aeroplane top wing
	
	glBegin(GL_POLYGON);
		glColor3ub(85,170,255);	
		glVertex2f(119.7,47.0);
		glColor3f(0.0,0.0,0.0);
		glVertex2i(120,56);
		glColor3ub(85,170,255);
		glVertex2f(120.3,47.0);	
	glEnd();
	
	//aeroplane left wing
	glBegin(GL_TRIANGLES);
		glColor3ub(85,170,255);	
		glVertex2f(119.0,44.0);
		glColor3f(0.0,0.0,0.0);
		glVertex2i(100,46);
		glColor3ub(85,170,255);
		glVertex2f(119.0,43.0);	
	glEnd();
	
	//aeroplane right wing
	glBegin(GL_TRIANGLES);
		glColor3ub(85,170,255);	
		glVertex2f(121.0,44.0);
		glColor3f(0.0,0.0,0.0);
		glVertex2i(140,46);
		glColor3ub(85,170,255);
		glVertex2f(121.0,43.0);	
	glEnd();
	
	
	//aeroplane left small wing
	glBegin(GL_TRIANGLES);
		glColor3ub(85,170,255);	
		glVertex2f(118.0,45.0);
		glColor3f(0.0,0.0,0.0);
		glVertex2f(113.0,46.5);
		glColor3ub(85,170,255);
		glVertex2f(118.0,46.0);	
	glEnd();
	
	//aeroplane right small wing
	glBegin(GL_TRIANGLES);
		glColor3ub(85,170,255);	
		glVertex2f(122.0,45.0);
		glColor3f(0.0,0.0,0.0);
		glVertex2f(127.0,46.5);
		glColor3ub(85,170,255);
		glVertex2f(122.0,46.0);	
	glEnd();
	
	
	//aeroplane left turbine
	glColor3ub(85,170,255);
	glPushMatrix();
	glTranslatef(115,42,0);
	glutSolidSphere(1,100,10);
	glPopMatrix();
	glEnd();
	glColor3ub(0,0,0);
	glPushMatrix();
	glTranslatef(115,42,0);
	glutSolidSphere(0.4,100,10);
	glPopMatrix();
	glEnd();
	
	//aeroplane right turbine
	glColor3ub(85,170,255);
	glPushMatrix();
	glTranslatef(125,42,0);
	glutSolidSphere(1,100,10);
	glPopMatrix();
	glEnd();
	glColor3ub(0,0,0);
	glPushMatrix();
	glTranslatef(125,42,0);
	glutSolidSphere(0.4,100,10);
	glPopMatrix();
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
