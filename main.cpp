#include <GL/gl.h>
#include <GL/glu.h>
#include <GL/glut.h>
#include <stdlib.h>
#include <stdio.h>
#include <windows.h>
#include <math.h>

//int windowWidth=800;
//int windowHeight=500;


//double windowWidth=700;
//double windowHeight=700;
double Txval=0;
double Tyval=0;
double sval=1.5;
double txval=0,txval1=0,txvalC=0,txval1C=0, txvalS=0,txval1S=0,txvalCC=0,txvallCC=0;

double  r=0.07,s=0.1,l=0.03,m=0.03;
int i;
float  tx=10,bx=10,rx=10;


void bera()
{
  glPushMatrix();
  glBegin(GL_LINE_STRIP);
  glColor3f(0,0,0);
  glVertex2f(10,5);
  glVertex2f(10,-3);
  glEnd();

  glPushMatrix();
  glBegin(GL_LINE_STRIP);
  glColor3f(0,0,0);
  glVertex2f(6,3.5);
  glVertex2f(12,3.5);
  glEnd();

  glPushMatrix();
  glBegin(GL_LINE_STRIP);
  glColor3f(0,0,0);
  glVertex2f(6,0);
  glVertex2f(12,0);
  glEnd();

  glPushMatrix();
  glBegin(GL_LINE_STRIP);
  glColor3f(0,0,0);
  glVertex2f(8,5);
  glVertex2f(8,-3);
  glEnd();

  glPushMatrix();
  glBegin(GL_LINE_STRIP);
  glColor3f(0,0,0);
  glVertex2f(6,5);
  glVertex2f(6,-3);
  glEnd();
  glPopMatrix();
}



void road()
{
    glPushMatrix();
    glBegin(GL_QUADS);

    glVertex2f(-60,-40);
    glVertex2f(60,-40);
    glVertex2f(60,-20);
    glVertex2f(-60,-20);
    glPopMatrix();
    glEnd();
}
void boatcala()
{
       glPushMatrix();
    glBegin(GL_POLYGON);

    glVertex2f(31,14);
    glVertex2f(35,17);
    glVertex2f(39,17);
    glVertex2f(41,14);
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glBegin(GL_LINE_STRIP);
    glColor3f(0,0,0);
    glVertex2f(35,17);
    glVertex2f(38,14);
    glEnd();
    glPopMatrix();

}

void boat()
{
    glPushMatrix();
    glBegin(GL_POLYGON);
    glColor3f(0,0,0);
    glVertex2f(27,14);
    glVertex2f(31,9);
    glVertex2f(41,9);
    glVertex2f(45,14);
    glEnd();
    glPopMatrix();

}

void khuti()
{
    glPushMatrix();
    glBegin(GL_LINE_STRIP);
    glColor3f(0,0,0);
    glVertex2f(25,-10);
    glVertex2f(25,-15);
    glEnd();
    glPopMatrix();
}

void field()
{
    glPushMatrix();
    glBegin(GL_POLYGON);

    glVertex2f(-60,-20);
    glVertex2f(30,-20);
    glVertex2f(17,-2);
    glVertex2f(2,13);

    glVertex2f(-30,2);
    glVertex2f(-50,10);
    glVertex2f(-60,0);
    glPopMatrix();
    glEnd();
}

void river()
{
    glPushMatrix();
    glBegin(GL_POLYGON);

    glVertex2f(30,-20);
    glVertex2f(60,-20);
    glVertex2f(60,20);
    glVertex2f(15,20);
    glVertex2f(2,13);

    glVertex2f(17,-2);
    glPopMatrix();
    glEnd();

    glPushMatrix();
    glBegin(GL_POLYGON);

    //glVertex2f(-60,0);
    //glVertex2f(-50,15);
    glVertex2f(-30,2);
    glVertex2f(2,13);
    glVertex2f(15,18);
    glVertex2f(15,20);
    glVertex2f(-60,20);
    //glVertex2f(-60,0);
    glVertex2f(-50,10);

    glPopMatrix();
    glEnd();

    glPushMatrix();
    glBegin(GL_TRIANGLES);

    glVertex2f(-60,20);
    glVertex2f(-60,0);
    glVertex2f(-50,10);
    glPopMatrix();
    glEnd();

}

void house()
{
        glPushMatrix();
    glBegin(GL_QUADS);
    glColor3f(1.0,0.0,0.0);
    glVertex2f(-30,-15);
    glVertex2f(-23,-15);
    glVertex2f(-23,-5);
    glVertex2f(-30,-5);
    glPopMatrix();
    glEnd();

    glPushMatrix();
    glBegin(GL_QUADS);
    glColor3f(0.0,0.0,1.0);
    glVertex2f(-23,-15);
    glVertex2f(-10,-15);
    glVertex2f(-10,-5);
    glVertex2f(-23,-5);
    glPopMatrix();
    glEnd();

    glPushMatrix();
    glBegin(GL_TRIANGLES);
    glColor3f(1.0,1.0,0.0);
    glVertex2f(-30,-5);
    glVertex2f(-23,-5);
    glVertex2f(-26.5,0);
    glPopMatrix();
    glEnd();

       glPushMatrix();
    glBegin(GL_QUADS);
    glColor3f(0.6,0.0,0.2);
    glVertex2f(-23,-5);
    glVertex2f(-10,-5);
    glVertex2f(-13.5,0);
    glVertex2f(-26.5,0);
    glPopMatrix();
    glEnd();

        glPushMatrix();
    glBegin(GL_QUADS);
    glColor3f(0.0,0.0,0.0);
    glVertex2f(-27.5,-15);
    glVertex2f(-25.5,-15);
    glVertex2f(-25.5,-10);
    glVertex2f(-27.5,-10);
    glPopMatrix();
    glEnd();

    glPushMatrix();
    glBegin(GL_QUADS);
    glColor3f(1.0,0.0,1.0);
    glVertex2f(-14,-15);
    glVertex2f(-14,-10);
    glVertex2f(-18,-10);
    glVertex2f(-18,-15);
    glPopMatrix();
    glEnd();

    glPushMatrix();
    glBegin(GL_QUADS);
    glColor3f(0.7,0.3,0.3);
    glVertex2f(-18,-15);
    glVertex2f(-14,-20);
    glVertex2f(-10,-20);
    glVertex2f(-14,-15);
    glPopMatrix();
    glEnd();
}

