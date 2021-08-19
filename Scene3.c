#include<stdio.h>
#include<GL/glut.h>
float a=0,b=0,c=0,d=0,e=0;
void runway();

void update(int value)
{
	a+=1.0;	//Plane position takeoff on x axis
	b-=1.0;	//Road Strip backward movement
	c+=1;	//take off at certain angle on y axis
	if(b<=-78.0)// moving of run way
		b=0.0;
	if(a>150 && c>150)
	{
		a=0;
		c=0;
	}
	glutPostRedisplay();
	glutTimerFunc(100,update,0);//delay
}
void sky3()
{
glBegin(GL_POLYGON);
glColor3f(0,0.5,0.6);
glVertex2f(0.0,40.0);
glColor3f(0,1,1);
glVertex2f(0.0,150.0);
glVertex2f(150.0,150.0);
glColor3f(0,0.5,0.6);
glVertex2f(150.0,40.0);
glEnd();	
}

void scene3(void)
{
glClear(GL_COLOR_BUFFER_BIT);
sky3();
runway();
glPushMatrix();
glTranslated(a,c,0.0);
glColor3f(1.0,1.0,1.0);
//rectangular body
glBegin(GL_POLYGON);
glVertex2f(0.0,30.0);
glVertex2f(0.0,55.0);
glVertex2f(80.0,55.0);
glVertex2f(80.0,30.0);
glEnd();
glPopMatrix();
//outline to body
glPushMatrix();
glTranslated(a,c,0.0);
glColor3f(0.0,0.0,0.0);
glBegin(GL_LINE_LOOP);
glVertex2f(0.0,30.0);
glVertex2f(0.0,55.0);
glVertex2f(80.0,55.0);
glVertex2f(80.0,30.0);
glEnd();
glPopMatrix();
//upper triangle 
glPushMatrix();
glTranslated(a,c,0.0);
glColor3f(1.0,1.0,1.0);
glBegin(GL_POLYGON);
glVertex2f(80.0,55.0);
glVertex2f(95.0,52.0);
glVertex2f(100.0,47.0);
glVertex2f(100.0,42.0);
glVertex2f(80.0,40.0);
glEnd();
glPopMatrix();
//outline of upper triangle plane
glPushMatrix();
glTranslated(a,c,0.0);
glColor3f(0.0,0.0,0.0);
glBegin(GL_LINE_LOOP);
glVertex2f(80.0,55.0);
glVertex2f(95.0,52.0);
glVertex2f(100.0,47.0);
glVertex2f(100.0,42.0);
glVertex2f(80.0,40.0);
glEnd();
glPopMatrix();

//lower triangle
glPushMatrix();
glTranslated(a,c,0.0);
glColor3f(1.0,0.0,0.0);
glBegin(GL_POLYGON);
glVertex2f(80.0,40.0);
glVertex2f(100.0,41.5);
glVertex2f(100.0,38.0);
glVertex2f(95.0,33.0);
glVertex2f(80.0,30.0);
glEnd();
glPopMatrix();
//outline for lower triangle
glPushMatrix();
glTranslated(a,c,0.0);
glColor3f(0.0,0.0,0.0);
glBegin(GL_LINE_LOOP);
glVertex2f(80.0,40.0);
glVertex2f(100.0,41.5);
glVertex2f(100.0,38.0);
glVertex2f(95.0,33.0);
glVertex2f(80.0,30.0);
glEnd();
glPopMatrix();

//back wing
glPushMatrix();
glTranslated(a,c,0.0);
glColor3f(1.0,0.0,0.0);
glBegin(GL_POLYGON);
glVertex2f(0.0,55.0);
glVertex2f(0.0,80.0);
glVertex2f(7.0,80.0);
glVertex2f(30.0,55.0);
glEnd();
glPopMatrix();
//outline to backwing
glPushMatrix();
glTranslated(a,c,0.0);
glColor3f(0.0,0.0,0.0);
glBegin(GL_LINE_LOOP);
glVertex2f(0.0,55.0);
glVertex2f(0.0,80.0);
glVertex2f(7.0,80.0);
glVertex2f(30.0,55.0);
glEnd();
glPopMatrix();
//left side wing
glPushMatrix();
glTranslated(a,c,0.0);
glColor3f(1.0,0.0,0.0);
glBegin(GL_POLYGON);
glVertex2f(35.0,55.0);
glVertex2f(30.0,70.0);
glVertex2f(35.0,70.0);
glVertex2f(60.0,55.0);
glEnd();
glPopMatrix();
//outline to left wing
glPushMatrix();
glTranslated(a,c,0.0);
glColor3f(0.0,0.0,0.0);
glBegin(GL_LINE_LOOP);
glVertex2f(35.0,55.0);
glVertex2f(30.0,70.0);
glVertex2f(35.0,70.0);
glVertex2f(60.0,55.0);
glEnd();
glPopMatrix();

//rightside wing
glPushMatrix();
glTranslated(a,c,0.0);
glColor3f(1.0,0.0,0.0);
glBegin(GL_POLYGON);
glVertex2f(40.0,40.0);
glVertex2f(60.0,40.0);
glVertex2f(30.0,15.0);
glVertex2f(20.0,15.0);
glEnd();
glPopMatrix();
glFlush();
//outline to rightside wing
glPushMatrix();
glTranslated(a,c,0.0);
glColor3f(0.0,0.0,0.0);
glBegin(GL_LINE_LOOP);
glVertex2f(40.0,40.0);
glVertex2f(60.0,40.0);
glVertex2f(30.0,15.0);
glVertex2f(20.0,15.0);
glEnd();
glPopMatrix();

glutSwapBuffers();
}



