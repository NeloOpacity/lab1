

#include "Render.h"

#include <Windows.h>
#include <GL\GL.h>
#include <GL\GLU.h>
#include <cmath>

void Render() {
	//низ
	glBegin(GL_TRIANGLES);
	glColor3f(1.0f, 0.0f, 1.0f);
	glNormal3f(0, 0, 1);
	glVertex3f(-6, 0, 0);
	glVertex3f(-6, 4, 0);
	glVertex3f(-4, 7, 0);
	glEnd();


	glBegin(GL_QUADS);
	glColor3f(1.0f, 0.0f, 1.0f);
	glNormal3f(0, 0, 1);
	glVertex3f(-6, 0, 0);
	glVertex3f(-12, -3, 0);
	glVertex3f(-12, 0, 0);
	glVertex3f(-6, 4, 0);
	glEnd();


	glBegin(GL_QUADS);
	glColor3f(1.0f, 0.0f, 1.0f);
	glNormal3f(0, 0, 1);
	glVertex3f(0, 0, 0);
	glVertex3f(0, 11, 0);
	glVertex3f(-4, 7, 0);
	glVertex3f(-6, 0, 0);
	glEnd();

	//днище вырезы
	glBegin(GL_TRIANGLE_FAN);
	glColor3d(0, 0, 0);
	glVertex3d(-6, 4, 0);
	for (int i = 271; i < 306; i++)
	{
		glVertex3d(-10.5 + 11.510864433221338 * cos(i * 3.14 / 180), 16.5 + 11.510864433221338 * sin(i * 3.14 / 180), 0);

	}
	glEnd();

	glBegin(GL_TRIANGLE_FAN);
	glColor3d(0, 0, 0);
	glVertex3d(-17, 3, 0);
	for (int i = 236.4; i < 275; i++)
	{
		glVertex3d(-10.5 + 11.510864433221338 * cos(i * 3.14 / 180), 16.5 + 11.510864433221338 * sin(i * 3.14 / 180), 0);

	}
	glEnd();

	glBegin(GL_TRIANGLES);
	glVertex3d(-6, 4, 0);
	glVertex3d(-17, 3, 0);
	glVertex3d(-10, 5, 0);
	glEnd();

	//верх
	glBegin(GL_TRIANGLES);
	glColor3f(0.5f, 1.0f, 0.6f);
	glNormal3f(0, 0, 1);
	glVertex3f(-6, 0, 7);
	glVertex3f(-6, 4, 7);
	glVertex3f(-4, 7, 7);
	glEnd();


	glBegin(GL_QUADS);
	glColor3f(0.5f, 1.0f, 0.6f);
	glNormal3f(0, 0, 1);
	glVertex3f(-6, 0, 7);
	glVertex3f(-12, -3, 7);
	glVertex3f(-12, 0, 7);
	glVertex3f(-6, 4, 7);
	glEnd();


	glBegin(GL_QUADS);
	glColor3f(0.5f, 1.0f, 0.6f);
	glNormal3f(0, 0, 1);
	glVertex3f(0, 0, 7);
	glVertex3f(0, 11, 7);
	glVertex3f(-4, 7, 7);
	glVertex3f(-6, 0, 7);
	glEnd();


	glBegin(GL_TRIANGLE_FAN);
	glColor3d(0, 0, 0);
	glVertex3d(-6, 4, 7);
	for (int i = 271; i < 306; i++)
	{
		glVertex3d(-10.5 + 11.510864433221338 * cos(i * 3.14 / 180), 16.5 + 11.510864433221338 * sin(i * 3.14 / 180), 7);

	}
	glEnd();

	glBegin(GL_TRIANGLE_FAN);
	glColor3d(0, 0, 0);
	glVertex3d(-17, 3, 7);
	for (int i = 236.4; i < 275; i++)
	{
		glVertex3d(-10.5 + 11.510864433221338 * cos(i * 3.14 / 180), 16.5 + 11.510864433221338 * sin(i * 3.14 / 180), 7);

	}
	glEnd();

	glBegin(GL_TRIANGLES);
	glVertex3d(-6, 4, 7);
	glVertex3d(-17, 3, 7);
	glVertex3d(-10, 5, 7);
	glEnd();

	//грани
	glBegin(GL_QUAD_STRIP);
	glColor3f(1.0f, 1.0f, 0.6f);
	glVertex3d(0, 11, 0);
	glVertex3d(0, 11, 7);
	glVertex3d(-4, 7, 0);
	glVertex3d(-4, 7, 7);
	glEnd();

	glBegin(GL_QUAD_STRIP);
	glVertex3d(0, 0, 0);
	glVertex3d(0, 0, 7);
	glVertex3d(-6, 0, 0);
	glVertex3d(-6, 0, 7);
	glVertex3d(-12, -3, 0);
	glVertex3d(-12, -3, 7);
	glVertex3d(-12, 0, 0);
	glVertex3d(-12, 0, 7);
	glVertex3d(-6, 4, 0);
	glVertex3d(-6, 4, 7);
	glVertex3d(-17, 3, 0);
	glVertex3d(-17, 3, 7);
	glVertex3d(-17, 7, 0);
	glVertex3d(-17, 7, 7);
	glEnd();
	//Окружность

	//впуклость
	glBegin(GL_QUAD_STRIP);
	glColor3d(0.5, 0, 0.5);
	for (int i = 236.4; i < 306; i++)
	{
		glVertex3d(-10.5 + 11.510864433221338 * cos(i * 3.14 / 180), 16.5 + 11.510864433221338 * sin(i * 3.14 / 180), 0);
		glVertex3d(-10.5 + 11.510864433221338 * cos(i * 3.14 / 180), 16.5 + 11.510864433221338 * sin(i * 3.14 / 180), 7);
	}
	glEnd();



	//выпуклость

	glBegin(GL_TRIANGLE_FAN);
	glColor3d(0.5, 0, 0.2);
	for (int i = -58; i < 58.5; i++)
	{
		glVertex3d(-3.5 + 6.519202405202649 * cos(i * 3.14 / 180), 5.5 + 6.519202405202649 * sin(i * 3.14 / 180), 0);
	}
	glEnd();

	glBegin(GL_TRIANGLE_FAN);
	glColor3d(0.5, 0, 0.2);
	for (int i = -58; i < 58.5; i++)
	{
		glVertex3d(-3.5 + 6.519202405202649 * cos(i * 3.14 / 180), 5.5 + 6.519202405202649 * sin(i * 3.14 / 180), 7);
	}
	glEnd();

	glBegin(GL_QUAD_STRIP);
	glColor3d(0.5, 0, 0.5);
	for (int i = -58; i < 58.5; i++)
	{
		glVertex3d(-3.5 + 6.519202405202649 * cos(i * 3.14 / 180), 5.5 + 6.519202405202649 * sin(i * 3.14 / 180), 0);
		glVertex3d(-3.5 + 6.519202405202649 * cos(i * 3.14 / 180), 5.5 + 6.519202405202649 * sin(i * 3.14 / 180), 7);
	}
	glEnd();
}

