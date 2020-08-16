#include <iostream>
#include <GL/glut.h>
#include <stdlib.h>
#include <math.h>
#define PI 3.1416

    GLint i;
    static GLfloat spin = 0.0;
    static float	tx	=  0.0;
    static float	ty	=  0.0;
    static float	tx1	=  0.0;
    static float	ty1	=  0.0;

void init(void)
{
        glClearColor(147.0f/255.0f, 216.0f/255.0f, 247.0f/255.0f, 0.0);
        glMatrixMode(GL_PROJECTION);
        gluOrtho2D(0.0, 500.0, 0.0, 500.0);
}

void movement(void)
{
          ty -=0.05;
          ty1 -=0.04;

             if (ty < -200.0)
                 ty +=200;
             if (ty1 < -80.0)
                 ty1  += 100.0;


        glutPostRedisplay();

}

void DrawCircle(float cx, float cy, float rx,float ry )
{
        glBegin(GL_TRIANGLE_FAN);
        for(i = 0; i < 360; i++)
        {
            float theta = 2.0f * 3.1415926f * float(i) / float(360);

            float x = rx * cosf(theta);
            float y = ry * sinf(theta);
            glVertex2f(x + cx, y + cy);

        }
        glEnd();
}

void circle(GLdouble rad, GLdouble x, GLdouble y)

{
        GLint points = 360;
        GLdouble delTheta = (2.0 * PI) / (GLdouble)points;
        GLdouble theta = 0.0;

        glBegin(GL_TRIANGLE_FAN);
        {
            for( i = 0; i <=360; i++, theta += delTheta )
            {
                glVertex2f(x+rad * cos(theta),y+rad * sin(theta));
            }
        }
        glEnd();
}

void half_circle(GLdouble rad, GLdouble x, GLdouble y)

{
        GLint points = 180;
        GLdouble delTheta =  PI / (GLdouble)points;
        GLdouble theta = 0.0;

        glBegin(GL_TRIANGLE_FAN);
        {
            for( i = 0; i <=180; i++, theta += delTheta )
            {
                glVertex2f(x+rad * cos(theta),y+rad * sin(theta));
            }
        }
        glEnd();
}
void hill()
{
      glColor3ub(60, 166, 216);

      circle(90,20,200);
      circle(150,470,150);

      glBegin(GL_POLYGON);
      glVertex2f(85,260);
      glVertex2f(350,150);
      glVertex2f(350,50);
      glVertex2f(90,50);
      glEnd();

      glBegin(GL_POLYGON);
      glVertex2f(360,250);
      glVertex2f(150,180);
      glVertex2f(150,50);
      glVertex2f(360,50);
      glEnd();

      glColor3ub(90, 182, 231);

      circle(170,50,50);
      circle(120,470,100);

      half_circle(120,300,0);
      glBegin(GL_POLYGON);
      glVertex2f(175,165);
      glVertex2f(300,100);
      glVertex2f(300,50);
      glVertex2f(200,50);
      glEnd();

      glBegin(GL_POLYGON);
      glVertex2f(375,170);
      glVertex2f(200,100);
      glVertex2f(250,20);
      glVertex2f(370,20);
      glEnd();

      glColor3ub(230, 245, 252);

      half_circle(150,20,0);
      half_circle(70,160,0);

      glBegin(GL_POLYGON);
      glVertex2f(200,40);
      glVertex2f(350,25);
      glVertex2f(350,0);
      glVertex2f(200,0);
      glEnd();

      half_circle(50,380,0);
      half_circle(100,470,0);



}