void house_1()
{
        glPushMatrix();
    glBegin(GL_QUADS);
    glColor3f(0.1,0,0);
    glVertex2f(-30,-15);
    glVertex2f(-23,-15);
    glVertex2f(-23,-5);
    glVertex2f(-30,-5);
    glPopMatrix();
    glEnd();

    glPushMatrix();
    glBegin(GL_QUADS);
    glColor3f(0,0,0.1);
    glVertex2f(-23,-15);
    glVertex2f(-10,-15);
    glVertex2f(-10,-5);
    glVertex2f(-23,-5);
    glPopMatrix();
    glEnd();

    glPushMatrix();
    glBegin(GL_TRIANGLES);
    glColor3f(0.3,0.2,0.1);
    glVertex2f(-30,-5);
    glVertex2f(-23,-5);
    glVertex2f(-26.5,0);
    glPopMatrix();
    glEnd();

       glPushMatrix();
    glBegin(GL_QUADS);
    glColor3f(0.2,0.0,0.1);
    glVertex2f(-23,-5);
    glVertex2f(-10,-5);
    glVertex2f(-13.5,0);
    glVertex2f(-26.5,0);
    glPopMatrix();
    glEnd();

        glPushMatrix();
    glBegin(GL_QUADS);
    glColor3f(0,0,0.1);
    glVertex2f(-27.5,-15);
    glVertex2f(-25.5,-15);
    glVertex2f(-25.5,-10);
    glVertex2f(-27.5,-10);
    glPopMatrix();
    glEnd();

    glPushMatrix();
    glBegin(GL_QUADS);
    glColor3f(0.2,0,0.2);
    glVertex2f(-14,-15);
    glVertex2f(-14,-10);
    glVertex2f(-18,-10);
    glVertex2f(-18,-15);
    glPopMatrix();
    glEnd();

    glPushMatrix();
    glBegin(GL_QUADS);
    glColor3f(0.3,0.1,0.1);
    glVertex2f(-18,-15);
    glVertex2f(-14,-20);
    glVertex2f(-10,-20);
    glVertex2f(-14,-15);
    glPopMatrix();
    glEnd();
}

void house_2()
{
    glPushMatrix();
    glBegin(GL_TRIANGLES);
    glColor3f(1,0,1);
    glVertex2f(-14,-3);
    glVertex2f(-5,-3);
    glVertex2f(-9.5,4);
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glBegin(GL_QUADS);
    glColor3f(1,1,1);
    glVertex2f(-14,-3);
    glVertex2f(-14,-12);
    glVertex2f(-5,-12);
    glVertex2f(-5,-3);
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glBegin(GL_QUADS);
    glColor3f(1,0,0);
    glVertex2f(-5,-3);
    glVertex2f(-5,-12);
    glVertex2f(5,-12);
    glVertex2f(5,-3);
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glBegin(GL_QUADS);
    glColor3f(0,0,0);
    glVertex2f(-5,-3);
    glVertex2f(5,-3);
    glVertex2f(-0.5,4);
    glVertex2f(-9.5,4);
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glBegin(GL_LINE_STRIP);
    glColor3f(0,0,0);
    glVertex2f(-1.5,-7);
    glVertex2f(-1.5,-12);
    glEnd();

    glPushMatrix();
    glBegin(GL_LINE_STRIP);
    glColor3f(0,0,0);
    glVertex2f(2,-7);
    glVertex2f(2,-12);
    glEnd();

    glPushMatrix();
    glBegin(GL_LINE_STRIP);
    glColor3f(0,0,0);
    glVertex2f(-1.5,-7);
    glVertex2f(2,-7);
    glEnd();
}

