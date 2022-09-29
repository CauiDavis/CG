#ifdef __APPLE__
#include <GLUT/glut.h>
#else
#include <GL/glut.h>
#endif

#include <stdlib.h>
#include <stdio.h>

void display(void) {
	glClearColor(1.0f, 1.0f, 1.0f, 1.0f); //Define a cor de fundo da cena (cor usada para limpar o buffer de cor)
	glClear(GL_COLOR_BUFFER_BIT);//Inicializa o buffer de cores antes de ele ser alterado

	glMatrixMode(GL_MODELVIEW); //Informa que as opera��es seguintes ser�o executadas na matrix modelview
	glLoadIdentity(); //Carrega a matriz identidade

	// glPointSize(10); //Define quantos pixels representar�o um v�rtice na tela
	// glBegin(GL_POINTS);{
	// 	glColor3f(0.0f, 1.0f, 1.0f);
	// 	glVertex2f(0, 0);

	// }glEnd();

	glLineWidth(5);
	glBegin(GL_TRIANGLE_STRIP); //triangulo do teto

	glColor3f(0.0f, 0.6f, 0.0f); //Define a cor do desenho em formato RGB
	glVertex2f(-0.2f, 0); //Especifica pontos no espa�o bidimensional (pixels)

	glColor3f(0.0f, 0.6f, 0.0f);
	glVertex2f(0.0, 0.2f);

	glColor3f(0.0f, 0.6f, 0.0f);
	glVertex2f(0.2f, 0);

	glEnd();//Encerra a cria��o de pontos
	glBegin(GL_QUADS);//paralelograma do teto
	glColor3f(0.0f, 0.0f, 0.8f);
	glVertex2f(0.0f, 0.2f);

	glColor3f(0.0f, 0.0f, 0.8f);
	glVertex2f(0.7, 0.2f);

	glColor3f(0.0f, 0.0f, 0.8f);
	glVertex2f(0.9f, 0.0f);

	glColor3f(0.0f, 0.0f, 0.8f);
	glVertex2f(0.2f, 0.0f);

	glEnd();
	glBegin(GL_QUAD_STRIP);//paralelograma da parede com porta
	glColor3f(0.7f, 0.0f, 0.0f);
	glVertex2f(-0.2f, 0.0f);

	glColor3f(0.7f, 0.0f, 0.0f);
	glVertex2f(0.2, 0.0f);

	glColor3f(0.7f, 0.0f, 0.0f);
	glVertex2f(-0.2f, -0.5f);

	glColor3f(0.7f, 0.0f, 0.0f);
	glVertex2f(0.2f, -0.5f);

	glEnd();
	glBegin(GL_QUADS);//paralelograma da parede com janela
	glColor3f(0.0f, 0.0f, 0.3f);
	glVertex2f(0.2f, 0.0f);

	glColor3f(0.0f, 0.0f, 0.3f);
	glVertex2f(0.9, 0.0f);

	glColor3f(0.0f, 0.0f, 0.3f);
	glVertex2f(0.9f, -0.5f);

	glColor3f(0.0f, 0.0f, 0.3f);
	glVertex2f(0.2f, -0.5f);

	glEnd();


	glBegin(GL_QUAD_STRIP);//paralelograma porta
	glColor3f(0.5f, 0.0f, 1.0f);
	glVertex2f(-0.1f, -0.2f);

	glColor3f(0.5f, 0.0f, 1.0f);
	glVertex2f(0.1, -0.2f);

	glColor3f(0.5f, 0.0f, 1.0f);
	glVertex2f(-0.1f, -0.5f);

	glColor3f(0.5f, 0.0f, 1.0f);
	glVertex2f(0.1f, -0.5f);

	glEnd();

	glBegin(GL_QUADS);//paralelograma janela 1
	glColor3f(0.0f, 0.5f, 0.0f);
	glVertex2f(0.3f, -0.1f);

	glColor3f(0.0f, 0.5f, 0.0f);
	glVertex2f(0.5f, -0.1f);

	glColor3f(0.0f, 0.5f, 0.0f);
	glVertex2f(0.5f, -0.28f);

	glColor3f(0.0f, 0.5f, 0.0f);
	glVertex2f(0.3f, -0.28f);

	glEnd();

	glBegin(GL_QUAD_STRIP);//paralelograma janela 2
	glColor3f(0.0f, 0.5f, 0.0f);
	glVertex2f(0.6f, -0.1f);

	glColor3f(0.0f, 0.5f, 0.0f);
	glVertex2f(0.8f, -0.1f);

	glColor3f(0.0f, 0.5f, 0.0f);
	glVertex2f(0.6f, -0.28f);

	glColor3f(0.0f, 0.5f, 0.0f);
	glVertex2f(0.8f, -0.28f);

	glEnd();

	glBegin(GL_QUADS);//paralelograma da macaneta
	glColor3f(0.0f, 0.0f, 1.f);
	glVertex2f(-0.09f, -0.35f);

	glColor3f(0.0f, 0.0f, 1.f);
	glVertex2f(-0.08f, -0.35f);

	glColor3f(0.0f, 0.0f, 1.0f);
	glVertex2f(-0.08f, -0.36f);

	glColor3f(0.0f, 0.0f, 1.0f);
	glVertex2f(-0.09f, -0.36f);

	glEnd();

	glBegin(GL_LINES);//linha 1 da janela 1 
	glColor3f(0.0f, 0.9f, 0.0f);
	glVertex2f(0.4f, -0.1f);

	glColor3f(0.0f, 0.9f, 0.0f);
	glVertex2f(0.4f, -0.28f);

	glEnd();

	glBegin(GL_LINES);//linha 2 da janela 1 
	glColor3f(0.0f, 0.9f, 0.0f);
	glVertex2f(0.3f, -0.19f);

	glColor3f(0.0f, 0.9f, 0.0f);
	glVertex2f(0.5f, -0.19f);

	glEnd();

	glBegin(GL_LINES);//linha 1 da janela 2
	glColor3f(0.0f, 0.9f, 0.0f);
	glVertex2f(0.7f, -0.1f);

	glColor3f(0.0f, 0.9f, 0.0f);
	glVertex2f(0.7, -0.28f);

	glEnd();

	glBegin(GL_LINES);//linha 2 da janela 2 
	glColor3f(0.0f, 0.9f, 0.0f);
	glVertex2f(0.6f, -0.19f);

	glColor3f(0.0f, 0.9f, 0.0f);
	glVertex2f(0.8f, -0.19f);

	glEnd();

	glBegin(GL_QUAD_STRIP);//paralelograma do caminho da porta
	glColor3f(0.0f, 0.0f, 0.6f);
	glVertex2f(-0.3f, -0.7f);

	glColor3f(0.0f, 0.0f, 0.6f);
	glVertex2f(0.0, -0.7f);

	glColor3f(0.0f, 0.0f, 0.6f);
	glVertex2f(-0.1f, -0.5f);

	glColor3f(0.0f, 0.0f, 0.6f);
	glVertex2f(0.1f, -0.5f);

	glEnd();
	glFlush(); //Informa que as opera��es devem ser processadas imediatamente e exibidas na tela
}