void runway()
{
//road
glColor3f(0.1,0.1,0.1);
glBegin(GL_POLYGON);
glVertex2f(0.0,0.0);
glVertex2f(0.0,50.0);
glVertex2f(150.0,50.0);
glVertex2f(150.0,0.0);
glEnd();
glPopMatrix();

glPushMatrix();
glTranslated(b,0.0,0.0);
glColor3f(1.0,1.0,1.0);
glBegin(GL_POLYGON);//white strips on road
glVertex2f(0.0,20.0);
glVertex2f(8.0,30.0);
glVertex2f(28.0,30.0);
glVertex2f(20.0,20.0);
glEnd();
glPopMatrix();

glPushMatrix();
glTranslated(b,0.0,0.0);
glColor3f(1.0,1.0,1.0);
glBegin(GL_POLYGON);
glVertex2f(40.0,20.0);
glVertex2f(48.0,30.0);
glVertex2f(68.0,30.0);
glVertex2f(60.0,20.0);
glEnd();
glPopMatrix();

glPushMatrix();
glTranslated(b,0.0,0.0);
glColor3f(1.0,1.0,1.0);
glBegin(GL_POLYGON);
glVertex2f(80.0,20.0);
glVertex2f(88.0,30.0);
glVertex2f(108.0,30.0);
glVertex2f(100.0,20.0);
glEnd();
glPopMatrix();

glPushMatrix();
glTranslated(b,0.0,0.0);
glColor3f(1.0,1.0,1.0);
glBegin(GL_POLYGON);
glVertex2f(120.0,20.0);
glVertex2f(128.0,30.0);
glVertex2f(148.0,30.0);
glVertex2f(140.0,20.0);
glEnd();
glPopMatrix();

glPushMatrix();
glTranslated(b,0.0,0.0);
glColor3f(1.0,1.0,1.0);
glBegin(GL_POLYGON);
glVertex2f(160.0,20.0);
glVertex2f(168.0,30.0);
glVertex2f(188.0,30.0);
glVertex2f(180.0,20.0);
glEnd();
glPopMatrix();

glPushMatrix();
glTranslated(b,0.0,0.0);
glColor3f(1.0,1.0,1.0);
glBegin(GL_POLYGON);
glVertex2f(200.0,20.0);
glVertex2f(208.0,30.0);
glVertex2f(228.0,30.0);
glVertex2f(220.0,20.0);
glEnd();
glPopMatrix();
}




int main(int argc, char* argv[])
{
glutInit(&argc, argv);
glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB);
glutInitWindowSize(1500.0,780.0);
glutInitWindowPosition(0,0);
glutCreateWindow("Airport");
glutDisplayFunc(display);
glMatrixMode(GL_PROJECTION);
glLoadIdentity();
gluOrtho2D(0.0,150.0,0.0,150.0);
glutTimerFunc(100,update,0);
glutMainLoop();
return 0;
}




///second



