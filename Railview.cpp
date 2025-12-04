#include <iostream>
#include <stdlib.h>
#include<GL/gl.h>
#include <GL/glut.h>
#include<math.h>
#include<cstring>
//using namespace std;
GLfloat trainPosition = 0;
GLfloat trainSpeed = 25;
GLfloat trainPosition2 = 1500.0f;
GLfloat trainSpeed2 = -30;
GLfloat sunPosition = 0;
GLfloat sunSpeed = 1;
GLfloat moonPosition = 0;
GLfloat moonSpeed = -1;
GLfloat cloudPosition = 0;
GLfloat cloudSpeed = 3;
char text[] = "RAILWAY STATION";
boolean isDay = true;

void Sprint()
{
 glColor3f(0.67, 0.60, 0.90);
 glBegin(GL_QUADS);

    glLineWidth(2);
    glVertex2i(770, 510);
    glVertex2i(770, 450);
    glVertex2i(550, 450);
    glVertex2i(550, 510);

        glEnd();

    glColor3f(0.0, 0.0, 0.0);
    glRasterPos2f(575, 475); // Fixed position

    for (int i = 0; i < strlen(text); i++) {
        glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18, text[i]);
    }
}
void NSprint()
{
    glColor3f(0.1, 0.1, 0.3);
    glBegin(GL_QUADS);

    glLineWidth(2);
    glVertex2i(770, 510);
    glVertex2i(770, 450);
    glVertex2i(550, 450);
    glVertex2i(550, 510);

    glEnd();

    glColor3f(1.0, 1.0, 0.6);
    glRasterPos2f(575, 475);

    for (int i = 0; i < strlen(text); i++) {
        glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18, text[i]);
    }
}



//////////////////////////////// road ////////////////////////////


void road()
{

 glBegin(GL_QUADS);
         //// main quad

glColor3f(0.00f, 0.002f, 0.001f);

    glVertex2i(0, 449);
    glVertex2i(0, 381);
    glVertex2i(1210, 268);
    glVertex2i(1210, 350);

 glColor3f(0.28f, 0.28f, 0.28f);
    glVertex2i(0, 445);
    glVertex2i(0, 385);
    glVertex2i(1210, 275);
    glVertex2i(1210, 355);



 glEnd();


}


void Nroad()
{

 glBegin(GL_QUADS);

         //// main quad

glColor3f(0.00f, 0.0002f, 0.0001f);

    glVertex2i(0, 449);
    glVertex2i(0, 381);
    glVertex2i(1210, 268);
    glVertex2i(1210, 350);



 glColor3f(0.28f, 0.28f, 0.28f);

    glVertex2i(0, 445);
    glVertex2i(0, 385);
    glVertex2i(1210, 275);
    glVertex2i(1210, 355);



 glEnd();


}

//////////////////////////////////////////////sky///////////////////////


void sky() {
    glBegin(GL_QUADS);
    glColor3f(0.53f, 0.81f, 0.98f);
    glVertex2i(0.0f, 450.0f);
    glVertex2i(1200.0f, 450.0f);
    glColor3f(0.98f, 0.73f, 0.68f);
    glVertex2i(1200.0f, 720.0f);
    glVertex2i(0.0f, 720.0f);
    glEnd();
}

void Nsky() {
    glBegin(GL_QUADS);
    glColor3f(0.008f, 0.03f, 0.08f);
    glVertex2i(0.0f, 450.0f);
    glVertex2i(1200.0f, 450.0f);
    glColor3f(0.90f, 0.73f, 0.98f);
    glVertex2i(1200.0f, 720.0f);
    glVertex2i(0.0f, 720.0f);
    glEnd();
}



//////////////////// hills //////////////////////////////////////////////////////////////////////

void hills() {
    glBegin(GL_POLYGON);

    glColor3f(0.42f, 0.35f, 0.25f);
    glVertex2i(0.0f, 450.0f);

    glColor3f(0.50f, 0.43f, 0.32f);
    glVertex2i(150.0f, 530.0f);

    glColor3f(0.48f, 0.41f, 0.30f);
    glVertex2i(200.0f, 555.0f);

    glColor3f(0.55f, 0.48f, 0.35f);
    glVertex2i(250.0f, 570.0f);

    glColor3f(0.45f, 0.38f, 0.28f);
    glVertex2i(300.0f, 565.0f);

    glColor3f(0.38f, 0.30f, 0.20f);
    glVertex2i(350.0f, 550.0f);

    glColor3f(0.55f, 0.48f, 0.35f);
    glVertex2i(450.0f, 570.0f);

    glColor3f(0.53f, 0.46f, 0.34f);
    glVertex2i(500.0f, 575.0f);

    glColor3f(0.60f, 0.52f, 0.39f);
    glVertex2i(600.0f, 580.0f);

    glColor3f(0.42f, 0.35f, 0.25f);
    glVertex2i(650.0f, 590.0f);

    glColor3f(0.65f, 0.58f, 0.45f);
    glVertex2i(750.0f, 640.0f);

    glColor3f(0.70f, 0.63f, 0.50f);
    glVertex2i(800.0f, 650.0f);

    glColor3f(0.58f, 0.51f, 0.39f);
    glVertex2i(850.0f, 630.0f);

    glColor3f(0.60f, 0.52f, 0.39f);
    glVertex2i(900.0f, 640.0f);

    glColor3f(0.68f, 0.62f, 0.49f);
    glVertex2i(950.0f, 650.0f);

    glColor3f(0.58f, 0.51f, 0.39f);
    glVertex2i(1050.0f, 640.0f);

    glColor3f(0.70f, 0.63f, 0.50f);
    glVertex2i(1100.0f, 650.0f);

    glColor3f(0.42f, 0.35f, 0.25f);
    glVertex2i(1200.0f, 450.0f);

    glEnd();
}