void house_3()
{
    glPushMatrix();
    glBegin(GL_TRIANGLES);
    glColor3f(0.1,0,0.1);
    glVertex2f(-14,-3);
    glVertex2f(-5,-3);
    glVertex2f(-9.5,4);
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glBegin(GL_QUADS);
    glColor3f(0.1,0.1,0.1);
    glVertex2f(-14,-3);
    glVertex2f(-14,-12);
    glVertex2f(-5,-12);
    glVertex2f(-5,-3);
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glBegin(GL_QUADS);
    glColor3f(0.1,0,0);
    glVertex2f(-5,-3);
    glVertex2f(-5,-12);
    glVertex2f(5,-12);
    glVertex2f(5,-3);
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glBegin(GL_QUADS);
    glColor3f(0,0,0);
    glVertex2f(-5,-3);
    glVertex2f(5,-3);
    glVertex2f(-0.5,4);
    glVertex2f(-9.5,4);
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glBegin(GL_LINE_STRIP);
    glColor3f(0,0,0);
    glVertex2f(-1.5,-7);
    glVertex2f(-1.5,-12);
    glEnd();

    glPushMatrix();
    glBegin(GL_LINE_STRIP);
    glColor3f(0,0,0);
    glVertex2f(2,-7);
    glVertex2f(2,-12);
    glEnd();

    glPushMatrix();
    glBegin(GL_LINE_STRIP);
    glColor3f(0,0,0);
    glVertex2f(-1.5,-7);
    glVertex2f(2,-7);
    glEnd();
    glPopMatrix();
}


void hill()
{
    glPushMatrix();
    glBegin(GL_TRIANGLES);

    glVertex2f(-60,20);
    glVertex2f(-45,20);
    glVertex2f(-52.5,30);
    glPopMatrix();
    glEnd();

        glPushMatrix();
    glBegin(GL_TRIANGLES);

    glVertex2f(-45,20);
    glVertex2f(-30,20);
    glVertex2f(-40,25);
    glPopMatrix();
    glEnd();

    glPushMatrix();
    glBegin(GL_TRIANGLES);

    glVertex2f(-30,20);
    glVertex2f(-13,20);
    glVertex2f(-23,33);
    glPopMatrix();
    glEnd();

        glPushMatrix();
    glBegin(GL_TRIANGLES);

    glVertex2f(-13,20);
    glVertex2f(10,20);
    glVertex2f(0,27);
    glPopMatrix();
    glEnd();

    glPushMatrix();
    glBegin(GL_TRIANGLES);

    glVertex2f(10,20);
    glVertex2f(30,20);
    glVertex2f(20,30);
    glPopMatrix();
    glEnd();

    glPushMatrix();
    glBegin(GL_TRIANGLES);

    glVertex2f(30,20);
    glVertex2f(60,20);
    glVertex2f(45,33);
    glPopMatrix();
    glEnd();

}

void sky()
{
    glPushMatrix();
    glBegin(GL_POLYGON);

    glVertex2f(-60,20);
    glVertex2f(-52.5,30);
    glVertex2f(-45,20);
    glVertex2f(-40,25);
    glVertex2f(-30,20);
    glVertex2f(-23,33);
    glVertex2f(-13,20);
    glVertex2f(0,27);
    glVertex2f(10,20);
    glVertex2f(20,30);
    glVertex2f(30,20);
    glVertex2f(45,33);
    glVertex2f(60,20);
    glVertex2f(60,60);
    glVertex2f(-60,60);
    glEnd();
    glPopMatrix();
}

void sun(double x, double y)
{


    glBegin(GL_TRIANGLE_FAN);
        for(i=0;i<360;i++)
        {
            x=x+cos((i*3.14)/180)*s;
            y=y+sin((i*3.14)/180)*s;

            glVertex2f(x,y);

        }


    glEnd();




}

void cloud(double x, double y)
{


    glBegin(GL_TRIANGLE_FAN);
        for(i=0;i<360;i++)
        {
            x=x+cos((i*3.14)/180)*r;
            y=y+sin((i*3.14)/180)*r;

            glVertex2d(x,y);

        }


    glEnd();



}

void tree()
{
    glPushMatrix();
    glBegin(GL_POLYGON);

    glVertex2f(-50,-10);
    glVertex2f(-53,-13);
    glVertex2f(-42,-13);
    glVertex2f(-45,-10);
    glVertex2f(-45,0);
    glVertex2f(-50,0);

    glEnd();
    glPopMatrix();
}

void Zebra()
{
    glPushMatrix();
    glBegin(GL_QUADS);
    glColor3f(1,1,1);
    glVertex2f(-60,-30.5);
    glVertex2f(-55,-30.5);
    glVertex2f(-55,-29.5);
    glVertex2f(-60,-29.5);
    glEnd();
    glPopMatrix();
}

void car()
{
    glPushMatrix();
    glBegin(GL_POLYGON);
    glColor3f(1,0,0);
    glVertex2f(-45,-35);
    glVertex2f(-28,-35);
    glVertex2f(-28,-30);
    glVertex2f(-45,-30);
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glBegin(GL_POLYGON);
    glColor3f(1,1,0);
    glVertex2f(-42,-30);
    glVertex2f(-37,-30);
    glVertex2f(-37,-27);
    glVertex2f(-40,-27);
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glBegin(GL_POLYGON);
    glColor3f(0,0,1);

    glVertex2f(-36,-30);
    glVertex2f(-31,-30);
    glVertex2f(-33,-27);
    glVertex2f(-36,-27);
    glEnd();
    glPopMatrix();

        glPushMatrix();
    glBegin(GL_POLYGON);
    glColor3f(0,0,0);
    glVertex2f(-37,-30);
    glVertex2f(-36,-30);
    glVertex2f(-36,-27);
    glVertex2f(-37,-27);
    glEnd();
    glPopMatrix();

}
void car_light()
{
    glPushMatrix();
    glBegin(GL_TRIANGLES);
    glColor3f(1,1,1);
    glVertex2f(-28,-32.5);
    glColor3f(1,1,0);
    glVertex2f(-20,-35);
    glVertex2f(-20,-30);
     glEnd();
    glPopMatrix();

}

