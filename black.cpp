    glPopMatrix();

    // Orbiting planet
    glPushMatrix();
    glRotatef(angle * 0.2, 0, 0, 1);
    float px = 0.6 * cos(angle * 0.02);

    float py = 0.6 * sin(angle * 0.02);
    glColor3f(0, 1, 0);
    drawCircle(px, py, 0.08);
//planet 2

    float p1x =0.6 * cos(angle *0.02);
    float p1y = 0.6 * sin(angle * 0.02);
    glColor3f(0, 0, 1);

    drawCircle(p1x, p1y, 0.05);

    //planet 3 diagonal
    float p4x = 0.7 * cos(angle * 0.03);
    float p4y =0.5 * sin(angle * 0.03);
    glColor3f(1, 1, 0);
    drawCircle(p4x, p4y, 0.04);

    glPopMatrix();
    glFlush();
}

void update(int value) {
    angle += 1.0;
    glutPostRedisplay();
    glutTimerFunc(16, update, 0);
}

int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutInitWindowSize(800, 800);
    glutCreateWindow("Black Hole Simulation");

    glClearColor(0, 0, 0, 1);

    glutDisplayFunc(display);
    glutTimerFunc(0, update, 0);

    glutMainLoop();
    return 0;
}


^G Help         ^O Write Out    ^F Where Is     ^K Cut          ^T Execute      ^C Location     M-U Undo
^X Exit         ^R Read File    ^\ Replace      ^U Paste        ^J Justify      ^/ G