void Nhills() {
glBegin(GL_POLYGON);

glColor3f(0.15f, 0.12f, 0.10f);
glVertex2i(0.0f, 450.0f);

glColor3f(0.20f, 0.17f, 0.14f);
glVertex2i(150.0f, 530.0f);

glColor3f(0.18f, 0.15f, 0.12f);
glVertex2i(200.0f, 555.0f);

glColor3f(0.22f, 0.18f, 0.14f);
glVertex2i(250.0f, 570.0f);

glColor3f(0.19f, 0.16f, 0.13f);
glVertex2i(300.0f, 565.0f);

glColor3f(0.12f, 0.10f, 0.08f);
glVertex2i(350.0f, 550.0f);

glColor3f(0.22f, 0.18f, 0.14f);
glVertex2i(450.0f, 570.0f);

glColor3f(0.21f, 0.17f, 0.13f);
glVertex2i(500.0f, 575.0f);

glColor3f(0.25f, 0.20f, 0.16f);
glVertex2i(600.0f, 580.0f);

glColor3f(0.17f, 0.14f, 0.11f);
glVertex2i(650.0f, 590.0f);

glColor3f(0.28f, 0.23f, 0.18f);
glVertex2i(750.0f, 640.0f);

glColor3f(0.30f, 0.26f, 0.21f);
glVertex2i(800.0f, 650.0f);

glColor3f(0.24f, 0.20f, 0.16f);
glVertex2i(850.0f, 630.0f);

glColor3f(0.25f, 0.21f, 0.17f);
glVertex2i(900.0f, 640.0f);

glColor3f(0.28f, 0.24f, 0.19f);
glVertex2i(950.0f, 650.0f);

glColor3f(0.24f, 0.20f, 0.16f);
glVertex2i(1050.0f, 640.0f);

glColor3f(0.30f, 0.26f, 0.21f);
glVertex2i(1100.0f, 650.0f);

glColor3f(0.15f, 0.12f, 0.10f);
glVertex2i(1200.0f, 450.0f);

glEnd();
}



//******************************************************************************************************
void Rtree() {
    for (int x = 1030; x <= 1490; x += 70) {
        glBegin(GL_POLYGON);
        glColor3f(0.38f, 0.19f, 0.08f);
        glVertex2i(x, 255);
        glVertex2i(x + 45, 255);
        glVertex2i(x + 42, 305);
        glVertex2i(x + 45, 335);
        glVertex2i(x + 7, 335);
        glVertex2i(x + 5, 285);
        glEnd();

        glBegin(GL_TRIANGLES);
        glColor3f(0.26f, 0.44f, 0.18f);
        glVertex2i(x - 23, 335);
        glVertex2i(x + 68, 335);
        glVertex2i(x + 30, 435);
        glEnd();

        glBegin(GL_TRIANGLES);
        glColor3f(0.27f, 0.46f, 0.18f);
        glVertex2i(x - 20, 365);
        glVertex2i(x + 65, 365);
        glVertex2i(x + 28, 465);
        glEnd();

        glBegin(GL_TRIANGLES);
        glColor3f(0.27f, 0.49f, 0.18f);
        glVertex2i(x - 19, 395);
        glVertex2i(x + 65, 395);
        glVertex2i(x + 27, 495);
        glEnd();
    }
}
void Ltree()

{

 for (int x =30; x <= 300; x += 70) {
    // Tree trunk
    glBegin(GL_POLYGON);
    glColor3f(0.38f, 0.19f, 0.08f);
    glVertex2i(x, 255);
    glVertex2i(x + 45, 255);
    glVertex2i(x + 40, 305);
    glVertex2i(x + 45, 335);
    glVertex2i(x + 7, 335);
    glVertex2i(x + 5, 285);
    glEnd();

    // Tree leaves - Layer 1
    glBegin(GL_TRIANGLES);
    glColor3f(0.26f, 0.44f, 0.18f);
    glVertex2i(x - 23, 335);
    glVertex2i(x + 68, 335);
    glVertex2i(x + 30, 435);
    glEnd();

    // Tree leaves 2
    glBegin(GL_TRIANGLES);
    glColor3f(0.27f, 0.46f, 0.18f);
    glVertex2i(x - 20, 365);
    glVertex2i(x + 65, 365);
    glVertex2i(x + 28, 465);
    glEnd();

    // Tree leaves -3
    glBegin(GL_TRIANGLES);
    glColor3f(0.27f, 0.49f, 0.18f);
    glVertex2i(x - 19, 395);
    glVertex2i(x + 65, 395);
    glVertex2i(x + 27, 495);
    glEnd();
}
}