/*Recebe um o comprimento (width) e altura (height) da janela em pixels.*/
void resize(GLsizei w, GLsizei h) {
	if (h == 0)
		h = 1;

	printf("Tam. janela: (%i,%i)\n", w, h);
}

/*Recebe um c�digo para cada tecla (ASCII) e as coordenadas do mouse.*/
void keyboard(unsigned char key, int x, int y) {

	switch (key) {
	case 27:
		exit(0);
		break;
	case 32:
		glClearColor(1.0f, 1.0f, 1.0f, 1.0f); //Define a cor de fundo da cena (cor usada para limpar o buffer de cor)
		break;
	default:
		printf("C�digo tecla: %i. Mouse em (%i,%i)\n", key, x, y);
		break;
	}
	glutPostRedisplay(); //Informa que a janela atual deve ser redesenhada
}

int main(int argc, char* argv[]) {
	glutInit(&argc, argv); //Inicializa a OpenGL
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB); //Configura os modos de exibi��o (mais detalhes no futuro)
	glutInitWindowSize(700, 500); //Define o tamanho da janela em pixels
	glutInitWindowPosition(250, 150); //Define a posi��o inicial da janela
	glutCreateWindow("Casinha do caui"); //Cria a janela especificando seu t�tulo
	glutDisplayFunc(display); //Especifica a fun��o de rendering (exibe a cena no loop)
	glutReshapeFunc(resize); //Especifica fun��o a ser executada quando a janela � redimensionada
	glutKeyboardFunc(keyboard); //Especifica fun��o a ser executada quando uma tecla � pressionada

	glutMainLoop(); //Executa o loop de renderiza��o
	return 0;
}