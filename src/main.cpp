#include <iostream>
#include <GLFW/glfw3.h>

void keyCallback( GLFWwindow* window, int key, int scancode, int action, int mods );

int main()
{
  glfwInit();
  glfwWindowHint( GLFW_CONTEXT_VERSION_MAJOR, 3 );
  glfwWindowHint( GLFW_CONTEXT_VERSION_MINOR, 2 );
  glfwWindowHint( GLFW_OPENGL_FORWARD_COMPAT, GL_TRUE );
  glfwWindowHint( GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE );

  GLFWwindow* window = glfwCreateWindow( 640, 480, "Test", NULL , NULL );
  
  glfwSetKeyCallback( window, keyCallback );
  glfwSetInputMode( window, GLFW_STICKY_KEYS, 1 );

  if ( !window )
  {
    glfwTerminate( );
    return -1;
  }

  while ( !glfwWindowShouldClose( window ) )
  {
    glfwPollEvents( );  
  }

  glfwTerminate( );
}

void keyCallback( GLFWwindow* window, int key, int scancode, int action, int mods )
{
  if ( key == GLFW_KEY_Q )
  {
    glfwTerminate( );
  }
}
