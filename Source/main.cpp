//
//  main.cpp
//  OpenGLDemo
//
//  Created by 李燕霏 on 2017/7/25.
//  Copyright © 2017年 yuffy. All rights reserved.
//

#include <iostream>
#include <GLUT/GLUT.h>



void display()
{
    
    glClear(GL_ENABLE_BIT);
    
    glBegin(GL_POLYGON);
    
    glVertex2f(-0.5, -0.5);
    
    glVertex2f(-0.5, 0.5);
    
    glVertex2f(0.5, 0.5);
    
    glVertex2f(0.5, -0.5);
    
    glEnd();
    
    glFlush();
    
}



int main(int argc, char ** argv)
{
    
    glutInit(&argc, argv);
    
    glutInitWindowSize(400, 400);
    
    glutCreateWindow("OpenGLDemo");
    
    glutDisplayFunc(display);
    
    glutMainLoop();
    
}