void NRtree() {
    for (int x = 1030; x <= 1490; x += 70) {
        glBegin(GL_POLYGON);
        glColor3f(0.38f, 0.19f, 0.08f);
        glVertex2i(x, 255);
        glVertex2i(x + 45, 255);
        glVertex2i(x + 42, 305);
        glVertex2i(x + 45, 335);
        glVertex2i(x + 7, 335);
        glVertex2i(x + 5, 285);
        glEnd();

        glBegin(GL_TRIANGLES);
        glColor3f(0.04f, 0.18f, 0.04f);
        glVertex2i(x - 23, 335);
        glVertex2i(x + 68, 335);
        glVertex2i(x + 30, 435);
        glEnd();

        glBegin(GL_TRIANGLES);

        glColor3f(0.08f, 0.16f, 0.08f);
        glVertex2i(x - 20, 365);
        glVertex2i(x + 65, 365);
        glVertex2i(x + 28, 465);
        glEnd();

        glBegin(GL_TRIANGLES);
        glColor3f(0.08f, 0.16f, 0.08f);
        glVertex2i(x - 19, 395);
        glVertex2i(x + 65, 395);
        glVertex2i(x + 27, 495);
        glEnd();
    }
}
void    NLtree()

{

 for (int x =30; x <= 300; x += 70) {
    // Tree trunk
    glBegin(GL_POLYGON);
    glColor3f(0.38f, 0.19f, 0.08f);
    glVertex2i(x, 255);
    glVertex2i(x + 45, 255);
    glVertex2i(x + 40, 305);
    glVertex2i(x + 45, 335);
    glVertex2i(x + 7, 335);
    glVertex2i(x + 5, 285);
    glEnd();

    // Tree leaves - Layer 1
    glBegin(GL_TRIANGLES);
   glColor3f(0.04f, 0.18f, 0.04f);
    glVertex2i(x - 23, 335);
    glVertex2i(x + 68, 335);
    glVertex2i(x + 30, 435);
    glEnd();

    // Tree leaves 2
    glBegin(GL_TRIANGLES);
    glColor3f(0.08f, 0.16f, 0.08f);
    glVertex2i(x - 20, 365);
    glVertex2i(x + 65, 365);
    glVertex2i(x + 28, 465);
    glEnd();

    // Tree leaves -3
    glBegin(GL_TRIANGLES);
   glColor3f(0.08f, 0.16f, 0.08f);
    glVertex2i(x - 19, 395);
    glVertex2i(x + 65, 395);
    glVertex2i(x + 27, 495);
    glEnd();
}
}





    void railLine()
{
    glBegin(GL_QUADS);

                // ground of the line
                 glColor3f(0.616, 0.608, 0.6);

             //  glColor3f(0.114f, 0.106f, 0.125f);
                glVertex2i(0,0 );
                glVertex2i(1500, 0);
                glVertex2i(1500,250);
                  glVertex2i(0, 250);

                glEnd();


                  //line 1
                glBegin(GL_QUADS);
                glColor3f(0.05f, 0.02f, 0.005f);
                glVertex2i(0, 20);
                glColor3f(0.98f, 0.9f, 0.875f);
                glVertex2i(0, 100);
                glColor3f(0.98f, 0.9f, 0.875f);
                glVertex2i(1500, 100);
                glColor3f(0.98f, 0.9f, 0.875f);
                glVertex2i(1500, 20);
                glEnd();

                glBegin(GL_QUADS);
                glColor3f(0.537, 0.569, 0.592);
                glVertex2i(0, 30);
                glVertex2i(0, 90);
                glVertex2i(1500, 90);
                glVertex2i(1500, 30);
                glEnd();

                glBegin(GL_LINES);
                glLineWidth(40);
                glColor3f(0.f, 0.f, 0.0f);
                glVertex2i(0, 90);
                glVertex2i(1500, 90);

                glVertex2i(0, 30);
                glVertex2i(1500,30);
                glEnd();

                glBegin(GL_QUADS);
                glColor3f(0.f, 0.f, 0.0f);
                for (int x = 0; x <= 1500; x += 30)
                {
                    glLineWidth(10);
                    glVertex2i(x, 30);
                     glVertex2i(x+2, 45);
                     glVertex2i(x+10,90);
                    glVertex2i(x+12,92);
                }
                glEnd();



    ///////////////line 2//////////////////////////


                glBegin(GL_QUADS);
                glColor3f(0.05f, 0.02f, 0.005f);
                glVertex2i(0, 100);
                glVertex2i(0, 180);
                glColor3f(0.98f, 0.9f, 0.875f);
                glVertex2i(1500,180);
                glColor3f(0.98f, 0.9f, 0.875f);
                glVertex2i(1500, 100);
                glEnd();

                glBegin(GL_QUADS);
               glColor3f(0.537, 0.569, 0.592);
                glVertex2i(0, 110);
                glVertex2i(0, 170);
                glVertex2i(1500, 170);
                glVertex2i(1500, 110);
                glEnd();

                glBegin(GL_LINES);
                glLineWidth(40);
                glColor3f(0.0f, 0.00f, 0.00f);
                glVertex2i(0, 170);
                glVertex2i(1500, 170);

                glVertex2i(0, 110);
                glVertex2i(1500, 110);
                glEnd();

                glBegin(GL_QUADS);
                glColor3f(0.f, 0.f, 0.0f);
                for (int x = 0; x <= 1500; x += 30)
                {
                    glLineWidth(20);
                    glVertex2i(x, 110);
                    glVertex2i(x+2, 115);
                    glVertex2i(x+10, 160);
                      glVertex2i(x+12, 175);

                }
                glEnd();

                glFlush();


}



