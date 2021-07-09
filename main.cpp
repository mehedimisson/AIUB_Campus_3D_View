#include <windows.h>  // for MS Windows
#include <GL/glut.h>
#include<math.h>
# define PI           3.14159265358979323846 // GLUT, include glu.h and gl.h

void display() {
            glClearColor(255.0f, 255.0f, 255.0f, 1.0f); // Set background color to black and opaque
            glClear(GL_COLOR_BUFFER_BIT);         // Clear the color buffer (background)


                //black background
              glBegin(GL_QUADS);
              glColor3ub(255,255,255);
              glVertex2f(-1,-1);
              glVertex2f(1,-1);
              glVertex2f(1,1);
              glVertex2f(-1,1);
              glEnd();

              //grass
              glBegin(GL_QUADS);
              glColor3ub(8, 210, 34);
              glVertex2f(-1,-1);
              glVertex2f(1,-1);
              glVertex2f(1,-.86);
              glVertex2f(-1,-.86);
              glEnd();

               //sky
              glBegin(GL_QUADS);
              glColor3ub(15, 188, 241);
              glVertex2f(-1,-.86);
              glVertex2f(1,-.86);
              glVertex2f(1,1);
              glVertex2f(-1,1);
              glEnd();

              //House2
              glBegin(GL_QUADS);
              glColor3ub(59, 144, 179);
              glVertex2f(.1,-.9);
              glVertex2f(.18,-.9);
              glVertex2f(.18,-.51);
              glVertex2f(.1,-.53);
              glEnd();

              //House1
              glBegin(GL_QUADS);
              glColor3ub(133, 207, 238);

              glVertex2f(.18,-.9);
              glVertex2f(.68,-.88);
              glVertex2f(.68,-.57);
              glVertex2f(.18,-.51);
              glEnd();


              //House4
              glBegin(GL_QUADS);
              glColor3ub(133, 207, 238);

              glVertex2f(-.08,-.21);
              glVertex2f(.59,-.34);
              glVertex2f(.58,.094);
              glVertex2f(-.08,.26);
              glEnd();


              //House3
              glBegin(GL_QUADS);
              glColor3ub(168, 223, 246);

              glVertex2f(.1,-.53);
              glVertex2f(.63,-.57);
              glVertex2f(.625,-.3);
              glVertex2f(.1,-.2);
              glEnd();

              //House6
              glBegin(GL_QUADS);
              glColor3ub(51, 72, 255);

              glVertex2f(-.35,-.89);
              glVertex2f(.1,-.9);
              glVertex2f(.1,-.21);
              glVertex2f(-.35,-.2);

              glVertex2f(-.35,-.2);
              glVertex2f(-.08,-.21);
              glVertex2f(-.08,.22);
              glVertex2f(-.35,.22);

              glEnd();


                //House5
              glBegin(GL_QUADS);
              glColor3ub(59, 144, 179);

              glVertex2f(-.08,-.23);
              glVertex2f(.1,-.237);
              glVertex2f(.1,-.2);
              glVertex2f(-.08,-.21);
              glEnd();


              //House1Glass1
              glBegin(GL_QUADS);
              glColor3ub(219, 241, 249);

              glVertex2f(.2,-.9);
              glVertex2f(.64,-.88);
              glVertex2f(.64,-.81);
              glVertex2f(.2,-.8);
              glEnd();

              //House1Glass2
              glBegin(GL_QUADS);
              glColor3ub(0, 5, 134);

              glVertex2f(.2,-.76);
              glVertex2f(.64,-.76);
              glVertex2f(.64,-.7);
              glVertex2f(.2,-.7);
              glEnd();

              //House1Glass2
              glBegin(GL_QUADS);
              glColor3ub(0, 5, 134);

              glVertex2f(.2,-.65);
              glVertex2f(.64,-.66);
              glVertex2f(.64,-.61);
              glVertex2f(.2,-.58);
              glEnd();

              //House3Glass1
              glBegin(GL_QUADS);
              glColor3ub(0, 5, 134);

              glVertex2f(.13,-.5);
              glVertex2f(.6,-.53);
              glVertex2f(.6,-.47);
              glVertex2f(.13,-.44);
              glEnd();

              //House3Glass2
              glBegin(GL_QUADS);
              glColor3ub(0, 5, 134);

              glVertex2f(.13,-.38);
              glVertex2f(.6,-.41);
              glVertex2f(.6,-.36);
              glVertex2f(.13,-.31);
              glEnd();

              //House4Glass1
              glBegin(GL_QUADS);
              glColor3ub(0, 5, 134);

              glVertex2f(-.02,-.15);
              glVertex2f(.54,-.25);
              glVertex2f(.54,-.17);
              glVertex2f(-.02,-.05);
              glEnd();

              //House4Glass2
              glBegin(GL_QUADS);
              glColor3ub(0, 5, 134);

              glVertex2f(-.02,0.02);
              glVertex2f(.54,-0.09);
              glVertex2f(.54,-.01);
              glVertex2f(-.02,.15);
              glEnd();

              //LeftCurvedRoof
              glBegin(GL_LINES);
              glColor3ub(0, 0, 0);

              glVertex2f(-.08,.26);
              glVertex2f(-.13,.24);

              glVertex2f(-.13,.24);
              glVertex2f(-.18,.22);

              glVertex2f(-.18,.22);
              glVertex2f(-.25,.22);

              glVertex2f(-.25,.22);
              glVertex2f(-.30,.24);

              glVertex2f(-.30,.24);
              glVertex2f(-.35,.26);

              glVertex2f(-.35,.26);
              glVertex2f(-.35,.22);
              //glVertex2f(-.35,-.2);

              //glVertex2f(.1,-.2);
              //glVertex2f(-.08,-.21);
              glEnd();


               //FlagStandGround
              glBegin(GL_QUADS);

              glColor3ub(0,0,0);
              glVertex2f(-.85,-.86);
              glVertex2f(-.78,-.86);
              glVertex2f(-.78,-.85);
              glVertex2f(-.85,-.85);
              glEnd();

               //FlagStand
              glBegin(GL_QUADS);

              glColor3ub(0,0,0);
              glVertex2f(-.82,-.85);
              glVertex2f(-.815,-.85);
              glVertex2f(-.815,-.55);
              glVertex2f(-.82,-.55);
              glEnd();

              //Flag
              glBegin(GL_QUADS);

              glColor3ub(5, 158, 29);
              glVertex2f(-.815,-.68);
              glVertex2f(-.68,-.68);
              glVertex2f(-.68,-.58);
              glVertex2f(-.815,-.58);
              glEnd();




              //circle

              int i;
        glColor3ub(255, 228, 3);
        GLfloat x=.6f; GLfloat y=.5f; GLfloat radius =.2f;
        int triangleAmount = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
        GLfloat twicePi = 2.0f * PI;

        glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x, y); // center of circle
            for(i = 0; i <= triangleAmount;i++) {
                glVertex2f(
                        x + (radius * cos(i *  twicePi / triangleAmount)),
                        y + (radius * sin(i * twicePi / triangleAmount))
                );
            }
             glEnd();

            //FlagRedCircle

             glColor3ub(255, 0, 0);
         x=-.76f; y=-.63f; radius =.03f;
        triangleAmount = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
         twicePi = 2.0f * PI;

        glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x, y); // center of circle
            for(i = 0; i <= triangleAmount;i++) {
                glVertex2f(
                        x + (radius * cos(i *  twicePi / triangleAmount)),
                        y + (radius * sin(i * twicePi / triangleAmount))
                );
            }
        glEnd();

        //BuildingStand

        glBegin(GL_QUADS);
        glColor3ub(69, 76, 79);

        glVertex2f(.15,-.921);
        glVertex2f(.72,-.9);
        glVertex2f(.68,-.88);
        glVertex2f(.18,-.9);

        glEnd();


	glFlush();
}

int main(int argc, char** argv) {
	glutInit(&argc, argv);
	glutCreateWindow("AIUB D-Building");
	glutInitWindowSize(320,320);
	glutDisplayFunc(display);
	glutMainLoop();
	return 0;
}
