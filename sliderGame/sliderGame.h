#pragma once

#include <GL/glew.h>
#include <GLFW/glfw3.h>

#include <glm.hpp>
#include <gtc/matrix_transform.hpp>
#include <gtc/type_ptr.hpp>

#include <iostream>
#include <fstream>
#include <String>
#include <vector>
#include <math.h>

#include "shaders.h"
#include "renderer.h"


#include "vertexBuffer.h"
#include "indexBuffer.h"
#include "vertexArray.h"

const int WIDTH = 640;
const int HEIGHT = 480;

struct vertex {
	glm::vec3 pos;
	glm::vec3 color;
};

struct tile {

	tile(vertex tL, vertex bL, vertex bR, vertex tR)
	{
		topLeft = tL;
		bottomLeft = bL;
		bottomRight = bR;
		topRight = tR;
	};

	vertex topLeft;
	vertex bottomLeft;
	vertex bottomRight;
	vertex topRight;


	bool isHit(glm::vec3 ballPos, float radius) {

		float x = fmax(bottomLeft.pos.x, fmin(ballPos.x, bottomRight.pos.x));
		float y = fmax(bottomLeft.pos.y, fmin(ballPos.y, topLeft.pos.y));

		float distance = sqrt((x - ballPos.x) * (x - ballPos.x) +
							  (y - ballPos.y) * (y - ballPos.y));

		return distance < radius;
	}

};


struct model {

	unsigned int vertexBufferID;
	vertexArray* vArray;
	indexBuffer* iBuffer;
	glm::mat4 modelMatrix;
	glm::vec3 initPosition;


	model(vertexArray* va, indexBuffer* ib, glm::mat4 modelMat, unsigned int vBufferID)
		:vArray(va), iBuffer(ib), modelMatrix(modelMat), vertexBufferID(vBufferID)
	{
	}

	glm::vec3 getPos() {
		return glm::vec3(modelMatrix[3][0], modelMatrix[3][1], modelMatrix[3][2]);
	}

};


class sliderGame {

public:
	void run();

private:
	GLFWwindow* window;

	std::vector<int> keyStates;

	std::vector<vertex> tilesVertices;
	std::vector<unsigned int> tilesIndices;
	std::vector<tile> tiles;

	glm::mat4 projView;

	std::vector<model> models;
	bool modelsInitialized = false;

	glm::vec3 sliderSize = glm::vec3(8.0f, 1.0f, 0.0f);

	float ballRadius = 2.0f;
	float ballSpeed = 1.5f;
	float ballDirX = 0.5f;
	float ballDirY = 0.5f;
	
	float slideSpeed = 0.7f;

	//check if ball is in game
	bool ballON = false;
 
	void initWindow();
	void mainLoop();
	void drawFrame(shaders& shaderProgram, renderer& renderProgram);
	void initModels();
	void keyboardAction();
	static void keyPressed(GLFWwindow* window, int key, int scancode, int action, int mods);
	void ballInGame();
	void resetGame();
	void createTiles();
	void createTilesModel();
	void removeTile(unsigned int ID);
	


};