void car_1()
{
    glPushMatrix();
    glBegin(GL_POLYGON);
    glColor3f(0.1,0,0);
    glVertex2f(-45,-35);
    glVertex2f(-28,-35);
    glVertex2f(-28,-30);
    glVertex2f(-45,-30);
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glBegin(GL_POLYGON);
    glColor3f(0.1,0.1,0);
    glVertex2f(-42,-30);
    glVertex2f(-37,-30);
    glVertex2f(-37,-27);
    glVertex2f(-40,-27);
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glBegin(GL_POLYGON);
    glColor3f(0,0,0.1);

    glVertex2f(-36,-30);
    glVertex2f(-31,-30);
    glVertex2f(-33,-27);
    glVertex2f(-36,-27);
    glEnd();
    glPopMatrix();

        glPushMatrix();
    glBegin(GL_POLYGON);
    glColor3f(0,0,0);
    glVertex2f(-37,-30);
    glVertex2f(-36,-30);
    glVertex2f(-36,-27);
    glVertex2f(-37,-27);
    glEnd();
    glPopMatrix();


}

void cakka(double x, double y)
{


    glBegin(GL_TRIANGLE_FAN);
        for(i=0;i<360;i++)
        {
            x=x+cos((i*3.14)/180)*l;
            y=y+sin((i*3.14)/180)*l;

            glVertex2d(x,y);

        }


    glEnd();



}


void man()
{
    glPushMatrix();
    glBegin(GL_QUADS);
    glColor3f(1,0,1);
    glVertex2f(40,-26);
    glVertex2f(43,-26);
    glColor3f(1,0,0);
    glVertex2f(43,-20);
    glVertex2f(40,-20);
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glBegin(GL_POLYGON);
    glColor3f(0,0,1);
    glVertex2f(43,-22);
    glVertex2f(45,-22);
    glVertex2f(45,-24);
    glVertex2f(44,-24);
    glVertex2f(44,-23);
    glVertex2f(43,-23);
    glEnd();
    glPopMatrix();

        glPushMatrix();
    glBegin(GL_POLYGON);
    glColor3f(0,0,1);
    glVertex2f(40,-22);
    glVertex2f(38,-22);
    glVertex2f(38,-24);
    glVertex2f(39,-24);
    glVertex2f(39,-23);
    glVertex2f(40,-23);
    glEnd();
    glPopMatrix();




}
void matha(double x, double y)
{


    glBegin(GL_TRIANGLE_FAN);
        for(i=0;i<360;i++)
        {
            x=x+cos((i*3.14)/180)*m;
            y=y+sin((i*3.14)/180)*m;

            glVertex2d(x,y);

        }


    glEnd();



}

void leg()
{
        glPushMatrix();
    glBegin(GL_POLYGON);
    glColor3f(0,0,0);

    glVertex2f(41,-27.5);
    glVertex2f(40,-27.5);
    glVertex2f(40,-28);
    glVertex2f(41.5,-28);
    glVertex2f(41.5,-26);
    glVertex2f(40.5,-26);
    glEnd();
    glPopMatrix();
}

void windmill()
{
    glPushMatrix();
    glBegin(GL_QUADS);
    glColor3f(0,0,0);
    glVertex2f(29,20);
    glVertex2f(31,20);
    glVertex2f(31,35);
    glVertex2f(29,35);
    glEnd();
    glPopMatrix();
}

void fan()
{
    glPushMatrix();
    glBegin(GL_POLYGON);
    glColor3f(1,0,0);
    glVertex2f(30,37);
    glVertex2f(32,36);
    glVertex2f(40,37);
    glVertex2f(32,38);
    glEnd();

    glPushMatrix();
    glBegin(GL_POLYGON);
    glColor3f(0,0,1);
    glVertex2f(30,37);
    glVertex2f(31,39);
    glVertex2f(30,48);
    glVertex2f(29,39);
    glEnd();

    glPushMatrix();
    glBegin(GL_POLYGON);
    glColor3f(1,0,1);
    glVertex2f(30,37);
    glVertex2f(29,36);
    glVertex2f(20,37);
    glVertex2f(29,38);
    glEnd();

    glPushMatrix();
    glBegin(GL_POLYGON);
    glColor3f(1,1,0);
    glVertex2f(30,37);
    glVertex2f(29,35);
    glVertex2f(30,25);
    glVertex2f(31,35);
    glEnd();
    glPopMatrix();
}

void fan_1()
{
    glPushMatrix();
    glBegin(GL_POLYGON);
    glColor3f(0.1,0,0);
    glVertex2f(30,37);
    glVertex2f(32,36);
    glVertex2f(40,37);
    glVertex2f(32,38);
    glEnd();

    glPushMatrix();
    glBegin(GL_POLYGON);
    glColor3f(0,0,0.1);
    glVertex2f(30,37);
    glVertex2f(31,39);
    glVertex2f(30,48);
    glVertex2f(29,39);
    glEnd();

    glPushMatrix();
    glBegin(GL_POLYGON);
    glColor3f(0.1,0,0.1);
    glVertex2f(30,37);
    glVertex2f(29,36);
    glVertex2f(20,37);
    glVertex2f(29,38);
    glEnd();

    glPushMatrix();
    glBegin(GL_POLYGON);
    glColor3f(0.1,0.1,0);
    glVertex2f(30,37);
    glVertex2f(29,35);
    glVertex2f(30,25);
    glVertex2f(31,35);
    glEnd();
    glPopMatrix();
}