void window()
{
       glColor3ub(39, 94, 158);
       glRectf(315,150,339,177);
       glRectf(342,150,366,177);
       glRectf(369,150,393,177);
       glRectf(396,150,420,177);

       glRectf(56,182,70,197);
       glRectf(73,182,87,197);

       glRectf(204,178,213,188);
       glRectf(214,178,223,188);
       glRectf(224,178,233,188);
       glRectf(234,178,243,188);

       glRectf(217,204,227,213);
       glRectf(228,204,238,213);
    ///
       glColor3ub(26, 29, 80);
       glRectf(321,150,333,177);
       glRectf(348,150,360,177);
       glRectf(375,150,387,177);
       glRectf(402,150,414,177);

       glRectf(60,182,66,197);
       glRectf(77,182,83,197);

       glRectf(206,178,211,188);
       glRectf(216,178,221,188);
       glRectf(226,178,231,188);
       glRectf(236,178,241,188);

       glRectf(220,204,224,213);
       glRectf(231,204,235,213);

       ////
       glColor3ub(119, 201, 238);
       glBegin(GL_TRIANGLES);
       glVertex2f(321,177);
       glVertex2f(333,177);
       glVertex2f(321,150);
       glEnd();

       glBegin(GL_TRIANGLES);
       glVertex2f(348,177);
       glVertex2f(360,177);
       glVertex2f(348,150);
       glEnd();

       glBegin(GL_TRIANGLES);
       glVertex2f(375,177);
       glVertex2f(387,177);
       glVertex2f(375,150);
       glEnd();


       glBegin(GL_TRIANGLES);
       glVertex2f(402,177);
       glVertex2f(414,177);
       glVertex2f(402,150);
       glEnd();

       glBegin(GL_TRIANGLES);
       glVertex2f(60,197);
       glVertex2f(66,197);
       glVertex2f(60,182);
       glEnd();

       glBegin(GL_TRIANGLES);
       glVertex2f(77,197);
       glVertex2f(83,197);
       glVertex2f(77,182);
       glEnd();

     //

       glBegin(GL_TRIANGLES);
       glVertex2f(206,188);
       glVertex2f(211,188);
       glVertex2f(206,178);
       glEnd();

       glBegin(GL_TRIANGLES);
       glVertex2f(216,188);
       glVertex2f(221,188);
       glVertex2f(216,178);
       glEnd();

       glBegin(GL_TRIANGLES);
       glVertex2f(226,188);
       glVertex2f(231,188);
       glVertex2f(226,178);
       glEnd();

       glBegin(GL_TRIANGLES);
       glVertex2f(236,188);
       glVertex2f(241,188);
       glVertex2f(236,178);
       glEnd();

       glBegin(GL_TRIANGLES);
       glVertex2f(220,213);
       glVertex2f(224,213);
       glVertex2f(220,204);
       glEnd();

       glBegin(GL_TRIANGLES);
       glVertex2f(231,213);
       glVertex2f(235,213);
       glVertex2f(231,204);
       glEnd();

}


