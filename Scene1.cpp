#include<stdio.h>
#include<GL/glut.h>
float n=18,m=70,l=0,k=120;
void planetimer(int e)
{	
n=n-1;
glutPostRedisplay();
glutTimerFunc(100,planetimer,0);
if(n==-50)
{
n=18;	
}	
}
void suntimer(int e)
{	
m=m+0.5;
glutPostRedisplay();
glutTimerFunc(100,suntimer,0);	
}

void bustimer(int e)
{
	
l=l+1;
glutPostRedisplay();
glutTimerFunc(100,bustimer,0);
if(l==170)
{
l=0;	
}	
}

void cartimer(int e)
{
	
k=k-1;
glutPostRedisplay();
glutTimerFunc(100,cartimer,0);
if(k==-10)
{
k=140;	
}	
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
void display()
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
	glColor3f(1.0,1.0,0.0);
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
	glColor3f(1.0,1.0,0.5);
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

	glFlush();
}

int main(int argc,char **argv)
{
	printf("Hello WORLD");
	glutInit(&argc,argv);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
	glutInitWindowSize(1500,780);
	glutInitWindowPosition(0,0);
	glutCreateWindow("4MT18CS055");
	glClearColor(0.1,0.1,0.1,0.1);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	glOrtho(0.0,150.0,0.0,150.0,0.0,200);
	glutDisplayFunc(display);
	planetimer(0);
	suntimer(0);
	bustimer(0);
	cartimer(0);
	glutMainLoop();
}