void NrailLine() {
    glBegin(GL_QUADS);

    // Ground of the line (Dark Grayish for Night)
    glColor3f(0.15f, 0.15f, 0.16f);
    glVertex2i(0, 0);
    glVertex2i(1500, 0);
    glVertex2i(1500, 250);
    glVertex2i(0, 250);
    glEnd();

    // Line 1 (Darker Wood-Like Sleepers)
    glBegin(GL_QUADS);
    glColor3f(0.02f, 0.01f, 0.005f);
    glVertex2i(0, 20);
    glColor3f(0.6f, 0.6f, 0.6f);
    glVertex2i(0, 100);
    glColor3f(0.6f, 0.6f, 0.6f);
    glVertex2i(1500, 100);
    glColor3f(0.6f, 0.6f, 0.6f);
    glVertex2i(1500, 20);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.3f, 0.3f, 0.35f);
    glVertex2i(0, 30);
    glVertex2i(0, 90);
    glVertex2i(1500, 90);
    glVertex2i(1500, 30);
    glEnd();

    glBegin(GL_LINES);
    glLineWidth(40);
    glColor3f(0.1f, 0.1f, 0.1f);
    glVertex2i(0, 90);
    glVertex2i(1500, 90);
    glVertex2i(0, 30);
    glVertex2i(1500, 30);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.05f, 0.05f, 0.05f);
    for (int x = 0; x <= 1500; x += 30) {
        glVertex2i(x, 30);
        glVertex2i(x + 2, 45);
        glVertex2i(x + 10, 90);
        glVertex2i(x + 12, 92);
    }
    glEnd();

    // Line 2
    glBegin(GL_QUADS);
    glColor3f(0.02f, 0.01f, 0.005f);
    glVertex2i(0, 100);
    glVertex2i(0, 180);
    glColor3f(0.6f, 0.6f, 0.6f);
    glVertex2i(1500, 180);
    glColor3f(0.6f, 0.6f, 0.6f);
    glVertex2i(1500, 100);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.3f, 0.3f, 0.35f);
    glVertex2i(0, 110);
    glVertex2i(0, 170);
    glVertex2i(1500, 170);
    glVertex2i(1500, 110);
    glEnd();

    glBegin(GL_LINES);
    glLineWidth(40);
    glColor3f(0.1f, 0.1f, 0.1f);
    glVertex2i(0, 170);
    glVertex2i(1500, 170);
    glVertex2i(0, 110);
    glVertex2i(1500, 110);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.05f, 0.05f, 0.05f);
    for (int x = 0; x <= 1500; x += 30) {
        glVertex2i(x, 110);
        glVertex2i(x + 2, 115);
        glVertex2i(x + 10, 160);
        glVertex2i(x + 12, 175);
    }
    glEnd();

    glFlush();
}




void backplatform() {

    glPushMatrix();
    glTranslatef(675, 230, 0.0);

    glColor3f(0.67, 0.60, 0.90);


    glBegin(GL_POLYGON);
    for (int i = 0; i < 180; i++) {
        float pi = 3.1416;
        float A = (i * 2 * pi) / 180;
        float r = 377;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x, y);

    }
    glEnd();

     glColor3f(01.0, 01.0, 01.0);


    glBegin(GL_POLYGON);
    for (int i = 0; i < 180; i++) {
        float pi = 3.1416;
        float A = (i * 2 * pi) / 180;
        float r = 375;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x, y);
       glColor3f(0.6, 0.549, 0.498);
    }
    glEnd();


     glColor3f(0.0, 0.0, 0.0);

    glBegin(GL_POLYGON);
    for (int i = 0; i < 180; i++) {
        float pi = 3.1416;
        float A = (i * 2 * pi) / 180;
        float r = 370;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x, y);

    }
    glEnd();
     //glColor3f(0.48, 0.60, 0.90);
       glColor3f(0.67, 0.30, 0.27);
       glBegin(GL_POLYGON);
    for (int i = 0; i < 180; i++) {
        float pi = 3.1416;
        float A = (i * 2 * pi) / 180;
        float r = 365;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x, y);

    }
    glEnd();


    glPopMatrix();


}


void Nbackplatform() {
    glPushMatrix();
    glTranslatef(675, 230, 0.0);

    // Outermost layer (Dark purple-blue for night)
    glColor3f(0.15f, 0.12f, 0.3f);
    glBegin(GL_POLYGON);
    for (int i = 0; i < 180; i++) {
        float pi = 3.1416;
        float A = (i * 2 * pi) / 180;
        float r = 377;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x, y);
    }
    glEnd();

    // Second layer (Dark grayish-blue)
    glColor3f(0.3f, 0.3f, 0.4f);
    glBegin(GL_POLYGON);
    for (int i = 0; i < 180; i++) {
        float pi = 3.1416;
        float A = (i * 2 * pi) / 180;
        float r = 375;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x, y);
        glColor3f(0.25f, 0.25f, 0.3f);
    }
    glEnd();

    // Third layer (Black for night shadow)
    glColor3f(0.0f, 0.0f, 0.0f);
    glBegin(GL_POLYGON);
    for (int i = 0; i < 180; i++) {
        float pi = 3.1416;
        float A = (i * 2 * pi) / 180;
        float r = 370;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x, y);
    }
    glEnd();

    // Innermost layer (Dark reddish-brown for a night platform effect)
    glColor3f(0.3f, 0.1f, 0.1f);
    glBegin(GL_POLYGON);
    for (int i = 0; i < 180; i++) {
        float pi = 3.1416;
        float A = (i * 2 * pi) / 180;
        float r = 365;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x, y);
    }
    glEnd();

    glPopMatrix();
}