void house ()
{
//big house
        glColor3ub(60, 166, 216);
        glRectf(310,140,425,180);

        glColor3ub(25, 28, 79);
        glRectf(310,180,425,185);
        glRectf(425,140,450,185);

        glColor3ub(230, 245, 252);
        glBegin(GL_POLYGON);
        glVertex2f(305,185);
        glVertex2f(330,230);
        glVertex2f(440,230);
        glVertex2f(425,185);
        glEnd();

        glRectf(304,185,330,189);
        glRectf(428,250,449,254);

        circle(2,305,187);

        glBegin(GL_POLYGON);
        glVertex2f(440,228);
        glVertex2f(443,232);
        glVertex2f(466,182);
        glVertex2f(463,180);
        glEnd();

        glColor3ub(25, 28, 79);
        glRectf(434,140,449,250);
        glRectf(430,254,433,259);
        glRectf(437,254,440,259);
        glRectf(444,254,447,259);

        glBegin(GL_TRIANGLES);
        glVertex2f(425,185);
        glVertex2f(460,185);
        glVertex2f(440,230);
        glEnd();

        glColor3ub(60, 166, 216);
        glRectf(434,250,428,210);


        /////////small house
        glColor3ub(60, 166, 216);
        glBegin(GL_POLYGON);
        glVertex2f(431,140);
        glVertex2f(431,160);
        glVertex2f(460,161);
        glVertex2f(460,140);
        glEnd();


        glColor3ub(25, 28, 79);
        glRectf(431,160,460,163);

        glBegin(GL_POLYGON);
        glVertex2f(460,140);
        glVertex2f(460,163);
        glVertex2f(485,166);
        glVertex2f(485,142);
        glEnd();

        glBegin(GL_TRIANGLES);
        glVertex2f(460,163);
        glVertex2f(485,166);
        glVertex2f(473,190);
        glEnd();
          /////////
        glColor3ub(230, 245, 252);
        glBegin(GL_POLYGON);
        glVertex2f(430,163);
        glVertex2f(460,163);
        glVertex2f(475,193);
        glVertex2f(445,193);
        glEnd();

        glBegin(GL_POLYGON);
        glVertex2f(475,193);
        glVertex2f(472,190);
        glVertex2f(485,166);
        glVertex2f(488,168);
        glEnd();


        ///2nd house
        glColor3ub(60, 166, 216);
        glRectf(53,175,90,200);

        glColor3ub(230, 245, 252);
        glBegin(GL_POLYGON);
        glVertex2f(50,200);
        glVertex2f(90,200);
        glVertex2f(105,225);
        glVertex2f(65,225);
        glEnd();

        circle(1,51,201);

        glBegin(GL_POLYGON);
        glVertex2f(102,225);
        glVertex2f(115,200);
        glVertex2f(118,201);
        glVertex2f(107,224);
        glEnd();

        glRectf(96,240,107,242);

        glColor3ub(25, 28, 79);
        glRectf(90,175,115,200);
        glRectf(100,175,107,240);
        glRectf(103,242,106,246);
        glRectf(97,242,100,246);

        glBegin(GL_TRIANGLES);
        glVertex2f(90,200);
        glVertex2f(115,200);
        glVertex2f(103,225);
        glEnd();


        glColor3ub(60, 166, 216);
        glRectf(100,240,96,220);

        ////double house

        glColor3ub(58, 166, 212);
        glRectf(202,172,245,190);

        glColor3ub(230, 245, 252);
        glBegin(GL_POLYGON);
        glVertex2f(200,190);
        glVertex2f(245,190);
        glVertex2f(253,209);
        glVertex2f(208,209);
        glEnd();

        circle(1,201,191);

        glBegin(GL_POLYGON);
        glVertex2f(251,190);
        glVertex2f(262,190);
        glVertex2f(253,208);
        glEnd();

        glColor3ub(25, 28, 79);
        glRectf(245,172,260,190);
        glRectf(250,175,255,215);

        glBegin(GL_TRIANGLES);
        glVertex2f(245,190);
        glVertex2f(260,190);
        glVertex2f(252,205);
        glEnd();

        ///

        glColor3ub(60, 166, 216);
        glRectf(215,200,240,215);

        glColor3ub(230, 245, 252);
        glBegin(GL_POLYGON);
        glVertex2f(213,215);
        glVertex2f(240,215);
        glVertex2f(248,235);
        glVertex2f(221,235);
        glEnd();

        circle(1,214,216);
        glBegin(GL_POLYGON);
        glVertex2f(248,233);
        glVertex2f(255,215);
        glVertex2f(257,215);
        glVertex2f(250,233);
        glEnd();


        glColor3ub(25, 28, 79);
        glRectf(240,200,250,215);
        glRectf(246,200,250,243);
        glRectf(245,243,246,245);
        glRectf(248,243,250,245);

        glBegin(GL_TRIANGLES);
        glVertex2f(240,215);
        glVertex2f(255,215);
        glVertex2f(247.5,233);
        glEnd();

        glColor3ub(60, 166, 216);
        glRectf(244,230,246,243);

        glColor3ub(230, 245, 252);
        glRectf(244,243,250,244);

          //window
        window();

}