void moon()
{
    glPushMatrix();
    glBegin(GL_POLYGON);
    glColor3f(1,1,1);
    glVertex2f(5,35);
    glVertex2f(6,33);
    glVertex2f(10,32);
    glVertex2f(13,33);
    glVertex2f(15,36);
    glVertex2f(15.5,38);

    glEnd();
    glPopMatrix();

}

void star()
{
    glPushMatrix();
    glBegin(GL_LINE_STRIP);
    glColor3f(1,1,1);
    glVertex2f(-35,50);
    glVertex2f(-37,50);
    glEnd();

    glPushMatrix();
    glBegin(GL_LINE_STRIP);
    glColor3f(1,1,1);
    glVertex2f(-36,49);
    glVertex2f(-36,51);
    glEnd();

    glPushMatrix();
    glBegin(GL_LINE_STRIP);
    glColor3f(1,1,1);
    glVertex2f(-37,51);
    glVertex2f(-35,49);
    glEnd();

    glPushMatrix();
    glBegin(GL_LINE_STRIP);
    glColor3f(1,1,1);
    glVertex2f(-35,51);
    glVertex2f(-37,49);
    glEnd();

    glPopMatrix();
}

void StartingText()
{
    char text[120];

        sprintf(text, "UNIVERSITY OF INFORMATION TECHNOLOGY & SCIENCE",5.00,8.00);
    glColor3f(0, 1, 0);
    glRasterPos2f( -35 , 55 );
    for(int i = 0; text[i] != '\0'; i++)
    {
        if(text[i]==' '  && text[i+1]==' ')
        {
            glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, text[i]);
            glRasterPos2f( -32 , 02 );
        }
        else glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, text[i]);
    }

    sprintf(text, "VILLAGE SCENARIO",5.00,8.00);
    glColor3f(1, 1, 0);
    glRasterPos2f( -20 , 45 );
    for(int i = 0; text[i] != '\0'; i++)
    {
        if(text[i]==' '  && text[i+1]==' ')
        {
            glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, text[i]);
            glRasterPos2f( -32 , 02 );
        }
        else glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, text[i]);
    }

        sprintf(text, "NAME: Mir Md. Mosarof Hossan Showrav , Antu Bhatta , Dabbrata Dey",5.00,8.00);
    glColor3f(1, 0, 0);
    glRasterPos2f( -20 , 35 );
    for(int i = 0; text[i] != '\0'; i++)
    {
        if(text[i]==' '  && text[i+1]==' ')
        {
            glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, text[i]);
            glRasterPos2f( -32 , 02 );
        }
        else glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, text[i]);
    }
        sprintf(text, "ID: 2014751183 , 2014751207 , 2014751215 ",5.00,8.00);
    glColor3f(1, 0, 0);
    glRasterPos2f( -20 , 30 );
    for(int i = 0; text[i] != '\0'; i++)
    {
        if(text[i]==' '  && text[i+1]==' ')
        {
            glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, text[i]);
            glRasterPos2f( -32 , 02 );
        }
        else glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, text[i]);
    }
            sprintf(text, "DEPARTMENT OF CSE",5.00,8.00);
    glColor3f(1, 0, 0);
    glRasterPos2f( -20 , 25 );
    for(int i = 0; text[i] != '\0'; i++)
    {
        if(text[i]==' '  && text[i+1]==' ')
        {
            glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, text[i]);
            glRasterPos2f( -32 , 02 );
        }
        else glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, text[i]);
    }
            sprintf(text, "SUBMITTED TO-",5.00,8.00);
    glColor3f(0, 0, 1);
    glRasterPos2f( -20 , 17 );
    for(int i = 0; text[i] != '\0'; i++)
    {
        if(text[i]==' '  && text[i+1]==' ')
        {
            glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, text[i]);
            glRasterPos2f( -32 , 02 );
        }
        else glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, text[i]);
    }
                sprintf(text, "Sonia Afroz , Md. Mahadi Hasan ",5.00,8.00);
    glColor3f(0, 0, 1);
    glRasterPos2f( -5 , 12 );
    for(int i = 0; text[i] != '\0'; i++)
    {
        if(text[i]==' '  && text[i+1]==' ')
        {
            glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, text[i]);
            glRasterPos2f( -32 , 02 );
        }
        else glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, text[i]);
    }
                sprintf(text, "PRESS 'd' FOR DAY MOOD",5.00,8.00);
    glColor3f(1, 0, 1);
    glRasterPos2f( -20 , 0 );
    for(int i = 0; text[i] != '\0'; i++)
    {
        if(text[i]==' '  && text[i+1]==' ')
        {
            glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, text[i]);
            glRasterPos2f( -32 , 02 );
        }
        else glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, text[i]);
    }
        sprintf(text, " PRESS 'n' FOR NIGHT MOOD",5.00,8.00);
    glColor3f(1, 1, 1);
    glRasterPos2f( -21 , -5 );
    for(int i = 0; text[i] != '\0'; i++)
    {
        if(text[i]==' '  && text[i+1]==' ')
        {
            glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, text[i]);
            glRasterPos2f( -32 , 02 );
        }
        else glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, text[i]);
    }
}


