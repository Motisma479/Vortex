#include <iostream>
#include <GLFW/glfw3.h>
#include "Vortex.hpp"

int main(int argc, char** argv)
{
#ifdef WINDOWS
	std::system("chcp 65001");
	std::system("cls");
#endif
    GLFWwindow* window;
	Vortex vortex;

    /* Initialize the library */
    if (!glfwInit())
        return -1;


    /* Create a windowed mode window and its OpenGL context */
    glfwWindowHint(GLFW_TRANSPARENT_FRAMEBUFFER,GLFW_TRUE);
    glfwWindowHint(GLFW_DECORATED,GLFW_FALSE);
    
    window = glfwCreateWindow(640, 480, "GLFW CMake starter", NULL, NULL);
    if (!window)
    {
        glfwTerminate();
        return -1;
    }

    glfwMaximizeWindow(window);

    /* Make the window's context current */
    glfwMakeContextCurrent(window);
    glClearColor( 170.f/255, 142.f/255, 214.f/255, 1.0f );
    //glClearColor( 0.0f, 0.0f, 0.0f, 0.0f );

	vortex.Play();
    /* Loop until the user closes the window */
    while (!glfwWindowShouldClose(window))
    {
        /* Render here */
        glClear(GL_COLOR_BUFFER_BIT);

        /* Swap front and back buffers */
        glfwSwapBuffers(window);

        /* Poll for and process events */
        glfwPollEvents();
    }

    glfwTerminate();

    // #ifdef WINDOWS
    //     system("pause");
    // #endif
	return 0;
}


// int main(void)
// {
//     GLFWwindow* window;

    // /* Initialize the library */
    // if (!glfwInit())
    //     return -1;

    // /* Create a windowed mode window and its OpenGL context */
    // window = glfwCreateWindow(640, 480, "GLFW CMake starter", NULL, NULL);
    // if (!window)
    // {
    //     glfwTerminate();
    //     return -1;
    // }

    // /* Make the window's context current */
    // glfwMakeContextCurrent(window);
    // glClearColor( 0.4f, 0.3f, 0.4f, 0.0f );

    // /* Loop until the user closes the window */
    // while (!glfwWindowShouldClose(window))
    // {
    //     /* Render here */
    //     glClear(GL_COLOR_BUFFER_BIT);

    //     /* Swap front and back buffers */
    //     glfwSwapBuffers(window);

    //     /* Poll for and process events */
    //     glfwPollEvents();
    // }

    // glfwTerminate();
//     return 0;
// }