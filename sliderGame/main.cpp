/*
#include <GL/glew.h>
#include <GLFW/glfw3.h>

#include <glm.hpp>
#include <gtc/matrix_transform.hpp>
#include <gtc/type_ptr.hpp>

#include <iostream>
#include <fstream>
#include <String>
#include <vector>


#include "shaders.h"
#include "renderer.h"

#include "model.h"
*/

/*
#include "vertexBuffer.h"
#include "indexBuffer.h"
#include "vertexArray.h"
*/

/*
struct vertex {
    glm::vec3 pos;
    glm::vec3 color;
}; 
*/

#include"sliderGame.h"




int main(void)
{ /*
    GLFWwindow* window;

    // Initialize the library 
    if (!glfwInit())
        return -1;


    // Create a windowed mode window and its OpenGL context 
    window = glfwCreateWindow(640, 480, "Hello World", NULL, NULL);
    if (!window)
    {
        glfwTerminate();
        return -1;
    }
    

    // Make the window's context current 
    glfwMakeContextCurrent(window);


    if (glewInit() != GLEW_OK)
        std::cout << "errrrroor" << std::endl;

    std::cout << glGetString(GL_VERSION) << std::endl;

    glfwSetKeyCallback(window, keyPressed);

    //SLIDER
    std::vector<vertex> sliderVertices = {
        {{-0.5f, -0.5f, 0.0f}, {1.0f, 0.0f, 0.0f}},
        {{ 0.5f, -0.5f, 0.0f}, {0.0f, 1.0f, 0.0f}},
        {{ 0.5f,  0.5f, 0.0f}, {0.0f, 0.0f, 1.0f}},
        {{-0.5f,  0.5f, 0.0f}, {1.0f, 1.0f, 1.0f}},
    };
    std::vector<unsigned int> sliderIndices = {
        0, 1, 2, 2, 3, 0
    };

    //TRIANGLE
    std::vector<vertex> triangleVertices = {
        {{-0.5f, -0.5f, 0.0f}, {1.0f, 0.0f, 0.0f}},
        {{ 0.5f, -0.5f, 0.0f}, {0.0f, 1.0f, 0.0f}},
        {{ 0.5f,  0.5f, 0.0f}, {0.0f, 0.0f, 1.0f}},
        {{-0.5f,  0.5f, 0.0f}, {1.0f, 1.0f, 1.0f}},
    };
    std::vector<unsigned int> triangleIndices = {
        0, 1, 2, 2, 3, 0
    };

    //create shader program
    shaders shaderProgram("shaders/shader.vert", "shaders/shader.frag");



    vertexBufferLayout sliderLayout;
    sliderLayout.push<float>(3); //positions
    sliderLayout.push<float>(3); //colors

    //slider MVP
    glm::mat4 mode = glm::translate(glm::mat4(1), glm::vec3(0.0f, 4.0f, 0.0f));
    glm::mat4 view = glm::lookAt(glm::vec3(0.0f, 0.0f, 5.0f), glm::vec3(0.0f, 0.0f, 0.0f), glm::vec3(0.0f, 1.0f, 0.0f));
    glm::mat4 proj = glm::ortho(-10.0f, 10.0f, -10.0f, 10.0f, 0.1f, 20.0f);
    glm::mat4 mvp = proj * view * mode;

    model slider(sliderVertices, sliderIndices, sliderLayout, mvp);

    ///////////////////
    
    vertexBufferLayout triangleLayout;
    triangleLayout.push<float>(3); //positions
    triangleLayout.push<float>(3); //colors

    //triangle MVP
    mode = glm::translate(glm::mat4(1), glm::vec3(1.0f, 1.0f, 1.0f));
    mvp = proj * view * mode;

    model triangle(triangleVertices, triangleIndices, triangleLayout, mvp);
    

    //add models

    std::vector<model> models;
    models.resize(2);

    models[0] = slider;
    models[1] = triangle;

    //create renderer
    renderer renderProgram;


    // Loop until the user closes the window 
    while (!glfwWindowShouldClose(window))
    {
        // Render here 
        renderProgram.clear();

        //renderProgram.draw(va, iBuffer, shaderProgram);


        for (size_t i = 0; i < models.size(); i++)
        {
            shaderProgram.setUniformMat4("mvp", glm::value_ptr(models[i].mvp));

            renderProgram.draw(models[i].vArray, models[i].iBuffer, shaderProgram);
        }


        // Swap front and back buffers 
        glfwSwapBuffers(window);

        // Poll for and process events
        glfwPollEvents();
    } 
    */
    sliderGame game;

    game.run();

    glfwTerminate();
    return 0;
}