///////////////////////////////platform//////////////////////////////////////////////////////////////////////////


void platform() {
    glBegin(GL_QUADS);
         //// lower part
    glColor3f(0.f, 0.f, 0.0f);
    glLineWidth(2);
    glVertex2i(301, 230);
    glVertex2i(1050, 230);
    glVertex2i(1050, 210);
    glVertex2i(301, 210);

    //// middle part/////

    glColor3f(0.6, 0.549, 0.498);
    //glLineWidth(2);
    glVertex2i(300, 230);
    glVertex2i(1050, 230);
    glVertex2i(1050, 250);
    glVertex2i(300, 250);

    glColor3f(0.5, 0.5, 0.5);
    glVertex2i(303, 270);
    glVertex2i(1053, 270);
    glVertex2i(1050, 250);
    glVertex2i(300, 250);


 //   upper part //
    glColor3f(0.031, 0.612, 0.875);
    glVertex2i(300, 400);
    glVertex2i(1050, 400);
    glVertex2i(1080, 330);
    glVertex2i(260, 330);


         /////////////////pilar//////////////
    glColor3f(0.424, 0.341, 0.282);
    for (int x = 350; x <= 1020; x += 100) {
        glVertex2i(x, 270);
        glVertex2i(x + 20, 270);
        glVertex2i(x + 30, 330);
        glVertex2i(x - 30, 330);
    }


    glEnd();
}

void Nplatform() {
    glBegin(GL_QUADS);

    //// Lower part (Dark base)
    glColor3f(0.1f, 0.1f, 0.1f);
    glVertex2i(301, 230);
    glVertex2i(1050, 230);
    glVertex2i(1050, 210);
    glVertex2i(301, 210);

    //// Middle part (Dark grayish-blue)
    glColor3f(0.3f, 0.3f, 0.35f);
    glVertex2i(300, 230);
    glVertex2i(1050, 230);
    glVertex2i(1050, 250);
    glVertex2i(300, 250);

    //// Top edge (Slightly lighter gray for highlight)
    glColor3f(0.4f, 0.4f, 0.45f);
    glVertex2i(303, 270);
    glVertex2i(1053, 270);
    glVertex2i(1050, 250);
    glVertex2i(300, 250);

    //// Upper part (Dark blue for a night effect)
    glColor3f(0.02f, 0.2f, 0.4f);
    glVertex2i(300, 400);
    glVertex2i(1050, 400);
    glVertex2i(1080, 330);
    glVertex2i(260, 330);

    //// Pillars (Dark brown for night shadows)
    glColor3f(0.2f, 0.15f, 0.1f);
    for (int x = 350; x <= 1020; x += 100) {
        glVertex2i(x, 270);
        glVertex2i(x + 20, 270);
        glVertex2i(x + 30, 330);
        glVertex2i(x - 30, 330);
    }

    glEnd();
}




    ///////////////////////////////// bamboWall////////////////////////////////////////////////////////


void bamboWall()
{
    glLineWidth(5);
    glBegin(GL_LINES);
    glColor3f(1.0f, 0.0f, 0.0f);

    for(int x = 0; x<320; x+=20)
    {
        glVertex2f(x,240);
        glVertex2f(x,320);
    }

   for(int y = 245; y<=320; y+=20)
    {
        glVertex2f(0,y);
        glVertex2f(300,y);
    }

glEnd();
 glLineWidth(5);
    glBegin(GL_LINES);
    glColor3f(1.0f, 0.0f, 0.0f);

     for(int x = 1060; x<1300; x+=20)
    {
        glVertex2f(x,240);
        glVertex2f(x,320);
    }

   for(int y = 245; y<=320; y+=20)
    {
        glVertex2f(1060,y);
        glVertex2f(1300,y);
    }

    glEnd();


}

void NbamboWall() {
    glLineWidth(5);

    // Set the bamboo line color to a darker shade for night (dark green or brown)
    glColor3f(0.3f, 0.5f, 0.1f);  // Dark green bamboo color

    glBegin(GL_LINES);
    // First bamboo wall (left side)
    for (int x = 0; x < 320; x += 20) {
        glVertex2f(x, 240);
        glVertex2f(x, 320);
    }

    for (int y = 245; y <= 320; y += 20) {
        glVertex2f(0, y);
        glVertex2f(300, y);
    }
    glEnd();

    glBegin(GL_LINES);
    // Second bamboo wall (right side)
    for (int x = 1060; x < 1300; x += 20) {
        glVertex2f(x, 240);
        glVertex2f(x, 320);
    }

    for (int y = 245; y <= 320; y += 20) {
        glVertex2f(1060, y);
        glVertex2f(1300, y);
    }
    glEnd();

    // Optionally, you can apply a background color for the night
    //glClearColor(0.0f, 0.0f, 0.2f, 1.0f);  // Deep navy blue background for night
}



//////////////////////////////////////lamp///////////////////////


void lamp(){
glBegin(GL_QUADS);

   ////////////// lamp1//////////////////////


    glColor3f(0.0, 0.0, 0.0);
     glVertex2i(300, 270);
     glVertex2i(305, 270);
     glVertex2i(305, 360);
     glVertex2i(300, 360);


      glVertex2i(300, 347);
     glVertex2i(300, 350);
     glVertex2i(325, 353);
     glVertex2i(325, 350);

      glEnd();


 glPushMatrix();

    glTranslatef(333, 347, 0.0); // Translate to the position of the current wheel

    // light
    glColor3f(01.0, 01.0, 01.0);
    glBegin(GL_POLYGON);
    for (int i = 0; i < 360; i++) {
        float pi = 3.1416;
        float A = (i * pi) / 180; // Angle in radians
        float r = 8; // Radius for outer wheel
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x, y);
    }
    glEnd();
    glPopMatrix();



}

