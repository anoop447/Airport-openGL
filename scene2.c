#include<stdio.h>
#include<GL/glut.h>

float g,h;
void Landingtimer(int e)
{
	g=g+0.3;
	h=h+0.3;
	if(g>60&&h>60)
	{
		g=0;
		h=0;
	}
	glutPostRedisplay();
	glutTimerFunc(10,Landingtimer,0);
}
void road_divider(int x,int y,int z)
{

glBegin(GL_LINES);
glVertex2i(x,y);
glVertex2i(z,y);
glEnd();
}
void scene2()
{
	glClear(GL_COLOR_BUFFER_BIT);	
	glColor3f(256,256,255);
	glBegin(GL_POLYGON);
		glColor3f(0,0.5,0.6);
		glVertex2i(0,35);
		glColor3f(0,1,1);
		glVertex2i(0,150);
		glVertex2i(150,150);
		glColor3f(0,0.5,0.6);
		glVertex2i(150,35);
	glEnd();
	

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
	glLineWidth(2.0);
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
	glLineWidth(2.0);
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
	glLineWidth(2.0);
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
	glLineWidth(2.0);
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
	glLineWidth(2.0);
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
	glLineWidth(2.0);
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
	glLineWidth(2.0);
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
	glLineWidth(2.0);
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
	glLineWidth(2.0);
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
	glPushMatrix();
	glColor3f(1.0,1.0,1.0);
	//glLineWidth(3.0);
	glBegin(GL_LINE_LOOP);
		glVertex2i(52,41);
		glVertex2i(52,64);
		glVertex2i(60,64);
		glVertex2i(60,41);	
	glEnd();
	glPopMatrix();
	
	glBegin(GL_LINES);
		glVertex2i(56,41);
		glVertex2i(56,64);
		glVertex2i(52,57);
		glVertex2i(60,57);
		glVertex2i(52,49);
		glVertex2i(60,49);
	glEnd();
	
	
	//window 2
	glColor3f(1.0,1.0,1.0);
	glBegin(GL_LINE_LOOP);
		glVertex2i(64,41);
		glVertex2i(64,64);
		glVertex2i(72,64);
		glVertex2i(72,41);
	glEnd();
	
	glBegin(GL_LINES);
		glVertex2i(68,41);
		glVertex2i(68,64);
		glVertex2i(64,57);
		glVertex2i(72,57);
		glVertex2i(64,49);
		glVertex2i(72,49);
	glEnd();
	
	//window 3
	glColor3f(1.0,1.0,1.0);
	glBegin(GL_LINE_LOOP);
		glVertex2i(76,41);
		glVertex2i(76,64);
		glVertex2i(84,64);
		glVertex2i(84,41);
	glEnd();
	
	glBegin(GL_LINES);
		glVertex2i(80,41);
		glVertex2i(80,64);
		glVertex2i(76,57);
		glVertex2i(84,57);
		glVertex2i(76,49);
		glVertex2i(84,49);
	glEnd();
	
	//window 4
	glColor3f(1.0,1.0,1.0);
	glBegin(GL_LINE_LOOP);
		glVertex2i(88,41);
		glVertex2i(88,64);
		glVertex2i(96,64);
		glVertex2i(96,41);
	glEnd();
	
	glBegin(GL_LINES);
		glVertex2i(92,41);
		glVertex2i(92,64);
		glVertex2i(88,57);
		glVertex2i(96,57);
		glVertex2i(88,49);
		glVertex2i(96,49);
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
	glColor3f(0.1,0.1,0.1);
	glBegin(GL_POLYGON);	
		glVertex2i(0,0);
		glColor3f(0.3,0.3,0.3);
		glVertex2i(0,40);
		glVertex2i(150,40);
		glColor3f(0.1,0.1,0.1);
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
	//side aeroplane
	glBegin(GL_POLYGON);
	glColor3ub(85,170,255);
	glVertex2f(5,50);
	glVertex2i(5,58);
	glColor3ub(85,170,255);
	glVertex2f(25,58);	
	glVertex2f(25,50);	
	glEnd();
	
	glPushMatrix();
	glColor3ub(85,170,255);
	glTranslatef(6,54,0);
	glutSolidSphere(4,80,70);
	glPopMatrix();
	glBegin(GL_POLYGON);
	glVertex2f(25,50);
	glVertex2f(28,55.5);
	glVertex2f(28,57);
	glVertex2f(25,58);
	glEnd();
	//top wing
	glBegin(GL_POLYGON);
	glColor3f(1,0.5,0);
	glVertex2f(22,58);
    glVertex2f(24,61);
    glVertex2f(28,70);
    glVertex2f(30,70);
    glVertex2f(28,57);
	glEnd();
	glBegin(GL_LINES);
	glColor3f(0,0,0);
	glVertex2f(29.5,70);
    glVertex2f(26,57.5);
	glEnd();
	//side wing
	glBegin(GL_POLYGON);
	glColor3f(1,0.5,0);
	glVertex2f(12,51);
    glVertex2f(20,52);
    glVertex2f(28,48);
    glVertex2f(25,48);
	glEnd();
	//window
	glLineWidth(3.0);
	glColor3f(0.0,0.0,0.0);
	road_divider(8,54,9);
	road_divider(10,54,11);
	road_divider(12,54,13);
	road_divider(14,54,15);
	road_divider(16,54,17);
	road_divider(18,54,19);
	road_divider(20,54,21);
	road_divider(22,54,23);
	road_divider(24,54,25);
	glPushMatrix();
	glLineWidth(10.0);
	glColor3f(1.0,1.0,1.0);
	road_divider(0,20,20);
	road_divider(40,20,60);
	road_divider(80,20,100);
	road_divider(120,20,140);
	road_divider(0,38,150);
	road_divider(0,2,150);
	glPopMatrix();
	//Tier
	glPushMatrix();
	glBegin(GL_POLYGON);
	glColor3f(0.2,0.2,0.2);
	glVertex2f(7,50);
    glVertex2f(7.3,50);
    glVertex2f(7.3,40);
    glVertex2f(7,40);
	glEnd();
	glBegin(GL_POLYGON);
	glColor3f(0.2,0.2,0.2);
	glVertex2f(20,48.8);
    glVertex2f(20.3,48.8);
    glVertex2f(20.3,40);
    glVertex2f(20,40);
	glEnd();
	glBegin(GL_POLYGON);
	glColor3f(0.2,0.2,0.2);
	glVertex2f(22,48.5);
    glVertex2f(22.3,48.4);
    glVertex2f(22.3,40);
    glVertex2f(22,40);
	glEnd();
	glPopMatrix();
	glPushMatrix();
	glColor3f(0,0,0);
	glTranslatef(7.1,41,0);
	glutSolidSphere(1.7,100,10);
	glColor3f(1,1,1);
	glutSolidSphere(1.0,100,10);
	glPopMatrix();
	glEnd();
	glPushMatrix();
	glColor3f(0,0,0);
	glTranslatef(20.1,41,0);
	glutSolidSphere(1.7,100,10);
	glColor3f(1,1,1);
	glutSolidSphere(1.0,100,10);
	glPopMatrix();
	glEnd();
	glPushMatrix();
	glColor3f(0,0,0);
	glTranslatef(22.1,41,0);
	glutSolidSphere(1.7,100,10);
	glColor3f(1,1,1);
	glutSolidSphere(1.0,100,10);
	glPopMatrix();
	glEnd();

	//top plane
	glBegin(GL_POLYGON);
	glColor3f(256,256,256);
	glVertex2f(110+g,120+h);
    glVertex2f(130.3+g,140+h);
    glVertex2f(136+g,139+h);
    glVertex2f(137+g,136+h);
    glVertex2f(115+g,115+h);
    glVertex2f(111+g,117+h);
	glEnd();
	//outline
	glLineWidth(0.5);
	glColor3f(0,0,0);
	glBegin(GL_LINE_LOOP);
	glVertex2f(110+g,120+h);
    glVertex2f(130.3+g,140+h);
    glVertex2f(136+g,139+h);
    glVertex2f(137+g,136+h);
    glVertex2f(115+g,115+h);
    glVertex2f(111+g,117+h);
    glEnd();
	//top wing
	glBegin(GL_POLYGON);
	glColor3f(250,0,0);
	glVertex2f(120+g,129.5+h);
    glVertex2f(113+g,134+h);
    glVertex2f(108+g,138+h);
    glVertex2f(105+g,130+h);
    glVertex2f(110+g,120+h);
	glEnd();
	//side wing
	glBegin(GL_POLYGON);
	glColor3f(1,0,0);
    glVertex2f(114+g,115+h);
    glVertex2f(127+g,129+h);
    glVertex2f(122+g,112+h);
    glVertex2f(120+g,110+h);
	glEnd();
	
	glColor3f(0,0,0);
	glLineWidth(3.0);
	glBegin(GL_LINES);
	//window
	glVertex2i(130+g,134+h);
	glVertex2i(128+g,132+h);
	glVertex2i(126+g,130+h);
	glVertex2i(124+g,128+h);
	glVertex2i(122+g,126+h);
	glVertex2i(120+g,124+h);
	glVertex2i(118+g,122+h);
	glVertex2i(116+g,120+h);		
	//speed
	glVertex2i(111+g,116+h);
	glVertex2i(100+g,104+h);
	glVertex2i(111+g,114+h);
	glVertex2i(104+g,106+h);
	glVertex2i(110+g,117+h);
	glVertex2i(105+g,112+h);
	glEnd();
	
	//middle aeroplane
glBegin(GL_POLYGON);
glColor3ub(255,255,255);
glVertex2f(5+60,50+60);
glVertex2i(5+60,58+60);
glColor3ub(255,255,255+60);
glVertex2f(25+60,58+60);
glVertex2f(25+60,50+60);
glEnd();

glPushMatrix();
glColor3ub(255,255,255);
glTranslatef(6+60,54+60,0);
glutSolidSphere(4,80,70+60);
glPopMatrix();
glBegin(GL_POLYGON);
glColor3ub(255,255,255+60);
glVertex2f(25+60,50+60);
glVertex2f(28+60,55.5+60);
glVertex2f(28+60,57+60);
glVertex2f(25+60,58+60);
glEnd();
//top wing
glBegin(GL_POLYGON);
glColor3f(1,0.5,0);
glVertex2f(22+60,58+60);
    glVertex2f(24+60,61+60);
    glVertex2f(28+60,70+60);
    glVertex2f(30+60,70+60);
    glVertex2f(28+60,57+60);
glEnd();
glBegin(GL_LINES);
glColor3f(0,0,0);
glVertex2f(29.5+60,70+60);
    glVertex2f(26+60,57.5+60);
glEnd();
//side wing
glBegin(GL_POLYGON);
glColor3f(1,0.5,0);
glVertex2f(12+60,51+60);
    glVertex2f(20+60,52+60);
    glVertex2f(28+60,48+60);
    glVertex2f(25+60,48+60);
glEnd();
//window
glLineWidth(3.0);
glColor3f(0.0,0.0,0.0);
road_divider(8+60,54+60,9+60);
road_divider(10+60,54+60,11+60);
road_divider(12+60,54+60,13+60);
road_divider(14+60,54+60,15+60);
road_divider(16+60,54+60,17+60);
road_divider(18+60,54+60,19+60);
road_divider(20+60,54+60,21+60);
road_divider(22+60,54+60,23+60);
road_divider(24+60,54+60,25+60);

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
	glClearColor(0.1,0.1,0.1,0.1);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	glOrtho(0.0,150.0,0.0,150.0,0.0,200.0);
	glutDisplayFunc(scene2);
	Landingtimer(0);
	glutMainLoop();
}