void display(void)
{
    glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);
    glClearColor(0,0,0,0);
    glMatrixMode( GL_PROJECTION );
    glLoadIdentity();
    gluOrtho2D(-60,60,-40,60);
    glMatrixMode( GL_MODELVIEW );
    glLoadIdentity();
//    glViewport(0, 0 ,windowWidth ,windowHeight);
     glColor3f(0,0,0.1);
    road();
    glEnd();
    glPopMatrix();

    glPushMatrix();
     glColor3f(0.3,0.9,0);
    field();
    glEnd();
    glPopMatrix();


    glPushMatrix();
    glColor3f(0.3,0.8,1);
    river();
     glEnd();
    glPopMatrix();

    glPushMatrix();
    bera();
    glPopMatrix();
    glEnd();

    glPushMatrix();
    glTranslatef(-6,0,0);
    bera();
    glPopMatrix();
    glEnd();

    glPushMatrix();
    glTranslatef(-12,0,0);
    bera();
    glPopMatrix();
    glEnd();

    glPushMatrix();
    glTranslatef(-18,0,0);
    bera();
    glPopMatrix();
    glEnd();

    glPushMatrix();
    glTranslatef(-24,0,0);
    bera();
    glPopMatrix();
    glEnd();

    glPushMatrix();
    glTranslatef(-30,0,0);
    bera();
    glPopMatrix();
    glEnd();

    glPushMatrix();
    glTranslatef(-36,0,0);
    bera();
    glPopMatrix();
    glEnd();

    glPushMatrix();
    glTranslatef(-42,0,0);
    bera();
    glPopMatrix();
    glEnd();

    glPushMatrix();
    glTranslatef(-48,0,0);
    bera();
    glPopMatrix();
    glEnd();

    glPushMatrix();
    glTranslatef(-54,0,0);
    bera();
    glPopMatrix();
    glEnd();

    glPushMatrix();
    glTranslatef(-60,0,0);
    bera();
    glPopMatrix();
    glEnd();

    glPushMatrix();
    glTranslatef(-66,0,0);
    bera();
    glPopMatrix();
    glEnd();

    glPushMatrix();
    house_2();
    glEnd();
    glPopMatrix();

    glPushMatrix();
    house();
    glPopMatrix();
    glEnd();

    glPushMatrix();
      glColor3f(0,0.3,0.9);
    sky();
    glEnd();
    glPopMatrix();

    glPushMatrix();
      glColor3f(0.2,0.6,0);
    hill();
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glColor3ub(255,215,0);
    glTranslatef(txvalS,0,0);

    sun(35,45);

    glPopMatrix();



    glPushMatrix();
	glColor3ub(220,220,220);
	glTranslatef(txvalC,0,0);

	cloud(-45,45);
	cloud(-47,43);
	cloud(-40,42);
	cloud(-48,47);
	cloud(-39,48);
	cloud(-36,45);
	glPopMatrix();

	  glPushMatrix();
   windmill();
   cakka(30,35);
   fan();
   glEnd();
   glPopMatrix();

glPushMatrix();
glTranslatef(txvalS,0,0);
glTranslatef(0,5,0);
boat();

glEnd();
glPopMatrix();

glPushMatrix();
glTranslatef(txvalS,0,0);
glTranslatef(0,5,0);
glColor3f(1,0,0);
boatcala();

glEnd();
glPopMatrix();


     glPushMatrix();
      glColor3f(0.2,0,0);
    tree();
     glColor3f(0,0.2,0);
    cloud(-47,3);
    cloud(-44,-2);
    cloud(-48,-2);
    cloud(-52,-2);
     cloud(-50,3);
     cloud(-45,3);
     cloud(-47,9);
    glEnd();
    glPopMatrix();




    glPushMatrix();

    Zebra();
    glPopMatrix();
    glEnd();

    glPushMatrix();
    glTranslatef(10,0,0);
    Zebra();
    glPopMatrix();
    glEnd();

    glPushMatrix();
    glTranslatef(20,0,0);
    Zebra();
    glPopMatrix();
    glEnd();

    glPushMatrix();
    glTranslatef(30,0,0);
    Zebra();
    glPopMatrix();
    glEnd();

        glPushMatrix();
    glTranslatef(40,0,0);
    Zebra();
    glPopMatrix();
    glEnd();

        glPushMatrix();
    glTranslatef(50,0,0);
    Zebra();
    glPopMatrix();
    glEnd();

        glPushMatrix();
    glTranslatef(60,0,0);
    Zebra();
    glPopMatrix();
    glEnd();

        glPushMatrix();
    glTranslatef(70,0,0);
    Zebra();
    glPopMatrix();
    glEnd();

        glPushMatrix();
    glTranslatef(80,0,0);
    Zebra();
    glPopMatrix();
    glEnd();

        glPushMatrix();
    glTranslatef(90,0,0);
    Zebra();
    glPopMatrix();
    glEnd();

        glPushMatrix();
    glTranslatef(100,0,0);
    Zebra();
    glPopMatrix();
    glEnd();

        glPushMatrix();
    glTranslatef(110,0,0);
    Zebra();
    glPopMatrix();
    glEnd();

        glPushMatrix();
    glTranslatef(txvalS,0,0);
    man();
    glColor3f(0.3,0,0);
    matha(41.5,-20);
    leg();
    glTranslatef(83.1,0,0);
    glRotatef(180,0,1,0);
    leg();
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(txvalC,0,0);
    glColor3f(0,0,0);
    car();
    cakka(-40.5,-37);
    cakka(-32,-37);
    glEnd();
    glPopMatrix();

   glPushMatrix();

     glColor3f(0.2,0,0);
     glTranslatef(48,20,0);
    tree();
    glColor3ub(3, 75, 3);
    cloud(-47,3);
    cloud(-44,-2);
    cloud(-48,-2);
    cloud(-52,-2);
     cloud(-50,3);
     cloud(-45,3);
     cloud(-47,9);
    glEnd();
    glPopMatrix();






    glPushMatrix();
   glTranslatef(-8,-20,0);
   boat();
   glColor3f(1,0,0);
    boatcala();
   glEnd();
   glPopMatrix();

   glPushMatrix();
   glTranslatef(-6,7,0);
   khuti();
   glEnd();
   glPopMatrix();





   	txvalS -= 0.2;
		if(txvalS <= -120){
           txvalS = 60;
			//txval1 = 1;
		}

			txvalC += 0.2;
		if(txvalC >= 120){
           txvalC = -120;
			//txval1 = 1;
		}





    glutPostRedisplay();
    glColor3ub(255,255,255);//
    glRecti(-210,310,-200,-210);
    glRecti(200,310,210,-210);
        glFlush();
    glutSwapBuffers();
}



