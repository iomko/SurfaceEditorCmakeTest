#include <iostream>
#include <GLFW/glfw3.h>
#include <glm/glm.hpp>

int main(){
    //glm test
    glm::vec3 up(0.0, 1.0, 0.0);
    std::cout << "glm test:" << std::endl;
    std::cout << "x: " << up.x << ", y: " << up.y << ", z: " << up.z << std::endl;
    
    //glfw test
    std::cout << "GLFW test:" << std::endl;
    GLFWwindow *window;
    
    if( !glfwInit() )
    {
        fprintf( stderr, "Failed to initialize GLFW\n" );
        exit( EXIT_FAILURE );
    }

    window = glfwCreateWindow( 300, 300, "WaterMelon", NULL, NULL );
    if (!window)
    {
        fprintf( stderr, "Failed to open GLFW window\n" );
        glfwTerminate();
        exit( EXIT_FAILURE );
    }

    // Main loop
    while( !glfwWindowShouldClose(window) )
    {
        // Swap buffers
        glfwSwapBuffers(window);
        glfwPollEvents();
    }

    // Terminate GLFW
    glfwTerminate();
    
}