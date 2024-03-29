#ifdef __APPLE__
#include <GLUT/glut.h>
#else
#include <GL/glut.h>
#endif

#include <stdlib.h>

GLfloat fAspect;
GLdouble rotX = 0, rotY = 0, rotHead = 0, alt = true, rotBlade = 0;

void display(void)
{
	glClear(GL_COLOR_BUFFER_BIT);

	glLineWidth(2);

	glRotatef(rotX, 1, 0, 0);
	glRotatef(rotY, 0, 1, 0);

	glColor3f(1.0f, 0.0f, 0.0f);

	// Base
	glPushMatrix();
	{
		glTranslatef(0,-13.0f,0.0f);
		glScalef(10, 2, 10);
		glutWireCube(1);
	}
	glPopMatrix();

	// Haste
	glPushMatrix();
	{
		glTranslatef(0,-7.0f,0);
		glScalef(2, 10, 2);
		glutWireCube(1);
	}
	glPopMatrix();

	glPushMatrix(); {
		glRotated(rotHead, 0, 1, 0);
		// Motor
		glPushMatrix();
		{
			
			glColor3f(0.0f, 0.0f, 1.0f);
			glScalef(4, 4, 6);
			glutWireCube(1);

		}
		glPopMatrix();
		// Ponta
		glPushMatrix();
		{
			glRotated(rotBlade, 0, 0, 1);
			glTranslated(0, 0, 3);
			glColor3f(0.0f, 0.0f, 1.0f);
			glutSolidSphere(0.5, 10, 8);

			// H�lice
			glPushMatrix();
			{

				glTranslatef(0, 0, 0.5);
				glColor3f(0.0f, 1.0f, 0.0f);
				glScalef(16, 2, 1);
				glutWireCube(1);
			}
			glPopMatrix();

			// H�lice
			glPushMatrix();
			{

				glTranslated(0, 0, 0.5);
				glColor3f(0.0f, 1.0f, 0.0f);
				glScalef(2, 16, 1);
				glutWireCube(1);
			} glPopMatrix();

		}
		
		

		glPopMatrix();
	}glPopMatrix();

	glutSwapBuffers();
}

void configProjection(void)
{
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();

	gluPerspective(45, fAspect, 0.5, 500);

	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();

	glClearColor(1.0f, 1.0f, 1.0f, 1.0f);

	gluLookAt(0, 0, 50, 0, 0, 0, 0, 1, 0);
}

void resize(GLsizei w, GLsizei h)
{
	if (h == 0)
		h = 1;

	fAspect = (GLfloat)w / (GLfloat)h;

	configProjection();
}

void keyboard(unsigned char key, int x, int y)
{

	switch (key)
	{
	case 27:
		exit(0);
		break;

	case 32:
		rotX = 0;
		rotY = 0;
		if (rotHead < 60 && alt == true) {
			rotHead += 15;
		}
		if (rotHead == 60) {
			alt = false;
		}
		if (rotHead > -60 && alt == false) {
			rotHead -= 15;
		}
		if (rotHead == -60) {
			alt = true;
		}
		rotBlade += 20;
		break;
	case 'z':
		if(rotHead < 60 && alt == true) {
			rotHead += 15;
		}
		if (rotHead == 60) {
			alt = false;
		}
		if (rotHead > -60 && alt == false) {
			rotHead -= 15;
		}
		if (rotHead == -60) {
			alt = true;
		}
		break;
	case 'x':
		rotBlade += 20;
		break;
	default:
		break;
	}

	glutPostRedisplay();
}

void specialkeys(int key, int x, int y)
{
	switch (key)
	{
	case GLUT_KEY_UP:
		rotX += 10;
		break;
	case GLUT_KEY_DOWN:
		rotX += 10;
		break;
	case GLUT_KEY_LEFT:
		rotY += 10;
		break;
	case GLUT_KEY_RIGHT:
		rotY -= 10;
		break;
	}
	glutPostRedisplay();
}

int main(int argc, char* argv[])
{
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB);
	glutInitWindowSize(800, 600);
	glutCreateWindow("Avalia��o 02");
	glutDisplayFunc(display);
	glutReshapeFunc(resize);
	glutKeyboardFunc(keyboard);
	glutSpecialFunc(specialkeys);
	glutMainLoop();
	return 0;
}