void display2()
{
    glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);
    glClearColor(0,0,0,0);
    glMatrixMode( GL_PROJECTION );
    glLoadIdentity();
    gluOrtho2D(-60,60,-40,60);
    glMatrixMode( GL_MODELVIEW );
    glLoadIdentity();
    glPushMatrix();
   glColor3f(0,0.1,0.1);
    road();
    glEnd();
        glPopMatrix();


    glPushMatrix();
    glColor3f(0,0.1,0);
    field();
    glEnd();
    glPopMatrix();




    glPushMatrix();
    glColor3f(0,0.2,0.3);
    river();
     glEnd();
    glPopMatrix();

    glPushMatrix();
    bera();
    glPopMatrix();
    glEnd();

    glPushMatrix();
    glTranslatef(-6,0,0);
    bera();
    glPopMatrix();
    glEnd();

    glPushMatrix();
    glTranslatef(-12,0,0);
    bera();
    glPopMatrix();
    glEnd();

    glPushMatrix();
    glTranslatef(-18,0,0);
    bera();
    glPopMatrix();
    glEnd();

    glPushMatrix();
    glTranslatef(-24,0,0);
    bera();
    glPopMatrix();
    glEnd();

    glPushMatrix();
    glTranslatef(-30,0,0);
    bera();
    glPopMatrix();
    glEnd();

    glPushMatrix();
    glTranslatef(-36,0,0);
    bera();
    glPopMatrix();
    glEnd();

    glPushMatrix();
    glTranslatef(-42,0,0);
    bera();
    glPopMatrix();
    glEnd();

    glPushMatrix();
    glTranslatef(-48,0,0);
    bera();
    glPopMatrix();
    glEnd();

    glPushMatrix();
    glTranslatef(-54,0,0);
    bera();
    glPopMatrix();
    glEnd();

    glPushMatrix();
    glTranslatef(-60,0,0);
    bera();
    glPopMatrix();
    glEnd();

    glPushMatrix();
    glTranslatef(-66,0,0);
    bera();
    glPopMatrix();
    glEnd();


    glPushMatrix();
    house_3();
    glEnd();
    glPopMatrix();


    glPushMatrix();
    house_1();
    glPopMatrix();
    glEnd();

   glPushMatrix();
   glColor3f(0,0.1,0.1);
    sky();
    glEnd();
    glPopMatrix();

    glPushMatrix();
      glColor3f(0,0.1,0);
    hill();
    glEnd();
    glPopMatrix();



     glPushMatrix();
      glColor3f(0,0,0);
    tree();
  glColor3f(0,0.2,0);
    cloud(-47,3);
    cloud(-44,-2);
    cloud(-48,-2);
    cloud(-52,-2);
     cloud(-50,3);
     cloud(-45,3);
     cloud(-47,9);
    glEnd();
    glPopMatrix();




    glPushMatrix();

    Zebra();
    glPopMatrix();
    glEnd();

    glPushMatrix();
    glTranslatef(10,0,0);
    Zebra();
    glPopMatrix();
    glEnd();

    glPushMatrix();
    glTranslatef(20,0,0);
    Zebra();
    glPopMatrix();
    glEnd();

    glPushMatrix();
    glTranslatef(30,0,0);
    Zebra();
    glPopMatrix();
    glEnd();

        glPushMatrix();
    glTranslatef(40,0,0);
    Zebra();
    glPopMatrix();
    glEnd();

        glPushMatrix();
    glTranslatef(50,0,0);
    Zebra();
    glPopMatrix();
    glEnd();

        glPushMatrix();
    glTranslatef(60,0,0);
    Zebra();
    glPopMatrix();
    glEnd();

        glPushMatrix();
    glTranslatef(70,0,0);
    Zebra();
    glPopMatrix();
    glEnd();

        glPushMatrix();
    glTranslatef(80,0,0);
    Zebra();
    glPopMatrix();
    glEnd();

        glPushMatrix();
    glTranslatef(90,0,0);
    Zebra();
    glPopMatrix();
    glEnd();

        glPushMatrix();
    glTranslatef(100,0,0);
    Zebra();
    glPopMatrix();
    glEnd();

        glPushMatrix();
    glTranslatef(110,0,0);
    Zebra();
    glPopMatrix();
    glEnd();

    glPushMatrix();
    glTranslatef(txvalC,0,0);
    car_1();
    //car_light();
    glColor3f(0,0,0);
    cakka(-40.5,-37);
    cakka(-32,-37);
    glPopMatrix();
     glEnd();

     glPushMatrix();
     glTranslatef(txvalC,0,0);
    car_light();
    glEnd();
    glPopMatrix();



    glPushMatrix();
    glTranslatef(48,20,0);
    glColor3f(0,0,0);
    tree();
    glColor3f(0,0.2,0);
    cloud(-47,3);
    cloud(-44,-2);
    cloud(-48,-2);
    cloud(-52,-2);
     cloud(-50,3);
     cloud(-45,3);
     cloud(-47,9);
    glEnd();
    glPopMatrix();

    glPushMatrix();
   glTranslatef(-8,-20,0);
   boat();
   glColor3f(0.1,0,0);
    boatcala();
   glEnd();
   glPopMatrix();

      glPushMatrix();
   glTranslatef(-6,7,0);
   khuti();
   glEnd();
   glPopMatrix();

   glPushMatrix();
   windmill();
   cakka(30,35);
   fan_1();
   glEnd();
   glPopMatrix();

   glPushMatrix();
   glColor3f(1,1,1);