void other()
{


      glColor3ub(36, 136, 198);
      DrawCircle(71, 177, 45, 10);
      DrawCircle(396, 139, 90, 15);
      DrawCircle(220, 171, 40, 10);

      glColor3ub(227, 246, 252);
      glBegin(GL_TRIANGLES);
      glVertex2f(315,148);
      glVertex2f(200,100);
      glVertex2f(320,145);
      glEnd();

      glBegin(GL_TRIANGLES);
      glVertex2f(170,170);
      glVertex2f(260,120);
      glVertex2f(170,168);
      glEnd();

      glColor3ub(121, 194, 226);
      circle(20,375,50);
      circle(15,375,75);
      circle(10,375,95);

      glColor3ub(229, 246, 254);
      circle(20,372,50);
      circle(15,372,75);
      circle(10,372,95);

      glColor3ub(121, 194, 226);
      circle(10,25,150);
      circle(7,25,165);
      circle(5,25,176);

      glColor3ub(229, 246, 254);
      circle(10,23,150);
      circle(7,23,165);
      circle(5,23,176);

}
void tree()
{
        glColor3ub(24, 28, 75);
        circle(12,165,115);
        circle(10,165,130);
        glRectf(164,96,166,103);
        glColor3ub(60, 166, 216);
        circle(12,162,115);
        circle(10,162,130);

        glColor3ub(24, 28, 75);
        circle(15,150,125);
        circle(11,150,142);
        glRectf(149,100,151,110);
        glColor3ub(60, 166, 216);
        circle(14,148,126);
        circle(10,148,143);

        glColor3ub(24, 28, 75);
        circle(10,134,118);
        circle(8,134,130);
        glRectf(133,100,135,110);
        glColor3ub(60, 166, 216);
        circle(10,132,120);
        circle(8,132,132);


        glColor3ub(0, 137, 196);
        circle(5,60,250);
        circle(4,60,257);

        circle(3,50,250);
        circle(2,50,254);

        circle(5,400,250);
        circle(4,400,257);

        circle(3,390,250);
        circle(2,390,254);

      glColor3ub(60, 164, 217);
      glBegin(GL_TRIANGLES);
      glVertex2f(10,280);
      glVertex2f(20,280);
      glVertex2f(15,310);
      glEnd();

      glColor3ub(60, 164, 217);
      glBegin(GL_TRIANGLES);
      glVertex2f(30,280);
      glVertex2f(40,280);
      glVertex2f(35,312);
      glEnd();

      glColor3ub(60, 164, 217);
      glBegin(GL_TRIANGLES);
      glVertex2f(21,280);
      glVertex2f(29,280);
      glVertex2f(25,305);
      glEnd();

      glColor3ub(60, 164, 217);
      glBegin(GL_TRIANGLES);
      glVertex2f(430,290);
      glVertex2f(440,290);
      glVertex2f(435,320);
      glEnd();

      glColor3ub(60, 164, 217);
      glBegin(GL_TRIANGLES);
      glVertex2f(400,280);
      glVertex2f(410,280);
      glVertex2f(405,310);
      glEnd();

      glBegin(GL_TRIANGLES);
      glVertex2f(390,270);
      glVertex2f(400,270);
      glVertex2f(395,300);
      glEnd();

      glColor3ub(60, 164, 217);
      glBegin(GL_TRIANGLES);
      glVertex2f(380,260);
      glVertex2f(390,260);
      glVertex2f(385,290);
      glEnd();


}