#include<stdio.h>
#include<GL/glut.h>
float a1=0,b1=0,c1=0,d1=0,e1=0,tier=0;
void runway();
void update(int value)
{
	a1+=0.5;	
	b1-=1.0;	
	c1+=1;	
	if(b1<=-78.0)
		b1=0.0;
	if(c1>70)
	{
		c1=70;
		tier=1;
	}
	glutPostRedisplay();
	glutTimerFunc(100,update,0);//delay
}
void sky3()
{
glBegin(GL_POLYGON);
glColor3f(0,0.5,0.6);
glVertex2f(0.0,40.0);
glColor3f(0,1,1);
glVertex2f(0.0,150.0);
glVertex2f(150.0,150.0);
glColor3f(0,0.5,0.6);
glVertex2f(150.0,40.0);
glEnd();	
}
void scene3(void)
{
glClear(GL_COLOR_BUFFER_BIT);
sky3();
runway();
glLineWidth(1.0);
glPushMatrix();
glTranslated(a1,-c1,0.0);
glColor3f(0.0,0.5,1.0);
//rectangular body
glBegin(GL_POLYGON);
glVertex2f(0.0,30+80.0);
glColor3f(1.0,1.5,1.0);
glVertex2f(0.0,55+80.0);
glColor3f(0.0,0.5,1.0);
glVertex2f(80.0,55+80.0);
glColor3f(1.0,1.5,1.0);
glVertex2f(80.0,30+80.0);
glEnd();
glPopMatrix();
//outline to body
glPushMatrix();
glTranslated(a1,-c1,0.0);
glColor3f(0.0,0.0,0.0);
glBegin(GL_LINE_LOOP);
glVertex2f(0.0,30+80.0);
glVertex2f(0.0,55+80.0);
glVertex2f(80.0,55+80.0);
glVertex2f(80.0,30+80.0);
glEnd();
glPopMatrix();
//upper triangle 
glPushMatrix();
glTranslated(a1,-c1,0.0);
glColor3f(0.0,0.5,1.0);
glBegin(GL_POLYGON);
glVertex2f(80.0,55+80.0);
glVertex2f(95.0,52+80.0);
glColor3f(1.0,1.5,1.0);
glVertex2f(100.0,47+80.0);
glColor3f(0.0,0.5,1.0);
glVertex2f(100.0,42+80.0);
glVertex2f(80.0,40+80.0);
glEnd();
glPopMatrix();
//outline of upper triangle plane
glPushMatrix();
glTranslated(a1,-c1,0.0);
glColor3f(0.0,0.0,0.0);
glBegin(GL_LINE_LOOP);
glVertex2f(80.0,55+80.0);
glVertex2f(95.0,52+80.0);
glVertex2f(100.0,47+80.0);
glVertex2f(100.0,42+80.0);
glVertex2f(80.0,40+80.0);
glEnd();
glPopMatrix();

//lower triangle
glPushMatrix();
glTranslated(a1,-c1,0.0);
glColor3f(1.0,0.5,0.3);
glBegin(GL_POLYGON);
glVertex2f(80.0,40+80.0);
glVertex2f(100.0,41.5+80);
glVertex2f(100.0,38.0+80);
glVertex2f(95.0,33.0+80);
glVertex2f(80.0,30.0+80);
glEnd();
glPopMatrix();
//outline for lower triangle
glPushMatrix();
glTranslated(a1,-c1,0.0);
glColor3f(0.0,0.0,0.0);
glBegin(GL_LINE_LOOP);
glVertex2f(80.0,40.0+80);
glVertex2f(100.0,41.5+80);
glVertex2f(100.0,38.0+80);
glVertex2f(95.0,33.0+80);
glVertex2f(80.0,30.0+80);
glEnd();
glPopMatrix();

//back wing
glPushMatrix();
glTranslated(a1,-c1,0.0);
glColor3f(1.0,0.5,0.3);
glBegin(GL_POLYGON);
glVertex2f(0.0,55.0+80);
glVertex2f(0.0,80.0+80);
glVertex2f(7.0,80.0+80);
glVertex2f(30.0,55.0+80);
glEnd();
glPopMatrix();
//outline to backwing
glPushMatrix();
glTranslated(a1,-c1,0.0);
glColor3f(0.0,0.0,0.0);
glBegin(GL_LINE_LOOP);
glVertex2f(0.0,55.0+80);
glVertex2f(0.0,80.0+80);
glVertex2f(7.0,80.0+80);
glVertex2f(30.0,55.0+80);
glEnd();
glPopMatrix();
//left side wing
glPushMatrix();
glTranslated(a1,-c1,0.0);
glColor3f(1.0,0.5,0.0);
glBegin(GL_POLYGON);
glVertex2f(35.0,55.0+80);
glVertex2f(30.0,70.0+80);
glVertex2f(35.0,70.0+80);
glVertex2f(60.0,55.0+80);
glEnd();
glPopMatrix();
//outline to left wing
glPushMatrix();
glTranslated(a1,-c1,0.0);
glColor3f(0.0,0.0,0.0);
glBegin(GL_LINE_LOOP);
glVertex2f(35.0,55.0+80);
glVertex2f(30.0,70.0+80);
glVertex2f(35.0,70.0+80);
glVertex2f(60.0,55.0+80);
glEnd();
glPopMatrix();

//rightside wing
glPushMatrix();
glTranslated(a1,-c1,0.0);
glColor3f(1.0,0.5,0.0);
glBegin(GL_POLYGON);
glVertex2f(40.0,40.0+80);
glVertex2f(60.0,40.0+80);
glVertex2f(30.0,15.0+80);
glVertex2f(20.0,15.0+80);
glEnd();
glPopMatrix();

//outline to rightside wing
glPushMatrix();
glTranslated(a1,-c1,0.0);
glColor3f(0.0,0.0,0.0);
glBegin(GL_LINE_LOOP);
glVertex2f(40.0,40.0+80);
glVertex2f(60.0,40.0+80);
glVertex2f(30.0,15.0+80);
glVertex2f(20.0,15.0+80);
glEnd();
glPopMatrix();
//tier
if(tier==1)
{          
glLineWidth(5.0);
glPushMatrix();
glBegin(GL_LINES);
glColor3f(0.2,0.2,0.2);
glVertex2f(115+a1-38,40);
glVertex2f(115+a1-38,30);
glVertex2f(115+a1-100,40);
glVertex2f(115+a1-100,30);
glVertex2f(115+a1-101,40);
glVertex2f(115+a1-101,30);
glEnd();
glPopMatrix();

glPushMatrix();
glColor3f(0,0,0);
	glTranslatef(115+a1-38,30,0);
	glutSolidSphere(3,100,10);
    glPopMatrix();
	glPushMatrix();
	glTranslatef(115+a1-38,30,0);
	glColor3f(1,1,1);
	glutSolidSphere(1.5,100,10);
glPopMatrix();

glPushMatrix();
glColor3f(0,0,0);
	glTranslatef(115+a1-101,30,0);
	glutSolidSphere(3,100,10);
	glPopMatrix();
	glPushMatrix();
	glTranslatef(115+a1-101,30,0);
	glColor3f(1,1,1);
	glutSolidSphere(1.5,100,10);
glPopMatrix();

glPushMatrix();
glColor3f(0,0,0);
	glTranslatef(115+a1-100,30,0);
	glutSolidSphere(3,100,10);
	glPopMatrix();
	glPushMatrix();
	glTranslatef(115+a1-100,30,0);
	glColor3f(1,1,1);
	glutSolidSphere(1.5,100,10);
glPopMatrix();
}
glutSwapBuffers();
glFlush();
}