//////////////////////////////////lamp2//////////////////////////////////////





void lamp2(){
glBegin(GL_QUADS);

   ////////////// lamp1//////////////////////


    glColor3f(0.0, 0.0, 0.0);
     glVertex2i(1050, 270);
     glVertex2i(1045, 270);
     glVertex2i(1045, 360);
     glVertex2i(1050, 360);


      glVertex2i(1050, 347);
     glVertex2i(1050, 350);
     glVertex2i(1025, 353);
     glVertex2i(1025, 350);

      glEnd();


 glPushMatrix();

    glTranslatef(1025, 347, 0.0); // Translate to the position of the current wheel

    // light
    glColor3f(01.0, 01.0, 01.0);
    glBegin(GL_POLYGON);
    for (int i = 0; i < 360; i++) {
        float pi = 3.1416;
        float A = (i * pi) / 180; // Angle in radians
        float r = 8; // Radius for outer wheel
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x, y);
    }
    glEnd();
    glPopMatrix();

}




void Nlamp(){
glBegin(GL_QUADS);

   ////////////// lamp1//////////////////////


    glColor3f(0.0, 0.0, 0.0);
     glVertex2i(300, 270);
     glVertex2i(305, 270);
     glVertex2i(305, 360);
     glVertex2i(300, 360);


      glVertex2i(300, 347);
     glVertex2i(300, 350);
     glVertex2i(325, 353);
     glVertex2i(325, 350);

      glEnd();


 glPushMatrix();

    glTranslatef(333, 347, 0.0); // Translate to the position of the current wheel

    // light
    glColor3f(01.0, 01.0, 0.0);
    glBegin(GL_POLYGON);
    for (int i = 0; i < 360; i++) {
        float pi = 3.1416;
        float A = (i * pi) / 180; // Angle in radians
        float r = 8; // Radius for outer wheel
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x, y);
    }
    glEnd();
    glPopMatrix();



}

//////////////////////////////////lamp2//////////////////////////////////////





void Nlamp2(){
glBegin(GL_QUADS);

   ////////////// lamp1//////////////////////


    glColor3f(0.0, 0.0, 0.0);
     glVertex2i(1050, 270);
     glVertex2i(1045, 270);
     glVertex2i(1045, 360);
     glVertex2i(1050, 360);


      glVertex2i(1050, 347);
     glVertex2i(1050, 350);
     glVertex2i(1025, 353);
     glVertex2i(1025, 350);

      glEnd();


 glPushMatrix();

    glTranslatef(1025, 347, 0.0); // Translate to the position of the current wheel

    // light
    glColor3f(01.0, 01.0, 0.0);
    glBegin(GL_POLYGON);
    for (int i = 0; i < 360; i++) {
        float pi = 3.1416;
        float A = (i * pi) / 180; // Angle in radians
        float r = 8; // Radius for outer wheel
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x, y);
    }
    glEnd();
    glPopMatrix();


}




//////////////////////////////////train 1////////////////////////////////////////////////////////////////////////////////////

void train1() {


    glPushMatrix();
    glTranslatef(trainPosition, 0.0f, 0.0f);


         ////////////  Wheel 1/////////////////////////////////

   glPushMatrix();

for (int x = 45; x <= 680; x += 69) {
    glPushMatrix();
    glTranslatef(x, 137, 0.0);

    glColor3f(0.0, 0.0, 0.0);
    glBegin(GL_POLYGON);
    for (int i = 0; i < 360; i++) {
        float pi = 3.1416;
        float A = (i * pi) / 180; // Angle in radians
        float r = 18; // Radius for outer wheel
        float px = r * cos(A);
        float py = r * sin(A);
        glVertex2f(px, py);
    }
    glEnd();



    // Inner gray part of the wheel
    glColor3f(0.69f, 0.69f, 0.69f);
    glBegin(GL_POLYGON);
    for (int i = 0; i < 360; i++) {
        float pi = 3.1416;
        float A = (i * pi) / 180; // Angle in radians
        float r = 5; // Radius for inner part
        float px = r * cos(A);
        float py = r * sin(A);
        glVertex2f(px, py);
    }
    glEnd();

    glPopMatrix(); // Restore the matrix state
}

glPopMatrix();



    glColor3f(0.0, 1.0, 0.0); // Green color for the train body
    glBegin(GL_QUADS);
    for (int x =10; x <= 650; x += 140) {
        glVertex2i(x, 132);
        glVertex2i(x, 217);
        glVertex2i(x + 120, 217);
        glVertex2i(x + 120, 132);
    }
    glEnd();



    glColor3f(1.0, 1.0, 0.0); // Yellow for the back
    glBegin(GL_QUADS);
    for (int x = 130; x <= 650; x += 140) {
        glVertex2i(x, 132);
        glVertex2i(x , 217);
        glVertex2i(x + 10, 222);
        glVertex2i(x+10, 137);
    }
    glEnd();


       glColor3f(1.0, 0.0, 0.0); // red roof
    glBegin(GL_QUADS);
    for (int x = 10; x <= 650; x += 140) {
        glVertex2i(x, 217);
        glVertex2i(x+5, 222);
        glVertex2i(x + 125, 222);
        glVertex2i(x+125, 217);
    }
    glEnd();


   ////// /////////////window/////////////////////////////////////////////////////////////////////////////


    glColor3f(01.0, 1.0, 01.0); // Green color for the train body
    glBegin(GL_QUADS);
    for (int x =30; x <= 650; x += 140) {
        glVertex2i(x, 157);
        glVertex2i(x, 197);
        glVertex2i(x + 30, 197);
        glVertex2i(x + 30, 157);
    }
    glEnd();


      glColor3f(01.0, 1.0, 01.0); // Green color for the train body
    glBegin(GL_QUADS);
    for (int x =80; x <= 650; x += 140) {
        glVertex2i(x, 157);
        glVertex2i(x, 197);
        glVertex2i(x + 30, 197);
        glVertex2i(x + 30, 157);
    }
    glEnd();

    glPopMatrix();

}



