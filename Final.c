#include<stdio.h>
#include<GL/glut.h>
float n=18,m=70,l=0,k=120;
float a=0,b=0,c=0,d=0,e=0,g=0,i=0,h=0,j=0;
float a1=0,b1=0,c1=0,d1=0,e1=0,tier=0;
int slide=0;
void runway();
void planetimer(int e)
{
if(slide==1)	
n=n-1;
else
float n=18,m=70,l=0,k=120;
glutPostRedisplay();
glutTimerFunc(100,planetimer,0);
if(n==-50)
{
n=18;	
}	
}
void suntimer(int e)
{
if(slide==1)	
m=m+0.5;
if(slide!=1)
float m=70;
glutPostRedisplay();
glutTimerFunc(100,suntimer,0);	
}

void bustimer(int e)
{
if(slide==1)	
l=l+1;
else
float n=18,m=70,l=0,k=120;
glutPostRedisplay();
glutTimerFunc(100,bustimer,0);
if(l==170)
{
l=0;	
}	
}

void cartimer(int e)
{
if(slide==1)	
k=k-1;
glutPostRedisplay();
glutTimerFunc(100,cartimer,0);
if(k==-10)
{
k=140;	
}	
}
void Landingtimer(int e)
{
	if(slide==2){
	g=g+0.3;
	h=h+0.3;
	}
	if(g>60&&h>60)
	{
		g=0;
		h=0;
	}
	glutPostRedisplay();
	glutTimerFunc(10,Landingtimer,0);
}
void middletimer(int e)
{
	if(slide==2){
	i=i+0.4;}
	//j=j+1;
	if(i>150)
		i=0;j=0;
	glutPostRedisplay();
	glutTimerFunc(10,middletimer,0);
}
void scene3timer(int value)
{
	if(slide==3 || slide==4)
	{
	a+=0.2;	//takeoff on x axis
	b-=1.0;	//Road backward movement
	c+=0.3;	//take off on y axis
	if(b<=-78.0)// moving of run way
		b=0.0;
	if(a>10 && c>10){
		a+=3;
		c+=3;
	}
	}
	if(a>150 && c>150)
	{
	//	a=0;
	//	c=0;
	}
	glutPostRedisplay();
	glutTimerFunc(100,scene3timer,0);
}
void update(int value)
{
	if(slide==4)
	{
	a1+=1.0;	
	b1-=1.0;	
	c1+=1;
	
	if(b1<=-78.0)
		b1=0.0;
	if(c1>70)
	{
		c1=70;
		tier=1;
	}
}
	glutPostRedisplay();
	glutTimerFunc(100,update,0);
}
//sky function
void sky()
{
	if(m<160)
	{
	glColor3f(0.6,0.9,0.9);
	glLineWidth(3.0);
	glBegin(GL_POLYGON);
	glVertex3i(0,60,0);
	glColor3f(0.6,0.8,1.0);
	glVertex3i(0,150,0);
	glColor3f(0.6,0.6,1.0);
	glVertex3i(150,150,0);
	glColor3f(0.6,0.9,0.9);
	glVertex3i(150,60,0);
	glEnd();
	}
else{
	glColor3f(0.0,0.0,0.4);
	glLineWidth(3.0);
	glBegin(GL_POLYGON);
	glVertex3i(0,60,0);
	glColor3f(0.0,0.0,0.2);
	glVertex3i(0,150,0);
	glVertex3i(150,150,0);
	glColor3f(0.0,0.0,0.4);
	glVertex3i(150,60,0);
	glEnd();
	}
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
void backcloud()
{
glPushMatrix();
    glTranslated(a/5,0,0.0);
	glColor3f(1.0,1.0,1.0);
	glTranslatef(50.0,120,0);
	glutSolidSphere(8,30,20);
	glPopMatrix();
	glPushMatrix();
	glTranslated(a/5,0,0.0);
	glColor3f(1.0,1.0,1.0);
	glTranslatef(60.0,123,0);
	glutSolidSphere(8,30,20);
	glPopMatrix();	
		glPushMatrix();
		glTranslated(a/5,0,0.0);
	glColor3f(1.0,1.0,1.0);
	glTranslatef(50.0,130,0);
	glutSolidSphere(8,30,20);
	glPopMatrix();
			glPushMatrix();
			glTranslated(a/5,0,0.0);
	glColor3f(1.0,1.0,1.0);
	glTranslatef(120.0,130,0);
	glutSolidSphere(8,30,20);
	glPopMatrix();
			glPushMatrix();
			glTranslated(a/5,0,0.0);
	glColor3f(1.0,1.0,1.0);
	glTranslatef(130.0,133,0);
	glutSolidSphere(8,30,20);
	glPopMatrix();
			glPushMatrix();
			glTranslated(a/5,0,0.0);
	glColor3f(1.0,1.0,1.0);
	glTranslatef(129.0,123,0);
	glutSolidSphere(8,30,20);
	glPopMatrix();
				glPushMatrix();
			glTranslated(a/5,0,0.0);
	glColor3f(1.0,1.0,1.0);
	glTranslatef(10.0,140,0);
	glutSolidSphere(8,30,20);
	glPopMatrix();
				glPushMatrix();
			glTranslated(a/5,0,0.0);
	glColor3f(1.0,1.0,1.0);
	glTranslatef(3.0,130,0);
	glutSolidSphere(8,30,20);
	glPopMatrix();
	
			glPushMatrix();
			glTranslated(a/5,0,0.0);
	glColor3f(1.0,1.0,1.0);
	glTranslatef(13.0,134,0);
	glutSolidSphere(8,30,20);
	glPopMatrix();
}
void frontcloud()
{
    glPushMatrix();
    glTranslated(a/10,0,0.0);
	glColor3f(1.0,1.0,1.0);
	glTranslatef(30.0,90,0);
	glutSolidSphere(8,30,20);
	glPopMatrix();
	   glPushMatrix();
    glTranslated(a/10,0,0.0);
	glColor3f(1.0,1.0,1.0);
	glTranslatef(38.0,100,0);
	glutSolidSphere(8,30,20);
	glPopMatrix();	
		   glPushMatrix();
    glTranslated(a/10,0,0.0);
	glColor3f(1.0,1.0,1.0);
	glTranslatef(42.0,90,0);
	glutSolidSphere(8,30,20);
	glPopMatrix();
	
	  glPushMatrix();
    glTranslated(a/10,0,0.0);
	glColor3f(1.0,1.0,1.0);
	glTranslatef(100.0,90,0);
	glutSolidSphere(8,30,20);
	glPopMatrix();
	   glPushMatrix();
    glTranslated(a/10,0,0.0);
	glColor3f(1.0,1.0,1.0);
	glTranslatef(108.0,100,0);
	glutSolidSphere(8,30,20);
	glPopMatrix();	
		   glPushMatrix();
    glTranslated(a/10,0,0.0);
	glColor3f(1.0,1.0,1.0);
	glTranslatef(112.0,90,0);
	glutSolidSphere(8,30,20);
	glPopMatrix();
}
void ground()
{
    glColor3f(0.7,0.78,0.78);
	glLineWidth(3.0);
	glBegin(GL_POLYGON);
	glVertex3i(0,35,0);
	glVertex3i(0,60,0);
	glVertex3i(150,60,0);
	glVertex3i(150,35,0);
	glEnd();	
}
void Building(float a,float b,float c,float d)
{
	glLineWidth(3.0);
	glBegin(GL_POLYGON);
	glVertex3f(a,b,0);
	glVertex3f(a,c,0);
	glVertex3f(d,c,0);
	glVertex3f(d,b,0);
	glEnd();
}
void VerticalLine(float a,float b,float c)
{
	glLineWidth(7.0);
	glBegin(GL_LINES);
	glVertex3f(a,b,0);
	glVertex3f(a,c,0);
	glEnd();
	
}
void HorizontalLine(float a,float b,float c)
{
	
	glBegin(GL_LINES);
	glVertex3f(a,c,0);
	glVertex3f(b,c,0);
	glEnd();
	
}
void top1()
{
	glBegin(GL_POLYGON);
	glVertex3f(10,100,0);
	glVertex3f(6,110,0);
	glVertex3f(130,110,0);
	glVertex3f(130,100,0);
	glEnd(); 	
}
void top2()
{
	glBegin(GL_POLYGON);
	glVertex3f(6,110,0);
	glVertex3f(2,115,0);
	glVertex3f(135,115,0);
	glVertex3f(135,110,0);
	glEnd(); 	
}
void triangle()
{
	glBegin(GL_POLYGON);
	glVertex3f(50,115,0);
	glVertex3f(50,125,0);
	glVertex3f(80,115,0);
	glEnd(); 
	//curve
	glBegin(GL_POLYGON);
	glColor3f(1.0,1.0,1.0);
	glVertex3f(135,105,0);
	glVertex3f(135,115,0);
	glVertex3f(141.5,105,0);
	glEnd();	
}
void sphere(float x,float y)
{
	glTranslatef(x,y,0);
	glutSolidSphere(28.7,80,70);
}
void curvewall()
{
    glBegin(GL_POLYGON);
	glColor3f(0.0f, 0.5f, 0.5f);
	glVertex3f(130.5,67.3,0);
	glVertex3f(130.5,110,0);
	glVertex3f(142.5,104,0);
	glVertex3f(142.5,67.3,0);
	glEnd();	
}
void sun(float x,float y,float r)
{
    glTranslatef(x,y,0);
	glutSolidSphere(r,80,70);	
}
void poles(float a,float b,float c,float d)
{
	glBegin(GL_POLYGON);
		glVertex2f(a,c);
		glVertex2f(a,d);
		glVertex2f(b,d);
		glVertex2f(b,c);
	glEnd();
}
void bulb1(float x,float y)
{
   glTranslatef(x,y,0);
   glutSolidSphere(3,80,70);	
}
void bulb2(float x,float y)
{
   glTranslatef(x,y,0);
   glutSolidSphere(2,80,70);	
}
void sun()
{

	glColor3f(1.0,0.1,0.1);
	glTranslatef(120,m,0);
	glutSolidSphere(5,80,70);


}
void moon()
{
	glPushMatrix();
	glColor3f(1.5,1.1,1.5);
	glTranslatef(125,135,0);
	glutSolidSphere(5,80,70);
	glPopMatrix();	
	glPushMatrix();
	glColor3f(0.0,0.0,0.2);
	glTranslatef(123.5,138,0);
	glutSolidSphere(5,80,70);
	glPopMatrix();
}
void bus()
{
	glColor3f(1.0,0.0,0.0);
	glBegin(GL_POLYGON);
	glVertex2f(l,5);
	glVertex2f(l,45);
	glVertex2f(l+40,45);
	glVertex2f(l+45,24);
	glVertex2f(l+45,5);
	glEnd();
	glPushMatrix();
   	glColor3f(0.0,0.0,0.0);
	glTranslatef(l+10,5.5,0);
	glutSolidSphere(4,80,70);
	glPopMatrix();
	glPushMatrix();
   	glColor3f(1.5,1.5,1.5);
	glTranslatef(l+10,5.5,0);
	glutSolidSphere(2,80,70);
	glPopMatrix();
	glPushMatrix();
   	glColor3f(0.0,0.0,0.0);
	glTranslatef(l+35,5.5,0);
	glutSolidSphere(4,80,70);
	glPopMatrix();	
	glPushMatrix();
   	glColor3f(1.5,1.5,1.5);
	glTranslatef(l+35,5.5,0);
	glutSolidSphere(2,80,70);
	glPopMatrix();
	glColor3f(1.0,1.0,1.0);
	glBegin(GL_POLYGON);
	glVertex2f(l+30,24);
	glVertex2f(l+30,40);
	glVertex2f(l+40,40);
	glVertex2f(l+43,24);
	glEnd();
	glRecti(l+18,24,l+28,40);
	glRecti(l+6,24,l+16,40);
	glRecti(l+5,24,l+1,40);
	glColor3f(0.0,0.0,0.0);
	glRecti(l+31,20,l+34,18);
	glColor3f(0.5,1.0,1.0);
	glRecti(l+43,12,l+45,14);
	glRecti(l+43,8,l+45,10); 
	
}
void car()
{
	glColor3f(1.5,0.5,0.0);
	glBegin(GL_POLYGON);
	glVertex2f(k,20);
	glVertex2f(k,30);
	glVertex2f(k+20,30);
	glVertex2f(k+20,20);
	glEnd();
	glColor3f(0.6,0.9,0.9);
	glBegin(GL_POLYGON);
	glVertex2f(k+2,30);
	glVertex2f(k+6,38);
	glVertex2f(k+15,38);
	glVertex2f(k+19,30);
	glEnd();
	glPushMatrix();
	glBegin(GL_POLYGON);
	glColor3f(0.5,0.0,0.2);
	glVertex2i(k+15,30);
	glVertex2i(k+15,38);
	glVertex2i(k+19,30);
	glEnd();
	glPopMatrix();
	glPushMatrix();
	glBegin(GL_POLYGON);
	glColor3f(0.5,0.0,0.2);
	glVertex2i(k+2,30);
	glVertex2i(k+6,38);
	glVertex2i(k+6,30);
	glEnd();
	glPopMatrix();

	glPushMatrix();
   	glColor3f(0.0,0.0,0.0);
	glTranslatef(k+5,20,0);
	glutSolidSphere(3,80,70);
	glPopMatrix();
	glPushMatrix();
	glTranslatef(k+15,20,0);
	glutSolidSphere(3,80,70);
	glPopMatrix();
	glPushMatrix();
   	glColor3f(1.5,1.5,1.5);
	glTranslatef(k+5,20,0);
	glutSolidSphere(2,80,70);
	glPopMatrix();
	glPushMatrix();
	glTranslatef(k+15,20,0);
	glutSolidSphere(2,80,70);
	glPopMatrix();

}
void star(int x,int y,int z,int a,int b)
{  //star

	glBegin(GL_POLYGON);
	glColor3f(1.0,1.0,1.0);
		glVertex2f(x,a);
		glVertex2f(y,b);
		glVertex2f(z,a);
	glEnd();
		glBegin(GL_POLYGON);
		glVertex2f(x,a+1);
		glVertex2f(y,a-1);
		glVertex2f(z,a+1);
	glEnd();

}
void star2()
{
	glBegin(GL_POINTS);
	glColor3f(1.0,1.0,1.0);
	glPointSize(20.0);
		glVertex2f(20,120);
		glVertex2f(38,125);
		glVertex2f(10,130);
	glEnd();
}
//cloud function
void cloud(int x,int y)
{
    glPushMatrix();
	glColor3f(1.0,1.0,1.0);
	glTranslatef(x,y,0);
	glutSolidSphere(4,20,5);
	glPopMatrix();
	
}
void pool(float x,float y,float r)
{
	glTranslatef(x,y,0);
	glutSolidSphere(r,10,10);
	
}
void grass(float a,float b,float c,float d,float e)
{
	glBegin(GL_POLYGON);
	glColor3f(0,0.5,0);
		glVertex2f(a,b);
		glColor3f(0,1,0.2);
		glVertex2f(c,b);
		glColor3f(0,1,0.2);
		glVertex2f(d,e);
	glEnd();
}
void output1(char s[])
{
	int t;
	for(t=0;t<strlen(s);t++)
	{
		glutStrokeCharacter(GLUT_STROKE_MONO_ROMAN,s[t]);
	}
}
void scene1()
{
	glClear(GL_COLOR_BUFFER_BIT);
	//sky
	glPushMatrix();
	sky();
	glPopMatrix();
	//sun
	glPushMatrix();
	sun();
	glPopMatrix();
	//cloud
	cloud(104,142);
	cloud(110,142);
	cloud(110,145);
	cloud(107,145);
	//ground
	glPushMatrix();
	ground();
	glPopMatrix();
	//pool
	glPushMatrix();
	glColor3f(0.5,0.0,0.1);
	pool(145,48,9);
	glPopMatrix();
	glPushMatrix();
	glColor3f(0.0,0.0,1.1);
	pool(145,48,8);
	glPopMatrix();
	
	//curve
	glPushMatrix();
	glColor3f(0.0f, 0.5f, 0.5f);
	sphere(120.5,86.5);
	glPopMatrix();
	//Building base
	glPushMatrix();
	glColor3f(0.0,0.0,0.5);
	Building(10,57,65,145);
	glPopMatrix();
	//next
	glPushMatrix();
	glColor3f(1.0,1.0,1.0);
	Building(10,65,68,145);
	Building(10,68,115,135);
	glPopMatrix();
	//front
	glPushMatrix();
   glColor3f(0.0f, 0.5f, 0.5f);
	Building(10,67,100,130);
	//top
	top1();
	glColor3f(1.0,1.0,1.0);
	top2();
	glPopMatrix();
	
	//airoplane
	glPushMatrix();
  glBegin(GL_POLYGON);
	glColor3f(1.5,1.5,1.5);
		glVertex2i(n,135);
		glVertex2i(n,140);
		glVertex2i(n+12,145);
		glVertex2i(n+7,130);
	glEnd();
	glPopMatrix();
	
	glPushMatrix();
  glBegin(GL_POLYGON);
	glColor3f(1.5,1.5,1.5);
		glVertex2i(n+7,130);
		glVertex2i(n+12,145);
		glVertex2i(n+42,140);
		glVertex2i(n+47,135);
		glVertex2i(n+42,125);
	glEnd();
	glPopMatrix();
	
	glPushMatrix();
  glBegin(GL_POLYGON);
	glColor3f(1.5,1.5,1.5);
		glVertex2i(n+42,140);
		glVertex2i(n+52,149);
		glColor3f(0.2,0.2,0.2);
		glVertex2i(n+55,145);
		glColor3f(1.5,1.5,1.5);
		glVertex2i(n+47,135);
	glEnd();
	glPopMatrix();
	glPushMatrix();
	glTranslatef(n+4,135.5,0);
   glutSolidSphere(6,80,70);
   glPopMatrix();
   glPushMatrix();
   glColor3f(0.0,0.0,0.0);
   glTranslatef(n+7,129,0);
   glutSolidSphere(1.5,80,70);
   glPopMatrix();
   glPushMatrix();
   glColor3f(1.5,1.5,1.5);
   glTranslatef(n+7,129,0);
   glutSolidSphere(0.4,80,70);
   glPopMatrix();
   
   glPushMatrix();
   glBegin(GL_POLYGON);
	glColor3f(1.5,1.5,1.5);
		glVertex2i(n+12,130);
		glColor3f(0.2,0.2,0.2);
		glVertex2i(n+28,130);
		glVertex2i(n+37,115);
		glVertex2i(n+32,115);
	    glPopMatrix();
	glEnd();
	glPushMatrix();
   glBegin(GL_POLYGON);
	glColor3f(1.5,1.5,1.5);
		glVertex2i(n+12,145);
		glColor3f(0.2,0.2,0.2);
		glVertex2i(n+17,148);
		glVertex2i(n+22,148);
		glVertex2i(n+22,142);
	    glPopMatrix();
	glEnd();
	glBegin(GL_POLYGON);
	glColor3f(1.5,1.5,1.5);
		glVertex2i(n+3,141);
		glColor3f(0.2,0.2,0.2);
		glVertex2i(n+10,144.5);
		glVertex2i(n+17,135);
		glVertex2i(n+10,132);
	    glPopMatrix();
	glEnd();
	glRecti(n+19,133,n+21,136);
	glRecti(n+23,133,n+25,136);
	glRecti(n+27,133,n+29,136);
	glRecti(n+31,133,n+33,136);
	glRecti(n+35,133,n+37,136);
	glRecti(n+39,133,n+41,136);
	//stare
	glPushMatrix();
	glColor3f(1.0,1.0,1.0);
	Building(44,57,60,66);
	Building(46,61,64,64);
	glPopMatrix();
	//Bars on Front Building
	glPushMatrix();
	glColor3f(0.0,1.0,1.0);
	VerticalLine(20,67,100);
	VerticalLine(30,67,100);
	VerticalLine(40,67,100);
	VerticalLine(50,67,100);
	VerticalLine(60,67,100);
	VerticalLine(70,67,100);
	VerticalLine(80,67,100);
	VerticalLine(90,67,100);
	VerticalLine(100,67,100);
	VerticalLine(110,67,100);
	VerticalLine(120,67,100);
	glLineWidth(3.0);
	HorizontalLine(10,130,100);	
	glColor3f(0.2,0.2,0.2);
	glLineWidth(3.0);
	HorizontalLine(2,135,115);
	glPopMatrix();
	//doar top bottom
	glPushMatrix();
	glColor3f(0.0,0.0,0.0);
	Building(45,66,67,65);
	Building(44,87,90,66);
	//door background
	glColor3f(1.0,1.0,1.0);
	Building(45,67,87,65);
	//doors
	glColor3f(0.0,0.0,0.5);
	Building(45.5,67,86,50);
	Building(50.5,67,86,55);
	Building(55.5,67,86,60);
	Building(60.5,67,86,64.5);
	glPopMatrix();
	//building top
	glColor3f(0.0f, 0.5f, 0.5f);
	triangle();
	//Vertical line
	VerticalLine(53,115,123.8);
	VerticalLine(58,115,122.5);
	VerticalLine(63,115,120.5);
	VerticalLine(68,115,118.7);
	VerticalLine(73,115,117);
    //curve wall
    curvewall();
    //zebra cross
    glPushMatrix();
    glColor3f(1.0,1.0,1.0);
    glLineWidth(3.0);
    HorizontalLine(43,66,33);
    HorizontalLine(43,66,30);
    HorizontalLine(43,66,27);
    HorizontalLine(43,66,24);
    HorizontalLine(43,66,21);
	HorizontalLine(43,66,18);
	HorizontalLine(43,66,15);
	HorizontalLine(43,66,12);
	HorizontalLine(43,66,9);
	HorizontalLine(43,66,6);
	HorizontalLine(43,66,3);
	HorizontalLine(43,66,0.5);
	glLineWidth(10.0);
	HorizontalLine(0,30,17);
	HorizontalLine(80,150,17);
	glPopMatrix();
	//tree1
	glPushMatrix();
	glBegin(GL_POLYGON);
	glColor3f(0.83,0.4,0.0);
		glVertex2f(2,55);
		glVertex2f(2,70);
		glVertex2f(4.5,70);
		glVertex2f(4.5,55);
	glEnd();
	glPopMatrix();
	glColor3f(0.0,0.5,0.0);
	glPushMatrix();
	sun(1,71,4);
	glPopMatrix();
	glPushMatrix();
	sun(3,71,4);
	glPopMatrix();
	glPushMatrix();
	sun(6,71,4);
	glPopMatrix();
	glPushMatrix();
	sun(2,75,4);
	glPopMatrix();
	glPushMatrix();
	sun(6,75,4);
	glPopMatrix();
	glPushMatrix();
	glColor3f(0.0,0.5,0.1);
	sun(3.5,80,4);
	glPopMatrix();
	//tree2
	glPushMatrix();
	glBegin(GL_POLYGON);
	glColor3f(0.83,0.4,0.0);
		glVertex2f(79,47);
		glVertex2f(78,70);
		glVertex2f(80,70);
		glVertex2f(81,47);
	glEnd();
	glPopMatrix();
	
	glPushMatrix();
	glBegin(GL_POLYGON);
	glColor3f(0.83,0.4,0.0);
		glVertex2f(80,58);
		glVertex2f(83,70);
		glVertex2f(87,70);
		glVertex2f(80,53);
	glEnd();
	glPopMatrix();
		
	glColor3f(0.0,0.5,0.0);
	glPushMatrix();
	sun(79,71,6);
	glPopMatrix();
	glPushMatrix();
	sun(81,71,6);
	glPopMatrix();
	glPushMatrix();
	sun(84,71,6);
	glPopMatrix();
	glPushMatrix();
	sun(81,75,6);
	glPopMatrix();
	glPushMatrix();
	sun(84,75,6);
	glPopMatrix();
	glPushMatrix();
	glColor3f(0.0,0.5,0.1);
	sun(81.5,80,6);
	glPopMatrix();
	//tree3
		glPushMatrix();
	glBegin(GL_POLYGON);
	glColor3f(0.83,0.4,0.0);
		glVertex2f(100,45);
		glVertex2f(100,70);
		glVertex2f(104.5,70);
		glVertex2f(104.5,45);
	glEnd();
	glPopMatrix();
	glColor3f(0.0,0.5,0.0);
	glPushMatrix();
	sun(98,71,6);
	glPopMatrix();
	glPushMatrix();
	sun(101,71,5);
	glPopMatrix();
	glPushMatrix();
	sun(106,71,6);
	glPopMatrix();
	glPushMatrix();
	sun(102,75,6);
	glPopMatrix();
	glPushMatrix();
	sun(98,78,5);
	glPopMatrix();
	glPushMatrix();
	sun(105,78,6);
	glPopMatrix();
	glPushMatrix();
	glColor3f(0.0,0.5,0.1);
	sun(101,85,5);
	glPopMatrix();
	//tree 4
	glPushMatrix();
	glBegin(GL_POLYGON);
	glColor3f(0.83,0.4,0.0);
		glVertex2f(22,55);
		glVertex2f(22,70);
		glVertex2f(24.5,70);
		glVertex2f(24.5,55);
	glEnd();
	glPopMatrix();
    //grass
    grass(120,40,122,122,50);
    grass(120,40,122,120,50);
    grass(120,40,122,124,50);
    grass(128,50,130,129,60);
    grass(128,50,130,127,60);
    grass(128,50,130,131,60);
    grass(110,50,112,112,60);
    grass(110,50,112,110,60);
    grass(110,50,112,114,60);
    grass(4,40,6,6,50);
    grass(4,40,6,4,50);
    grass(4,40,6,8,50);
	glColor3f(0.0,0.5,0.0);
	glPushMatrix();
	sun(21,71,4);
	glPopMatrix();
	glPushMatrix();
	sun(23,71,4);
	glPopMatrix();
	glPushMatrix();
	sun(26,71,4);
	glPopMatrix();
	glPushMatrix();
	sun(22,75,4);
	glPopMatrix();
	glPushMatrix();
	sun(26,75,4);
	glPopMatrix();
	glPushMatrix();
	glColor3f(0.0,0.5,0.2);
	sun(23.5,80,4);
	glPopMatrix();
	
	//road side
	glPushMatrix();
	glColor3f(1.5,1.5,1.5);
	glLineWidth(10.0);
	HorizontalLine(0,150,35);
	glPopMatrix();
	
	
	glBegin(GL_POLYGON);
	glColor3f(0.5,0.5,0.5);
		glVertex2i(0,36);
		glVertex2i(0,39);
		glColor3f(0.6,0.6,0.6);
		glVertex2i(150,39);
		glVertex2i(150,36);
	glEnd();
	
	//pools
	glPushMatrix();
	glColor3f(1.0,0.2,0.0);
	poles(7,8.5,36,73);
	poles(47,48.5,36,73);
	poles(87,88.5,36,73);
	poles(127,128.5,36,73);
	glColor3f(1.0,1.0,1.0);
	poles(27,28.5,36,73);
	poles(67,68.5,36,73);
	poles(107,108.5,36,73);
	poles(147,148.5,36,73);
	glPopMatrix();
	
	glBegin(GL_POLYGON);
	glColor3f(1.5,1.5,1.5);
		glVertex2i(0,73);
		glVertex2i(0,75);
		glVertex2i(150,75);
		glVertex2i(150,73);
	glEnd();
	//steet light
	glColor3f(0.0,0.0,0.0);
	VerticalLine(17,36,50);
	VerticalLine(38,36,50);
	VerticalLine(97,36,50);
	VerticalLine(138,36,50);
	glLineWidth(5.0);
	HorizontalLine(12,22,44);
	HorizontalLine(33,43,44);
	HorizontalLine(92,102,44);
	HorizontalLine(133,143,44);
	VerticalLine(12.4,44,48);
	VerticalLine(21.6,44,48);
	VerticalLine(33.4,44,48);
	VerticalLine(42.6,44,48);	
	VerticalLine(92.4,44,48);
	VerticalLine(101.6,44,48);
	VerticalLine(133.4,44,48);
	VerticalLine(142.6,44,48);
	//top bulb
	glColor3f(1.0,1.0,1.5); 
	glPushMatrix();
	bulb1(17,52);
	glPopMatrix();
	glPushMatrix();
	bulb1(38,52);
	glPopMatrix();
	glPushMatrix();
	//glColor3f(1.0,1.0,0.0); 
	bulb1(97,52);
	glPopMatrix();
	glPushMatrix();
	//glColor3f(1.0,1.0,1.5);
	bulb1(138,52);
	glPopMatrix();
	//side bulb
	glPushMatrix();
	glColor3f(1.0,1.0,1.5);
	bulb2(12.4,49);
	glPopMatrix();
	glPushMatrix();
	bulb2(21.6,49);
	glPopMatrix();
	glPushMatrix();
	bulb2(33.4,49);
	glPopMatrix();
	glPushMatrix();
	bulb2(42.6,49);
	glPopMatrix();
	glPushMatrix();
	bulb2(92.4,49);
	glPopMatrix();
	glPushMatrix();
	bulb2(101.6,49);
	glPopMatrix();
	glPushMatrix();
	bulb2(133.4,49);
	glPopMatrix();
	glPushMatrix();
	bulb2(142.6,49);
	glPopMatrix();
    glPushMatrix();
   	if(m>160)
	{
	moon();
	//star
	glPushMatrix();
	star(110,111,112,130,132);
	star(140,141,142,140,142);
	star(145,146,147,110,112);
	star(70,71,72,125,127);
	star(2,3,4,90,92);
	glPopMatrix();
	if(m>165)
	{
		star2();
	}
	 //top bulb 
	if(int(m)%2==0)
	glColor3f(1.0,1.0,0.0);
	else
	glColor3f(1.0,1.0,0.5);
	glPushMatrix();
	bulb1(97,52);
	glPopMatrix();
	glPushMatrix();
	bulb1(38,52);
	glPopMatrix();
	glPushMatrix();
	bulb1(17,52);
	glPopMatrix();
	glPushMatrix();
	bulb1(138,52);
	glPopMatrix();
	//side bulb
	glPushMatrix();
	if(int(m)%2==0)
	glColor3f(1.0,1.0,0.5);
	else
	glColor3f(1.0,1.0,0.0);
	bulb2(12.4,49);
	glPopMatrix();
	glPushMatrix();
	bulb2(21.6,49);
	glPopMatrix();
	glPushMatrix();
	bulb2(33.4,49);
	glPopMatrix();
	glPushMatrix();
	bulb2(42.6,49);
	glPopMatrix();
	glPushMatrix();
	bulb2(92.4,49);
	glPopMatrix();
	glPushMatrix();
	bulb2(101.6,49);
	glPopMatrix();
	glPushMatrix();
	bulb2(133.4,49);
	glPopMatrix();
	glPushMatrix();
	bulb2(142.6,49);
	glPopMatrix();
}
    //traffic pole
    glColor3f(0.0,0.0,0.0);
    VerticalLine(74,36,80);
    glRecti(72,78,76,95);
    glPushMatrix();
    glColor3f(1.0,0.0,0.0);
	sun(74,91,1);
    glPopMatrix();
    glPushMatrix();
    glColor3f(1.0,1.0,0.0);
	sun(74,86,1);
    glPopMatrix();
    glPushMatrix();
    glColor3f(0.0,1.0,0.0);
	sun(74,81,1);
    glPopMatrix();
     //car
    car(); 
    //bus
    bus();
    //text
	glColor3f(1,1,1);
	if(m>160)
	{ 
		if(int(m)%2==0)
		glColor3f(1,1,0);
		else
		glColor3f(1,0.0,0.0);
	}
	//glRasterPos2i(100,180);
	glutBitmapCharacter(GLUT_BITMAP_8_BY_13,'A');
	char buff[30]="International Airport";
	glPushMatrix();
	glTranslatef(15,102,0);
	glScalef(0.05,0.05,0.0);
	output1(buff);
	glPopMatrix();
	glFlush();
}
void scene3(void)
{
glClear(GL_COLOR_BUFFER_BIT);
sky3();
backcloud();
runway();
//front 
glPushMatrix();
glTranslated(a,c,0.0);
glColor3f(1.0,1.0,1.0);
glTranslatef(77.0,42.5,0);
glutSolidSphere(12.7,30,20);
glPopMatrix();
glPushMatrix();
glTranslated(a,c,0.0);
glColor3f(1.0,1.0,1.0);
//rectangular body
glBegin(GL_POLYGON);
glVertex2f(0.0,30.0);
glColor3f(1.0,0.0,0.0);
glVertex2f(0.0,55.0);
glColor3f(1.0,1.0,1.0);
glVertex2f(80.0,55.0);
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
glLineWidth(1.0);
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
glLineWidth(1.0);
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
//outline to rightside wing
glPushMatrix();
glTranslated(a,c,0.0);
glColor3f(0.0,0.0,0.0);
glLineWidth(1.0);
glBegin(GL_LINE_LOOP);
glVertex2f(40.0,40.0);
glVertex2f(60.0,40.0);
glVertex2f(30.0,15.0);
glVertex2f(20.0,15.0);
glEnd();
glPopMatrix();
//window
    glPushMatrix();
    glTranslated(a,c,0.0);
	glColor3f(1.0,0.0,0.0);
	glTranslatef(5.0,43,0);
	glutSolidSphere(3,30,20);
	glPopMatrix();
	
    glPushMatrix();
    glTranslated(a,c,0.0);
	glColor3f(1.0,0.0,0.0);
	glTranslatef(15.0,43,0);
	glutSolidSphere(3,30,20);
	glPopMatrix();
	glPushMatrix();
    glTranslated(a,c,0.0);
	glColor3f(1.0,0.0,0.0);
	glTranslatef(25.0,43,0);
	glutSolidSphere(3,30,20);
	glPopMatrix();
	    glPushMatrix();
    glTranslated(a,c,0.0);
	glColor3f(1.0,0.0,0.0);
	glTranslatef(35.0,43,0);
	glutSolidSphere(3,30,20);
	glPopMatrix();
		    glPushMatrix();
    glTranslated(a,c,0.0);
	glColor3f(1.0,0.0,0.0);
	glTranslatef(45.0,43,0);
	glutSolidSphere(3,30,20);
	glPopMatrix();
	    glPushMatrix();
    glTranslated(a,c,0.0);
	glColor3f(1.0,0.0,0.0);
	glTranslatef(55.0,43,0);
	glutSolidSphere(3,30,20);
	glPopMatrix();
	    glPushMatrix();
    glTranslated(a,c,0.0);
	glColor3f(1.0,0.0,0.0);
	glTranslatef(65.0,43,0);
	glutSolidSphere(3,30,20);
	glPopMatrix();
		    glPushMatrix();
    glTranslated(a,c,0.0);
	glColor3f(1.0,0.0,0.0);
	glTranslatef(75.0,43,0);
	glutSolidSphere(3,30,20);
	glPopMatrix();
frontcloud();
if(c>150)
{
	slide=4;
	glLineWidth(1.0);
	//front 
glPushMatrix();
glTranslated(a1,-c1,0.0);
glColor3f(1.0,1.0,1.0);
glTranslatef(77.0,42.5+80,0);
glutSolidSphere(12.7,30,20);
glPopMatrix();
glPushMatrix();
glTranslated(a1,-c1,0.0);
glColor3f(1.0,1.5,1.0);
//rectangular body
glBegin(GL_POLYGON);
glVertex2f(0.0,30+80.0);
glColor3f(1.0,0.0,0.0);
glVertex2f(0.0,55+80.0);
glColor3f(1.0,1.5,1.0);
glVertex2f(80.0,55+80.0);
glVertex2f(80.0,30+80.0);
glEnd();
glPopMatrix();

//back wing
glPushMatrix();
glTranslated(a1,-c1,0.0);
glColor3f(1.0,0.0,0.0);
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
glColor3f(1.0,0.0,0.0);
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
glColor3f(1.0,0.0,0.0);
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
//window
    glPushMatrix();
    glTranslated(a1,-c1,0.0);
	glColor3f(1.0,0.0,0.0);
	glTranslatef(5.0,43+80,0);
	glutSolidSphere(3,30,20);
	glPopMatrix();
	
    glPushMatrix();
    glTranslated(a1,-c1,0.0);
	glColor3f(1.0,0.0,0.0);
	glTranslatef(15.0,43+80,0);
	glutSolidSphere(3,30,20);
	glPopMatrix();
	glPushMatrix();
    glTranslated(a1,-c1,0.0);
	glColor3f(1.0,0.0,0.0);
	glTranslatef(25.0,43+80,0);
	glutSolidSphere(3,30,20);
	glPopMatrix();
	    glPushMatrix();
    glTranslated(a1,-c1,0.0);
	glColor3f(1.0,0.0,0.0);
	glTranslatef(35.0,43+80,0);
	glutSolidSphere(3,30,20);
	glPopMatrix();
		    glPushMatrix();
    glTranslated(a1,-c1,0.0);
	glColor3f(1.0,0.0,0.0);
	glTranslatef(45.0,43+80,0);
	glutSolidSphere(3,30,20);
	glPopMatrix();
	    glPushMatrix();
    glTranslated(a1,-c1,0.0);
	glColor3f(1.0,0.0,0.0);
	glTranslatef(55.0,43+80,0);
	glutSolidSphere(3,30,20);
	glPopMatrix();
	    glPushMatrix();
    glTranslated(a1,-c1,0.0);
	glColor3f(1.0,0.0,0.0);
	glTranslatef(65.0,43+80,0);
	glutSolidSphere(3,30,20);
	glPopMatrix();
		    glPushMatrix();
    glTranslated(a1,-c1,0.0);
	glColor3f(1.0,0.0,0.0);
	glTranslatef(75.0,43+80,0);
	glutSolidSphere(3,30,20);
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


}

void output(char s[])
{
	int t;
	
	for(t=0;t<strlen(s);t++)
	{
		glutStrokeCharacter(GLUT_STROKE_ROMAN,s[t]);
	}
}
void background(){
	glBegin(GL_POLYGON);
	glColor3f(0.0,1.0,0.5);
	glVertex2i(0,0);
	glColor3f(0,1.5,0.2);
	glVertex2i(0,150);
	glColor3f(0,1.5,0.2);
	glVertex2i(150,150);
	glColor3f(0.0,1.0,0.5);
	glVertex2i(150,0);
	glEnd();
	
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

void scene0()
{
	glClear(GL_COLOR_BUFFER_BIT);
	background();
	glColor3f(0.0,0.0,0.0);
	glutBitmapCharacter(GLUT_BITMAP_9_BY_15,'A');
	char clg[60]="Mangalore Institute of Technology and Engineering(MITE)";
	char dept[50]="Department of Computer Science and Engineering";
	char sub[50]="A MINI PROJECT ON";
	char title[50]="~~~~~~ INTERNATIONAL AIRPORT ~~~~~~";
	char head[50]="BY:                        GUIDED BY:";
	char name1[80]="ANOOP UV BHAT  4MT18CS007     Mrs JEEVITHA SAMPATH";
	char name2[60]="NAVEENKUMAR S R  4MT18CS055      Assistant Professor";
	char select[30]="SELECT AN OPTION:";
	char line[20]="~~~~~~~~~~~~~~~~~~";
	char s1[15]="1. SCENE-1";
	char s2[15]="2. SCENE-2";
	char s3[15]="3. SCENE-3";
	char q[10]="Q. QUIT!";
	
	glPushMatrix();
	glColor3f(0,0,0.2);
	glTranslatef(5,130,0);
	glScalef(0.04,0.04,0.0);
	output(clg);
	glPopMatrix();
	
	glPushMatrix();
	glTranslatef(30,120,0);
	glScalef(0.03,0.03,0.0);
	output(dept);
	glPopMatrix();
	
	glPushMatrix();
	glTranslatef(60,110,0);
	glScalef(0.03,0.03,0.0);
	output(sub); 
	glPopMatrix();
	
	glPushMatrix();
	glTranslatef(35,100,0);
	glScalef(0.03,0.03,0.0);
	output(title);
	glPopMatrix();
	
	glPushMatrix();
	glTranslatef(5,70,0);
	glScalef(0.03,0.03,0.0);
	output(head);
	glPopMatrix();
	
	glPushMatrix();
	glTranslatef(8,60,0);
	glScalef(0.03,0.03,0.0);
	output(name1);
	glPopMatrix();
	
	glPushMatrix();
	glTranslatef(8,50,0);
	glScalef(0.03,0.03,0.0);
	output(name2);
	glPopMatrix();

	glPushMatrix();
	glTranslatef(60,40,0);
	glScalef(0.03,0.03,0.0);
	output(select);
	glPopMatrix();
	glPushMatrix();
	glTranslatef(55,36,0);
	glScalef(0.03,0.03,0.0);
	output(line);
	glPopMatrix();
	glPushMatrix();
	glTranslatef(70,30,0);
	glScalef(0.03,0.03,0.0);
	output(s1);
	glPopMatrix();
	glPushMatrix();
	glTranslatef(70,20,0);
	glScalef(0.03,0.03,0.0);
	output(s2);
	glPopMatrix();
	glPushMatrix();
	glTranslatef(70,10,0);
	glScalef(0.03,0.03,0.0);
	output(s3);
	glPopMatrix();
	glPushMatrix();
	glTranslatef(70,1,0);
	glScalef(0.03,0.03,0.0);
	output(q);
	glPopMatrix();
	glFlush();
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
	glVertex2f(130+g,134+h);
	glVertex2f(128+g,132+h);
	glVertex2f(126+g,130+h);
	glVertex2f(124+g,128+h);
	glVertex2f(122+g,126+h);
	glVertex2f(120+g,124+h);
	glVertex2f(118+g,122+h);
	glVertex2f(116+g,120+h);		
	//speed
	glVertex2f(111+g,116+h);
	glVertex2f(100+g,104+h);
	glVertex2f(111+g,114+h);
	glVertex2f(104+g,106+h);
	glVertex2f(110+g,117+h);
	glVertex2f(105+g,112+h);
	glEnd();
	
	//middle aeroplane	
glPushMatrix();
glColor3ub(255,255,255);
glTranslatef(6+60-i,54+60+j,0);
glutSolidSphere(4,80,70+60);
glPopMatrix();

glBegin(GL_POLYGON);
glColor3ub(255,255,255);
glVertex2f(5+60-i,50+60+j);
glVertex2f(5+60-i,58+60+j);
glColor3ub(255,255,0);
glVertex2f(25+60-i,58+60+j);
glVertex2f(25+60-i,50+60+j);
glEnd();

glBegin(GL_POLYGON);
glColor3ub(255,255,0);
glVertex2f(25+60-i,50+60+j);
glVertex2f(28+60-i,55.5+60+j);
glVertex2f(28+60-i,57+60+j);
glVertex2f(25+60-i,58+60+j);
glEnd();
//top wing
glBegin(GL_POLYGON);
glColor3f(1,0.5,0);
glVertex2f(22+60-i,58+60+j);
    glVertex2f(24+60-i,61+60+j);
    glVertex2f(28+60-i,70+60+j);
    glVertex2f(30+60-i,70+60+j);
    glVertex2f(28+60-i,57+60+j);
glEnd();
glBegin(GL_LINES);
glColor3f(0,0,0);
glVertex2f(29.5+60-i,70+60+j);
    glVertex2f(26+60-i,57.5+60+j);
glEnd();
//side wing
glBegin(GL_POLYGON);
glColor3f(1,0.5,0);
glVertex2f(12+60-i,51+60+j);
    glVertex2f(20+60-i,52+60+j);
    glVertex2f(28+60-i,48+60+j);
    glVertex2f(25+60-i,48+60+j);
glEnd();
//window
glLineWidth(3.0);
glColor3f(0.0,0.0,0.0);
road_divider(8+60-i,54+60+j,9+60-i);
road_divider(10+60-i,54+60+j,11+60-i);
road_divider(12+60-i,54+60+j,13+60-i);
road_divider(14+60-i,54+60+j,15+60-i);
road_divider(16+60-i,54+60+j,17+60-i);
road_divider(18+60-i,54+60+j,19+60-i);
road_divider(20+60-i,54+60+j,21+60-i);
road_divider(22+60-i,54+60+j,23+60-i);
road_divider(24+60-i,54+60+j,25+60-i);
	//Road aeroplane	
glPushMatrix();
glColor3ub(255,255,255);
glTranslatef(6+60-i/2,54-30,0);
glutSolidSphere(4,80,70+60);
glPopMatrix();

glBegin(GL_POLYGON);
glColor3ub(255,255,255);
glVertex2f(5+60-i/2,50-30);
glVertex2f(5+60-i/2,58-30);
glColor3ub(255,0,0);
glVertex2f(25+60-i/2,58-30);
glVertex2f(25+60-i/2,50-30);
glEnd();
//tier
glBegin(GL_LINES);
glColor3ub(0.2,0.2,0.2);
glVertex2f(5+60-i/2,50-30);
glVertex2f(65-i/2,17);
glVertex2f(20+60-i/2,50-30);
glVertex2f(80-i/2,17);
glVertex2f(22+60-i/2,50-30);
glVertex2f(82-i/2,17);
glEnd();
glPushMatrix();
glColor3ub(0,0,0);
glTranslatef(4.9+60-i/2,17,0);
glutSolidSphere(1.3,80,70+60);
glPopMatrix();
glPushMatrix();
glColor3ub(255,255,255);
glTranslatef(4.9+60-i/2,17,0);
glutSolidSphere(0.8,80,70+60);
glPopMatrix();
glPushMatrix();
glColor3ub(0,0,0);
glTranslatef(19.9+60-i/2,17,0);
glutSolidSphere(1.3,80,70+60);
glPopMatrix();
glPushMatrix();
glColor3ub(255,255,255);
glTranslatef(19.9+60-i/2,17,0);
glutSolidSphere(0.8,80,70+60);
glPopMatrix();
glPushMatrix();
glColor3ub(0,0,0);
glTranslatef(21.9+60-i/2,17,0);
glutSolidSphere(1.3,80,70+60);
glPopMatrix();
glPushMatrix();
glColor3ub(255,255,255);
glTranslatef(21.9+60-i/2,17,0);
glutSolidSphere(0.8,80,70+60);
glPopMatrix();

glBegin(GL_POLYGON);
glColor3ub(255,0,0);
glVertex2f(25+60-i/2,50-30);
glVertex2f(28+60-i/2,55.5-30);
glVertex2f(28+60-i/2,57-30);
glVertex2f(25+60-i/2,58-30);
glEnd();
//top wing
glBegin(GL_POLYGON);
glColor3f(1,0.1,0);
glVertex2f(22+60-i/2,58-30);
    glVertex2f(24+60-i/2,61-30);
    glVertex2f(28+60-i/2,70-30);
    glVertex2f(30+60-i/2,70-30);
    glVertex2f(28+60-i/2,57-30);
glEnd();
glBegin(GL_LINES);
glColor3f(0,0,0);
glVertex2f(29.5+60-i/2,70-30);
    glVertex2f(26+60-i/2,57.5-30);
glEnd();
//side wing
glBegin(GL_POLYGON);
glColor3f(1,0.1,0);
glVertex2f(12+60-i/2,51-30);
    glVertex2f(20+60-i/2,52-30);
    glVertex2f(28+60-i/2,48-30);
    glVertex2f(25+60-i/2,48-30);
glEnd();
//window
glLineWidth(3.0);
glColor3f(0.0,0.0,0.0);
road_divider(8+60-i/2,54-30,9+60-i/2);
road_divider(10+60-i/2,54-30,11+60-i/2);
road_divider(12+60-i/2,54-30,13+60-i/2);
road_divider(14+60-i/2,54-30,15+60-i/2);
road_divider(16+60-i/2,54-30,17+60-i/2);
road_divider(18+60-i/2,54-30,19+60-i/2);
road_divider(20+60-i/2,54-30,21+60-i/2);
road_divider(22+60-i/2,54-30,23+60-i/2);
road_divider(24+60-i/2,54-30,25+60-i/2);
//cloud 
	glColor3f(1.0,1.0,1.0);
	glPushMatrix();
	glTranslatef(120,120,0);
	glutSolidSphere(5,100,10);
	glPopMatrix();
	glEnd();
	glColor3f(1.0,1.0,1.0);
	glPushMatrix();
	glTranslatef(120,117,0);
	glutSolidSphere(5,100,10);
	glPopMatrix();
	glEnd();
	glColor3f(1.0,1.0,1.0);
	glPushMatrix();
	glTranslatef(116,120,0);
	glutSolidSphere(5,100,10);
	glPopMatrix();
	glEnd();
	glColor3f(1.0,1.0,1.0);
	glPushMatrix();
	glTranslatef(123,120,0);
	glutSolidSphere(5,100,10);
	glPopMatrix();
	glEnd();
	
	
	glColor3f(1.0,1.0,1.0);
	glPushMatrix();
	glTranslatef(50,120,0);
	glutSolidSphere(5,100,10);
	glPopMatrix();
	glEnd();
	glColor3f(1.0,1.0,1.0);
	glPushMatrix();
	glTranslatef(47,120,0);
	glutSolidSphere(5,100,10);
	glPopMatrix();
	glEnd();
	glColor3f(1.0,1.0,1.0);
	glPushMatrix();
	glTranslatef(47,124,0);
	glutSolidSphere(5,100,10);
	glPopMatrix();
	glEnd();
	glColor3f(1.0,1.0,1.0);
	glPushMatrix();
	glTranslatef(45,117,0);
	glutSolidSphere(5,100,10);
	glPopMatrix();
	glEnd();glColor3f(1.0,1.0,1.0);
	glPushMatrix();
	glTranslatef(4014,120,0);
	glutSolidSphere(5,100,10);
	glPopMatrix();
	glEnd();
	
	glColor3f(1.0,1.0,1.0);
	glPushMatrix();
	glTranslatef(15,100,0);
	glutSolidSphere(4,100,10);
	glPopMatrix();
	glEnd();
	glColor3f(1.0,1.0,1.0);
	glPushMatrix();
	glTranslatef(11,100,0);
	glutSolidSphere(4,100,10);
	glPopMatrix();
	glEnd();
	glColor3f(1.0,1.0,1.0);
	glPushMatrix();
	glTranslatef(12,105,0);
	glutSolidSphere(3,100,10);
	glPopMatrix();
	glEnd();
	glColor3f(1.0,1.0,1.0);
	glPushMatrix();
	glTranslatef(15,105,0);
	glutSolidSphere(4,100,10);
	glPopMatrix();
	glEnd();
	
	glColor3f(1.0,1.0,1.0);
	glPushMatrix();
	glTranslatef(80,100,0);
	glutSolidSphere(4,100,10);
	glPopMatrix();
	glEnd();
	glColor3f(1.0,1.0,1.0);
	glPushMatrix();
	glTranslatef(76,100,0);
	glutSolidSphere(4,100,10);
	glPopMatrix();
	glEnd();
	glColor3f(1.0,1.0,1.0);
	glPushMatrix();
	glTranslatef(77,105,0);
	glutSolidSphere(3,100,10);
	glPopMatrix();
	glEnd();
	glColor3f(1.0,1.0,1.0);
	glPushMatrix();
	glTranslatef(80,105,0);
	glutSolidSphere(4,100,10);
	glPopMatrix();
	glEnd();
	
	glFlush();	
}
void mykey (unsigned char key, int x, int y) 
{
	
		if(key==' ') 
		{	
		 	scene0();
		}
		else if(key=='1')
		{
			scene1();
			slide=1;
		}
		else if(key=='2')
		{
			scene2();
			slide=2;	
		}
		else if(key=='3'){
			scene3();
			slide=3;
			if(c>150)
			{
				slide=4;
			}
		}
		else if(key=='Q'||key=='q')
		{
			exit(0);
		}

}
void ins()
{
	glColor3f(0.0,1.5,1.0);
glutBitmapCharacter(GLUT_BITMAP_9_BY_15,'A');
char fi[40]="PRESS SPACE TO CONTINUE......";
	glPushMatrix();
	glTranslatef(20,80,0);
	glScalef(0.05,0.05,0.0);
	output(fi);
	glPopMatrix();
}
void first()
{
	glFlush();
}
int main(int argc,char **argv)
{
	printf("Hello WORLD");
	glutInit(&argc,argv);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
	glutInitWindowSize(1500,780);
	glutInitWindowPosition(0,0);
	glutCreateWindow("Airport");
	glClearColor(0.1,0.1,0.1,0.1);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	glOrtho(0.0,150.0,0.0,150.0,0.0,200);
	glutDisplayFunc(first);
	glutKeyboardFunc(mykey);
	ins();
	planetimer(0);
	suntimer(0);
	bustimer(0);
	cartimer(0);
	scene3timer(-100);
	Landingtimer(0);
	middletimer(0);
	update(0);
	glutMainLoop();
}