void snow()
{
        glPushMatrix();
        glTranslatef(tx,ty,0);
        glColor3ub(255, 255, 255);
        circle(3.5,50,450);
        circle(3.5,50,450);
        circle(3.5,200,400);
        circle(3.5,150,275);

        circle(3.5,250,350);
        circle(3.5,390,440);
        circle(3.5,300,250);
        circle(3.5,25,275);

        circle(3.5,450,350);
        circle(3.5,125,375);
        circle(3.5,175,475);
        circle(3.5,250,150);
        glPopMatrix();

        glPushMatrix();
        glTranslatef(tx1,ty1,0);
        circle(2,50,470);
        circle(2,60,460);
        circle(2,80,485);
        circle(2,95,460);
        circle(2,102,470);

        circle(2,120,450);
        circle(2,150,420);
        circle(2,160,445);
        circle(2,200,430);
        circle(2,250,400);

        circle(2,350,470);
        circle(2,360,440);
        circle(2,390,485);
        circle(2,425,490);
        circle(2,450,470);

        circle(2,220,450);
        circle(2,280,410);
        circle(2,320,445);
        circle(2,270,480);
        circle(2,300,400);

        ////
        circle(2,10,370);
        circle(2,60,360);
        circle(2,30,385);
        circle(2,95,360);
        circle(2,102,370);

        circle(2,120,350);
        circle(2,150,320);
        circle(2,160,345);
        circle(2,200,330);
        circle(2,250,300);

        circle(2,350,370);
        circle(2,360,340);
        circle(2,390,385);
        circle(2,425,390);
        circle(2,450,370);

        circle(2,220,350);
        circle(2,280,310);
        circle(2,320,345);
        circle(2,270,380);
        circle(2,300,300);

        ///

        circle(2,50,270);
        circle(2,60,260);
        circle(2,80,285);
        circle(2,95,260);
        circle(2,102,270);

        circle(2,120,250);
        circle(2,150,220);
        circle(2,160,245);
        circle(2,200,230);
        circle(2,250,200);

        circle(2,350,270);
        circle(2,360,240);
        circle(2,390,285);
        circle(2,425,290);
        circle(2,450,270);

        circle(2,220,250);
        circle(2,280,210);
        circle(2,320,245);
        circle(2,270,280);
        circle(2,300,200);

        ////
        circle(2,50,170);
        circle(2,60,160);
        circle(2,80,185);
        circle(2,95,160);
        circle(2,102,170);

        circle(2,120,150);
        circle(2,150,120);
        circle(2,160,145);
        circle(2,200,130);
        circle(2,250,100);

        circle(2,350,170);
        circle(2,360,140);
        circle(2,390,185);
        circle(2,425,190);
        circle(2,450,170);

        circle(2,220,150);
        circle(2,280,110);
        circle(2,320,145);
        circle(2,270,180);
        circle(2,300,100);

        ///
        circle(2,50,70);
        circle(2,60,60);
        circle(2,80,85);
        circle(2,95,60);
        circle(2,102,70);

        circle(2,120,50);
        circle(2,150,20);
        circle(2,160,45);
        circle(2,200,30);
        circle(2,250,10);

        circle(2,350,70);
        circle(2,360,40);
        circle(2,390,85);
        circle(2,425,90);
        circle(2,450,70);

        circle(2,220,50);
        circle(2,280,10);
        circle(2,320,45);
        circle(2,270,80);
        circle(2,300,00);


        circle(2,470,450);
        circle(2,495,400);
        circle(2,480,340);
        circle(2,460,210);
        circle(2,490,150);
        glPopMatrix();
}

void display(void)
{

	 glClear(GL_COLOR_BUFFER_BIT);
	 hill();
	 other();
	 tree();
	 house();
	 snow();
	 glFlush();

}




void my_mouse(int button, int state, int x, int y)
{
       switch (button) {
          case GLUT_LEFT_BUTTON:
             if (state == GLUT_DOWN)
             {
             glutIdleFunc(movement);
             }
             break;
          case GLUT_MIDDLE_BUTTON:
          case GLUT_RIGHT_BUTTON:
             if (state == GLUT_DOWN)
                glutIdleFunc(NULL);
             break;
          default:
             break;
       }
}




int main(int argc, char** argv)
{
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
	glutInitWindowPosition(100, 50);
	glutInitWindowSize(800, 1900);
	glutCreateWindow("winter_village");
	init();
	glutDisplayFunc(display);
	glutMouseFunc(my_mouse);
	glutMainLoop();
}
