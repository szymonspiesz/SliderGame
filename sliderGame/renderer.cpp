#include "renderer.h"
#include<iostream>



void renderer::draw(const vertexArray& vArray, const indexBuffer& iBuffer, const shaders& shaderProgram) const
{
	shaderProgram.bind();

	//std::cout << glGetError() << std::endl;

	vArray.bind(); 

	//std::cout << glGetError() << std::endl;

	iBuffer.bind();

	//std::cout << glGetError() << std::endl;

	glDrawElements(GL_TRIANGLES, iBuffer.getIndexCount(), GL_UNSIGNED_INT, nullptr);
}

void renderer::clear() const
{
	glClear(GL_COLOR_BUFFER_BIT);
}
