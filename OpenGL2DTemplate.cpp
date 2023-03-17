#include <glut.h>
#include<math.h>

void Display() {

	glClearColor(0.9f, 0.9f, 0.9f, 1);
	glClear(GL_COLOR_BUFFER_BIT);
	glColor3d(0.91f, 0.16f, 0.16f);
	//////////////////////////
	// body red
	glBegin(GL_POLYGON);
	glVertex2f(100, 100);
	glVertex2f(450, 100);
	glVertex2f(450, 450);
	glVertex2f(100, 450);
	glEnd();

	//ground
	glBegin(GL_POLYGON);
	glColor3d(0.0f, 0.76f, 0.25f);
	glVertex2f(0, 0);
	glVertex2f(600, 0);
	glVertex2f(600, 100);
	glVertex2f(100, 100);
	glEnd();

	/////////////////////
	// door body
	glBegin(GL_POLYGON);
	glColor3d(0.13f, 0.55f, 0.68f);
	glVertex2f(200, 100);
	glVertex2f(300, 100);
	glVertex2f(300, 250);
	glVertex2f(200, 250);
	glEnd();
	// window right body
	glBegin(GL_POLYGON);
	glColor3d(255, 224, 0);
	glVertex2f(320, 300);
	glVertex2f(420, 300);
	glVertex2f(420, 400);
	glVertex2f(320, 400);
	glEnd();
	// window right details
	glLineWidth(4);
	glBegin(GL_LINES);
	glColor3d(0, 0, 0);
	glVertex2f(370, 300);
	glVertex2f(370, 400);

	glVertex2f(320, 350);
	glVertex2f(420, 350);

	glEnd();
	// window left body
	glBegin(GL_POLYGON);
	glColor3d(255, 224, 0);
	glVertex2f(120, 300);
	glVertex2f(215, 300);
	glVertex2f(215, 400);
	glVertex2f(120, 400);

	glEnd();
	// window left details
	glLineWidth(4);
	glBegin(GL_LINES);
	glColor3d(0, 0, 0);
	glVertex2f(120, 350);
	glVertex2f(215, 350);
	glVertex2f(167, 300);
	glVertex2f(167, 400);
	glEnd();
	// side walk
	glBegin(GL_POLYGON);
	glColor3d(0.7f, 0.7f, 0.7f);
	glVertex2f(200, 100);
	glVertex2f(160, 0);
	glVertex2f(280, 0);
	glVertex2f(300, 100);
	glEnd();
	/////////////////////
	// door handle
	glPointSize(45);
	glEnable(GL_POINT_SMOOTH);
	glBegin(GL_POINTS);
	glColor3d(255, 224, 0);
	glVertex2f(280, 170);
	glEnd();
	/////////////////////
	glLineWidth(5);
	glBegin(GL_LINES);
	glColor3d(0, 0, 0);
	glVertex2f(70, 450);
	glVertex2f(480, 450);
	glEnd();
	///////////////////////
	// roof inner
	glBegin(GL_TRIANGLES);
	glColor3d(0.13f, 0.55f, 0.68f);
	glVertex2f(70, 450);
	glVertex2f(280, 580);
	glVertex2f(480, 450);
	glEnd();
	// chimney
	glBegin(GL_QUADS);
	glColor3d(0.91f, 0.16f, 0.16f);
	glVertex2f(143, 492);
	glVertex2f(143, 580);
	glVertex2f(210, 580);
	glVertex2f(210, 534);

	glEnd();
	////////////////
	// roof outer
	glLineWidth(10);
	//glEnable(GL_LINE_SMOOTH);
	glBegin(GL_LINES);
	glColor3d(0.91f, 0.16f, 0.16f);
	glVertex2f(70, 450);
	glVertex2f(280, 580);
	glVertex2f(280, 580);
	glVertex2f(480, 450);
	glEnd();

	////////////////
	// sun inner
	glBegin(GL_QUADS);
	glColor3d(255, 224, 0);

	int x = 520, y = 520, r = 40;
	double pi = 22.0 / 7.0;

	for (float i = 0; i <= 360; i++)
	{
		glVertex2f(x + sin(i) * r, y + cos(i) * r);
	}
	glEnd();
	/////////////////////////
	// sun outer 
	glLineWidth(1);
	glBegin(GL_LINE_LOOP);
	glColor3d(0, 0, 0);
	r = 40;
	for (float i = 0; i <= 360; i++)
	{
		glVertex2f(x + sin(i) * r, y + cos(i) * r);
	}
	glEnd();
	///////////////////////
	//glBegin(GL_LINES);
	//glColor3d(0, 0, 0);

	//glVertex2f(520, 520);
	//glVertex2f(570, 570);

	//glVertex2f(520, 520);
	//glVertex2f(470, 470);

	//glVertex2f(520, 520);
	//glVertex2f(480, 470);

	//glVertex2f(520, 520);
	//glVertex2f(560, 470);

	//glVertex2f(520, 520);
	//glVertex2f(570, 530);
	//glEnd();




	glFlush();
}
void main() {
	glutInitWindowPosition(0, 0);
	glutInitWindowSize(600, 600);
	glutCreateWindow("Hesham Omar Mahmoud    20200060");
	gluOrtho2D(0.0, 600, 0.0, 600);
	glutDisplayFunc(Display);

	glutMainLoop();
	//glClearColor(0.0f, 0.0f, 0.0f, 0.0f);
}