//////////////////////////////////train2////////////////////////////////////////////////////////




void train2() {
    glPushMatrix();
    glTranslatef(trainPosition2, 0.0f, 0.0f);

     glPushMatrix();

for (int x = 325; x <= 980; x += 70) {
    glPushMatrix(); //current  wheel
    glTranslatef(x, 45, 0.0); // Translate to the position of the current wheel

    // Outer black wheel
    glColor3f(0.0, 0.0, 0.0);
    glBegin(GL_POLYGON);
    for (int i = 0; i < 360; i++) {
        float pi = 3.1416;
        float A = (i * pi) / 180; // Angle in radians
        float r = 18; // Radius for outer wheel
        float px = r * cos(A);
        float py = r * sin(A);
        glVertex2f(px, py);
    }
    glEnd();

    // Inner gray part of the wheel
    glColor3f(0.69f, 0.69f, 0.69f);
    glBegin(GL_POLYGON);
    for (int i = 0; i < 360; i++) {
        float pi = 3.1416;
        float A = (i * pi) / 180; // Angle in radians
        float r = 5; // Radius for inner part
        float px = r * cos(A);
        float py = r * sin(A);
        glVertex2f(px, py);
    }
    glEnd();

    glPopMatrix(); // Restore the matrix state
}

glPopMatrix();

  ///////////////////////////////////////////body//////////////////////////////////////////////


     glColor3f(0.0, 1.0, 0.0); // Green color for the train body
    glBegin(GL_QUADS);
    for (int x =300; x <= 920; x += 140) {
        glVertex2i(x, 45);
        glVertex2i(x, 130);
        glVertex2i(x + 125, 130);
        glVertex2i(x + 125, 45);
    }
    glEnd();



    glColor3f(1.0, 1.0, 0.0); // Yellow for the roof
    glBegin(GL_QUADS);
    for (int x = 420; x <= 920; x += 140) {
        glVertex2i(x, 50);
        glVertex2i(x , 130);
        glVertex2i(x - 10, 132);
        glVertex2i(x- 10, 45);
    }
    glEnd();


       glColor3f(01.0, 0.0, 0.0); // red roof
    glBegin(GL_QUADS);
    for (int x = 300; x <= 920; x += 140) {
        glVertex2i(x, 127);
        glVertex2i(x+5, 132);
        glVertex2i(x + 125, 132);
        glVertex2i(x+125, 127);
    }
    glEnd();


   ////// /////////////window for train 2 /////////////////////////////////////////////////////////////////////////////

  glColor3f(01.0, 1.0, 01.0); // Green color for the train body
    glBegin(GL_QUADS);
    for (int x =320; x <= 920; x += 140) {
        glVertex2i(x, 70);
        glVertex2i(x, 110);
        glVertex2i(x + 30, 110);
        glVertex2i(x + 30, 70);
    }
    glEnd();


      glColor3f(01.0, 1.0, 01.0); // Green color for the train body
    glBegin(GL_QUADS);
    for (int x =370; x <= 960; x += 140) {
        glVertex2i(x, 70);
        glVertex2i(x, 110);
        glVertex2i(x + 30, 110);
        glVertex2i(x + 30, 70);
    }
    glEnd();


    glPopMatrix();
}

void updateTrain1(int value) {
    trainPosition += trainSpeed;
    if (trainPosition > 2200.0f) {
        trainPosition = -700.0f; // Reset train position when it exits the screen
    }
    glutPostRedisplay();
    glutTimerFunc(70, updateTrain1, 0);
}

void updateTrain2(int value) {
    trainPosition2 += trainSpeed2;
    if (trainPosition2 < -900.0f) {
        trainPosition2 = 2200.0f; // Reset train position when it exits the screen
    }
    glutPostRedisplay();
    glutTimerFunc(100, updateTrain2, 0); // Match the first train's speed
}


///////////////// sun ///////////////////////


void sun() {
    glPushMatrix();
    glTranslatef(100 + sunPosition, 680, 0.0); // Use sunPosition here
      glColor3f(1.0f, 1.0f, 0.680f);
    glBegin(GL_POLYGON);
    for (int i = 0; i < 360; i++) {
        float pi = 3.1416;
        float A = (i * 2 * pi) / 180;
        float r = 25;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x, y);
    }
    glEnd();
    glPopMatrix();
}

void updatesun(int value) {
    sunPosition += sunSpeed;
    if (sunPosition > 1500.0f) {
        sunPosition = -50.0f; // Reset sun position when it exits the screen
    }
    glutPostRedisplay();
    glutTimerFunc(150, updatesun, 0);
}