cloud(50,45);
 glColor3f(0,0.1,0.1);
cloud(48,46);
   glEnd();
   glPopMatrix();

   glPushMatrix();
   star();
   glEnd();
   glPopMatrix();

    glPushMatrix();
    glTranslatef(-3,0,0);
   star();
   glEnd();
   glPopMatrix();

    glPushMatrix();
    glTranslatef(-2,3,0);
   star();
   glEnd();
   glPopMatrix();

    glPushMatrix();
    glTranslatef(2,3,0);
   star();
   glEnd();
   glPopMatrix();

    glPushMatrix();
    glTranslatef(5,0,0);
   star();
   glEnd();
   glPopMatrix();

    glPushMatrix();
    glTranslatef(2,-6,0);
   star();
   glEnd();
   glPopMatrix();

    glPushMatrix();
glTranslatef(20,-10,0);
   star();
   glEnd();
   glPopMatrix();

    glPushMatrix();
    glTranslatef(45,-5,0);
   star();
   glEnd();
   glPopMatrix();

       glPushMatrix();
    glTranslatef(60,5,0);
   star();
   glEnd();
   glPopMatrix();

       glPushMatrix();
    glTranslatef(70,0,0);
   star();
   glEnd();
   glPopMatrix();

       glPushMatrix();
    glTranslatef(-20,-20,0);
   star();
   glEnd();
   glPopMatrix();

    glPushMatrix();
    glTranslatef(-16,8,0);
   star();
   glEnd();
   glPopMatrix();

          glPushMatrix();
    glTranslatef(90,-20,0);
   star();
   glEnd();
   glPopMatrix();

   	txvalS -= 0.2;
		if(txvalS <= -120){
           txvalS = 60;
			//txval1 = 1;
		}

			txvalC += 0.2;
		if(txvalC >= 120){
           txvalC = -120;
			//txval1 = 1;
		}





    glutPostRedisplay();
    glColor3ub(255,255,255);//
    glRecti(-210,310,-200,-210);
    glRecti(200,310,210,-210);

    glFlush();

    glutSwapBuffers();

}



   void init(void)
{
    glClearColor( 0.0f, 0.0f, 0.0f, 1.0f);


}


void Display1()
{
        glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);
    glClearColor(0,0,0,0);
    glMatrixMode( GL_PROJECTION );
    glLoadIdentity();
    gluOrtho2D(-60,60,-40,60);
    glMatrixMode( GL_MODELVIEW );
    glLoadIdentity();
    glPushMatrix();
    StartingText();
    glEnd();
    glPopMatrix();
     glFlush();
    glutSwapBuffers();



}

void handleKeypress(unsigned char key, int x, int y) {
	switch (key) {
	    case  'd':
	        glutDestroyWindow(1);
	        glutInitWindowSize(1200, 800);

            glutCreateWindow("village scenario");
            glutKeyboardFunc(handleKeypress);
            glutDisplayFunc(display);
              break;



        case 'n':
           glutDestroyWindow(1);
	        glutInitWindowSize(1200, 800);

            glutCreateWindow("village scenario");
            glutKeyboardFunc(handleKeypress);
            glutDisplayFunc(display2);

            glutPostRedisplay();
            break;
		case 27:
			exit(1);

	}
}

int main (int argc, char **argv)
{
glutInit(&argc, argv);
glutInitWindowSize(1200,800);
glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB | GLUT_DEPTH);
glutInitDisplayMode(GLUT_DOUBLE);

glutInitWindowPosition(10,10);

glutCreateWindow("VILLAGE SCENARIO");
glShadeModel( GL_SMOOTH );
glEnable( GL_DEPTH_TEST );

glutKeyboardFunc(handleKeypress);
  init();
	glShadeModel( GL_SMOOTH );


glutDisplayFunc(display);
glutDisplayFunc(display2);

glutDisplayFunc(Display1);
glDepthFunc(GL_LEQUAL);

glutMainLoop();
return 0;
}



