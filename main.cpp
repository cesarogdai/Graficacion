#include <GL/glut.h>
#include <math.h>
#define PI            3.14159265358979323846
void circle(){
    glClearColor(0.0f, 0.0f, 0.0f, 1.0f);
    glClear(GL_COLOR_BUFFER_BIT);
    int number = 40;
    float radius = 0.4f;
    float twopi = 2.0 * 3.1452423;
    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();
    glBegin(GL_TRIANGLE_FAN);
    glColor3f(0.0f, 0.0f, 1.0f);
    glVertex2f(0.0f, 0.0f);
    for(int i = 0; i<= 40; i++ )
        glVertex2f(radius * cosf(i*twopi/number), radius*sinf(i*twopi / number));
        glEnd();
        glFlush();
}

int main(int arcg, char **argv){
    glutInit(&arcg, argv);
    glutInitWindowSize(640, 480);
    glutInitWindowPosition(50, 50);
    glutCreateWindow("CIRCULO");
    glutDisplayFunc(circle);
    glutMainLoop();
    return 0;
}