void moon() {
    glPushMatrix();
    glTranslatef(100, 680 + moonPosition, 0.0); // Transition on Y-axis

    glColor3f(01.f, 01.0f, 01.0f);
    glBegin(GL_POLYGON);
    for (int i = 0; i < 360; i++) {
        float pi = 3.1416;
        float A = (i * 2 * pi) / 180;
        float r = 25;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x, y);
    }
    glEnd();
    glPopMatrix();
}

void updateMoon(int value) {
    moonPosition += moonSpeed;
    if (moonPosition >800.0f) { // Adjust based on your scene height
        moonPosition = 00.0f; // Reset when it exits the screen
    }
    glutPostRedisplay();
    glutTimerFunc(150, updateMoon, 0);
}



////////////////////////////////////cloud//////////////////////



void drawCircle(float cx, float cy, float radius) {
    glBegin(GL_POLYGON);
    for (int i = 0; i < 360; i++) {
        float pi = 3.1416;
        float angle = (i * pi) / 180;
        float x = cx + (radius * cos(angle));
        float y = cy + (radius * sin(angle));
        glVertex2f(x, y);
    }
    glEnd();
}




void cloud() {
    glPushMatrix();
    glTranslatef(cloudPosition, 0.0f, 0.0f);

    glColor3f(1.0f, 1.0f, 1.0f); // White color for cloud

    drawCircle(1150.0f, 680.0f, 25.0f);
    drawCircle(1180.0f, 680.0f, 25.0f);
    drawCircle(1120.0f, 680.0f, 25.0f);
    drawCircle(1135.0f, 700.0f, 20.0f);
    drawCircle(1165.0f, 700.0f, 20.0f);
    drawCircle(1150.0f, 665.0f, 15.0f);
    drawCircle(1105.0f, 690.0f, 20.0f);
    drawCircle(1195.0f, 690.0f, 20.0f);

    glPopMatrix();
}

void Ncloud() {
    glPushMatrix();
    glTranslatef(cloudPosition, 0.0f, 0.0f);

    glColor3f(0.50f, .50f, 0.50f); // gray color for cloud

    drawCircle(1150.0f, 680.0f, 25.0f);
    drawCircle(1180.0f, 680.0f, 25.0f);
    drawCircle(1120.0f, 680.0f, 25.0f);
    drawCircle(1135.0f, 700.0f, 20.0f);
    drawCircle(1165.0f, 700.0f, 20.0f);
    drawCircle(1150.0f, 665.0f, 15.0f);
    drawCircle(1105.0f, 690.0f, 20.0f);
    drawCircle(1195.0f, 690.0f, 20.0f);

    glPopMatrix();
}




void updateCloud(int value) {
    cloudPosition -= cloudSpeed;
    if (cloudPosition > 1500.0f) { // Move it across the full screen width (assuming 1200 width)
        cloudPosition = -50.0f; // Start from fully off-screen for a smooth transition
    }
    glutPostRedisplay();
    glutTimerFunc(100, updateCloud, 0);
}




void Day()
{
                glClearColor(0.08f, 0.86f, 0.16f, 0.0f);
              road();
              sky();
              sun();
              hills();
              backplatform();
              Rtree();
              Ltree();
              railLine();
              platform();
              Sprint();
              lamp();
              lamp2();
              bamboWall();
              train1();
              train2();
              cloud();


}



void Night(){

    glClearColor(0.267, 0.341, 0.251,0.0);

            Nroad();
            Nsky();
            moon();
            Nhills();
            Nbackplatform();
            NRtree();
            NLtree();
            NrailLine();
            Nplatform();
            NSprint();
            Nlamp();
            Nlamp2();
            NbamboWall();
            train1();
            train2();
            Ncloud();


}



void info(){


   using namespace std;

   cout<<" Press N for night view"<<endl;
   cout<<" Press D for day view"<<endl;



}



void myKeyboard(unsigned char key, int x, int y) {
    switch (key) {
        case 27:  // Escape key
            exit(0);  // Exit the program
            break;

        case 'd':  // 'd' key for day mode
            isDay = true;  // Set Day to true
            break;

        case 'n':  // 'n' key for night mode
            isDay = false;  // Set Day to false
            break;

        default:
            break;
    }
}



void display() {
    glClear(GL_COLOR_BUFFER_BIT);  // Clear the screen

    if (isDay) {
        Day();  // Call the Day setup
    } else {
        Night();  // Call the Night setup
    }

    glutSwapBuffers();  // Swap buffers to update the screen
}



void init() {
    glClearColor(0.0, 0.0, 0.0, 0.0);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D(0.0, 1200.0, 0.0, 720.0);



}
int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutInitWindowSize(1200, 720); // Set the window's initial width & height
    glutInitWindowPosition(10, 10);  // Set the window's initial position according to the monitor
    glutCreateWindow("RailView"); // Create a window with the given title
    init();
      glutDisplayFunc(info);
    glutKeyboardFunc(myKeyboard);

    glutDisplayFunc(display); // Register display callback handler for window re-paint
         glutTimerFunc(100, updateTrain1, 0);
         glutTimerFunc(100, updateTrain2  , 0);
        glutTimerFunc(150, updatesun, 0);
         glutTimerFunc(150, updateCloud, 0);
          glutTimerFunc(150, updateMoon, 0);




    glutMainLoop(); // Enter the event-processing loop
    return 0;
}