void runway()
{
//road
glColor3f(0.1,0.1,0.1);
glBegin(GL_POLYGON);
glVertex2f(0.0,0.0);
glVertex2f(0.0,50.0);
glVertex2f(150.0,50.0);
glVertex2f(150.0,0.0);
glEnd();
glPopMatrix();

glPushMatrix();
glTranslated(b1,0.0,0.0);
glColor3f(1.0,1.0,1.0);
glBegin(GL_POLYGON);//white strips on road
glVertex2f(0.0,20.0);
glVertex2f(8.0,30.0);
glVertex2f(28.0,30.0);
glVertex2f(20.0,20.0);
glEnd();
glPopMatrix();

glPushMatrix();
glTranslated(b1,0.0,0.0);
glColor3f(1.0,1.0,1.0);
glBegin(GL_POLYGON);
glVertex2f(40.0,20.0);
glVertex2f(48.0,30.0);
glVertex2f(68.0,30.0);
glVertex2f(60.0,20.0);
glEnd();
glPopMatrix();

glPushMatrix();
glTranslated(b1,0.0,0.0);
glColor3f(1.0,1.0,1.0);
glBegin(GL_POLYGON);
glVertex2f(80.0,20.0);
glVertex2f(88.0,30.0);
glVertex2f(108.0,30.0);
glVertex2f(100.0,20.0);
glEnd();
glPopMatrix();

glPushMatrix();
glTranslated(b1,0.0,0.0);
glColor3f(1.0,1.0,1.0);
glBegin(GL_POLYGON);
glVertex2f(120.0,20.0);
glVertex2f(128.0,30.0);
glVertex2f(148.0,30.0);
glVertex2f(140.0,20.0);
glEnd();
glPopMatrix();

glPushMatrix();
glTranslated(b1,0.0,0.0);
glColor3f(1.0,1.0,1.0);
glBegin(GL_POLYGON);
glVertex2f(160.0,20.0);
glVertex2f(168.0,30.0);
glVertex2f(188.0,30.0);
glVertex2f(180.0,20.0);
glEnd();
glPopMatrix();

glPushMatrix();
glTranslated(b1,0.0,0.0);
glColor3f(1.0,1.0,1.0);
glBegin(GL_POLYGON);
glVertex2f(200.0,20.0);
glVertex2f(208.0,30.0);
glVertex2f(228.0,30.0);
glVertex2f(220.0,20.0);
glEnd();
glPopMatrix();
}




int main(int argc, char* argv[])
{
glutInit(&argc, argv);
glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB);
glutInitWindowSize(1500.0,780.0);
glutInitWindowPosition(0,0);
glutCreateWindow("Airport");
glutDisplayFunc(scene3);
glMatrixMode(GL_PROJECTION);
glLoadIdentity();
glOrtho(0.0,150.0,0.0,150.0,0,200);
glutTimerFunc(100,update1,0);
glutMainLoop();
return 0;
}
