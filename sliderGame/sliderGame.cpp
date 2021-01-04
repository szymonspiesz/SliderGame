#include "sliderGame.h"

std::vector<vertex> ballVertices = {
{{ 0.000000,  0.000000,  0.000000},{1.0f, 0.5f, 0.5f}},
{{ 0.000000,  0.000000,  0.000000},{1.0f, 0.5f, 0.5f}},
{{ 0.000000,  0.000000,  0.000000},{1.0f, 0.5f, 0.5f}},
{{ 0.000000,  0.000000,  0.000000},{1.0f, 0.5f, 0.5f}},
{{ 0.000000,  0.000000,  0.000000},{1.0f, 0.5f, 0.5f}},
{{ 0.000000,  0.000000,  0.000000},{1.0f, 0.5f, 0.5f}},
{{ 0.000000,  0.000000,  0.000000},{1.0f, 0.5f, 0.5f}},
{{ 0.000000,  0.000000,  0.000000},{1.0f, 0.5f, 0.5f}},
{{ 0.000000,  0.000000,  0.000000},{1.0f, 0.5f, 0.5f}},
{{ 0.000000,  0.000000,  0.000000},{1.0f, 0.5f, 0.5f}},
{{ 0.000000,  0.000000,  0.000000},{1.0f, 0.5f, 0.5f}},
{{ 0.000000,  0.000000,  0.000000},{1.0f, 0.5f, 0.5f}},
{{ 0.000000,  0.000000,  0.000000},{1.0f, 0.5f, 0.5f}},
{{ 0.000000,  0.000000,  0.000000},{1.0f, 0.5f, 0.5f}},
{{ 0.000000,  0.000000,  0.000000},{1.0f, 0.5f, 0.5f}},
{{ 0.000000,  0.000000,  0.000000},{1.0f, 0.5f, 0.5f}},
{{ 0.000000,  0.000000,  0.000000},{1.0f, 0.5f, 0.5f}},
{{ 0.000000,  0.000000,  0.000000},{1.0f, 0.5f, 0.5f}},
{{ 0.000000,  0.000000,  0.000000},{1.0f, 0.5f, 0.5f}},
{{ 0.000000,  0.000000,  0.000000},{1.0f, 0.5f, 0.5f}},
{{ 0.000000,  0.000000,  0.000000},{1.0f, 0.5f, 0.5f}},
{{ 0.000000,  0.000000,  0.000000},{1.0f, 0.5f, 0.5f}},
{{ 0.000000,  0.000000,  0.000000},{1.0f, 0.5f, 0.5f}},
{{ 0.000000,  0.000000,  0.000000},{1.0f, 0.5f, 0.5f}},
{{ 0.000000,  0.000000,  0.000000},{1.0f, 0.5f, 0.5f}},
{{ 0.000000,  2.000000,  0.000000},{1.0f, 0.5f, 0.5f}},
{{-0.497380,  1.937166,  0.000000},{1.0f, 0.5f, 0.5f}},
{{-0.963507,  1.752613,  0.000000},{1.0f, 0.5f, 0.5f}},
{{-1.369094,  1.457937,  0.000000},{1.0f, 0.5f, 0.5f}},
{{-1.688656,  1.071653,  0.000000},{1.0f, 0.5f, 0.5f}},
{{-1.902113,  0.618034,  0.000000},{1.0f, 0.5f, 0.5f}},
{{-1.996053,  0.125581,  0.000000},{1.0f, 0.5f, 0.5f}},
{{-1.964574, -0.374763,  0.000000},{1.0f, 0.5f, 0.5f}},
{{-1.809654, -0.851559,  0.000000},{1.0f, 0.5f, 0.5f}},
{{-1.541026, -1.274848,  0.000000},{1.0f, 0.5f, 0.5f}},
{{-1.175570, -1.618034,  0.000000},{1.0f, 0.5f, 0.5f}},
{{-0.736248, -1.859553,  0.000000},{1.0f, 0.5f, 0.5f}},
{{-0.250665, -1.984230,  0.000000},{1.0f, 0.5f, 0.5f}},
{{ 0.250668, -1.984229,  0.000000},{1.0f, 0.5f, 0.5f}},
{{ 0.736250, -1.859553,  0.000000},{1.0f, 0.5f, 0.5f}},
{{ 1.175572, -1.618033,  0.000000},{1.0f, 0.5f, 0.5f}},
{{ 1.541027, -1.274847,  0.000000},{1.0f, 0.5f, 0.5f}},
{{ 1.809655, -0.851557,  0.000000},{1.0f, 0.5f, 0.5f}},
{{ 1.964575, -0.374761,  0.000000},{1.0f, 0.5f, 0.5f}},
{{ 1.996053,  0.125583,  0.000000},{1.0f, 0.5f, 0.5f}},
{{ 1.902112,  0.618036,  0.000000},{1.0f, 0.5f, 0.5f}},
{{ 1.688655,  1.071656,  0.000000},{1.0f, 0.5f, 0.5f}},
{{ 1.369092,  1.457939,  0.000000},{1.0f, 0.5f, 0.5f}},
{{ 0.963505,  1.752615,  0.000000},{1.0f, 0.5f, 0.5f}},
{{ 0.497377,  1.937167,  0.000000},{1.0f, 0.5f, 0.5f}}
};

std::vector<unsigned int> ballIndices = {
	
	27, 28, 2, 
	28, 29, 3, 
	29, 30, 4, 
	30, 31, 5, 
	31, 32, 6, 
	32, 33, 7, 
	33, 34, 8, 
	34, 35, 9,
	35, 36, 10,
	36, 37, 11,
	37, 38, 12,
	38, 39, 13,
	39, 40, 14,
	40, 41, 15,
	41, 42, 16,
	42, 43, 17,
	43, 44, 18,
	44, 45, 19,
	45, 46, 20,
	46, 47, 21,
	47, 48, 22,
	48, 49, 23,
	49, 50, 24,
	50, 26, 0, 
	26, 27, 1  
};

//SLIDER w:h 8:1
std::vector<vertex> sliderVertices = {
	{{-4.0f, -0.5f, 0.0f}, {1.0f, 0.0f, 0.0f}},
	{{ 4.0f, -0.5f, 0.0f}, {0.0f, 1.0f, 0.0f}},
	{{ 4.0f,  0.5f, 0.0f}, {0.0f, 0.0f, 1.0f}},
	{{-4.0f,  0.5f, 0.0f}, {1.0f, 1.0f, 1.0f}},
};
std::vector<unsigned int> sliderIndices = {
	0, 1, 2, 0, 2, 3
};




void sliderGame::run()
{
	initWindow();
	initModels();
	mainLoop();
}

void sliderGame::initWindow()
{
	if(!glfwInit())
		throw std::runtime_error("glfw failed to init");

	window = glfwCreateWindow(WIDTH, HEIGHT, "sliderGame", nullptr, nullptr);

	glfwMakeContextCurrent(window);

	//set this class as a user of glfw window
	glfwSetWindowUserPointer(window, this);

	if (glewInit() != GLEW_OK)
		throw std::runtime_error("glew failed to init");


	keyStates.resize(2);
	keyStates[0] = -1; //arrow left
	keyStates[1] = -1; //arrow right

	glfwSetKeyCallback(window, keyPressed);

	glfwSwapInterval(1);

}

void sliderGame::mainLoop()
{
	shaders shaderProgram("shaders/shader.vert", "shaders/shader.frag");
	renderer renderProgram;
	
	while (!glfwWindowShouldClose(window)) {
		drawFrame(shaderProgram, renderProgram);
	}
}

void sliderGame::drawFrame(shaders& shaderProgram, renderer& renderProgram)
{
	renderProgram.clear();

	keyboardAction();

	if (ballON) ballInGame();
	glm::mat4 mvp;

	for (size_t i = 0; i < models.size(); i++) {

		mvp = projView * models[i].modelMatrix;

		shaderProgram.setUniformMat4("mvp", glm::value_ptr(mvp));
		renderProgram.draw(*models[i].vArray, *models[i].iBuffer, shaderProgram);

	}


	glfwSwapBuffers(window);

	glfwPollEvents();

}

void sliderGame::initModels()
{
	//view and proj matrices
	glm::mat4 view = glm::lookAt(glm::vec3(0.0f, 0.0f, 1.0f), glm::vec3(0.0f, 0.0f, 0.0f), glm::vec3(0.0f, 1.0f, 0.0f));
	glm::mat4 proj = glm::ortho((float)-WIDTH / 2, (float)WIDTH / 2, (float)-HEIGHT / 2, (float)HEIGHT / 2, 0.1f, 20.0f);

	projView = proj * view;

	//data layout in vertex buffer
	vertexBufferLayout vBufferLayout;
	vBufferLayout.push<float>(3); //positions
	vBufferLayout.push<float>(3); //colors


	///////// SLIDER /////////

	//slider MVP
	glm::vec3 sliderScale = glm::vec3((float)WIDTH * 0.015f, (float)WIDTH * 0.015f, 0.0f); // scale slider to 1.5% of width and height
	glm::vec3 sliderTranslate = glm::vec3(0.0f, -(float)HEIGHT / 2 * 0.9f, 0.0f); // translate slider model to be at the bottom of a window
	sliderSize *= sliderScale; // change size of a slider

	//slider model matrix
	glm::mat4 mode = glm::scale(glm::translate(glm::mat4(1), sliderTranslate), sliderScale);


	vertexBuffer* vBufferSlider = new vertexBuffer(sliderVertices.data(), sliderVertices.size() * sizeof(vertex));
	vertexArray* vArraySlider = new vertexArray();
	vArraySlider->addVertexBuffer(*vBufferSlider, vBufferLayout);

	model slider(vArraySlider, new indexBuffer(sliderIndices.data(), sliderIndices.size()), mode, vBufferSlider->vBufferID);
	slider.initPosition = slider.getPos();
	models.push_back(slider);

	////// BALL //////
	glm::vec3 ballScale = glm::vec3(4.0f, 4.0f, 0.0f);
	glm::vec3 ballTranslate = glm::vec3(0.0f, sliderTranslate.y + sliderSize.y + ballRadius, 0.0f);
	ballRadius *= ballScale.x;

	mode = glm::scale(glm::translate(glm::mat4(1), ballTranslate), ballScale);

	vertexBuffer* vBufferBall = new vertexBuffer(ballVertices.data(), ballVertices.size() * sizeof(vertex));
	vertexArray* vArrayBall = new vertexArray;
	vArrayBall->addVertexBuffer(*vBufferBall, vBufferLayout);

	model ball(vArrayBall, new indexBuffer(ballIndices.data(), ballIndices.size()), mode, vBufferBall->vBufferID);
	ball.initPosition = ball.getPos();
	models.push_back(ball);


	////// TILES //////

	createTiles();

	createTilesModel();

	modelsInitialized = true;
}

void sliderGame::keyboardAction() {

	//left
	if (keyStates[0] != -1 && models[0].getPos().x > -WIDTH / 2 + sliderSize.x / 2) {
		if (ballON == false) { // if game has not started yet
			//move slider
			models[0].modelMatrix = glm::translate(models[0].modelMatrix, glm::vec3(-slideSpeed, 0.0f, 0.0f));
			//move ball
			models[1].modelMatrix[3][0] = models[0].modelMatrix[3][0];
		}
		else {// move slider only
			models[0].modelMatrix = glm::translate(models[0].modelMatrix, glm::vec3(-slideSpeed, 0.0f, 0.0f));
		}
	}

	//right
	if (keyStates[1] != -1 && models[0].getPos().x < WIDTH / 2 - sliderSize.x / 2) {
		if (ballON == false) { // if game has not started yet move slider and ball together to the right
			//move slider
			models[0].modelMatrix = glm::translate(models[0].modelMatrix, glm::vec3(slideSpeed, 0.0f, 0.0f));
			//move ball
			models[1].modelMatrix[3][0] = models[0].modelMatrix[3][0];
		}
		else { // move slider only
			models[0].modelMatrix = glm::translate(models[0].modelMatrix, glm::vec3(slideSpeed, 0.0f, 0.0f));
		}
	}

}

void sliderGame::ballInGame() {
	
	//check for collision of ball and tiles
	for (size_t i = 0; i < tiles.size(); i++) {

		if (tiles[i].isHit(models[1].getPos(), ballRadius)) {

			/*
			
			find out which side of a tile was hit and change ball dir x and y

			*/
			
			if (models[1].getPos().y + ballRadius >= tiles[i].bottomRight.pos.y - ballSpeed * 3.8f  &&//bottom of a tile was hit 
				models[1].getPos().y + ballRadius <= tiles[i].bottomRight.pos.y + ballSpeed * 3.8f  ||
				models[1].getPos().y - ballRadius >= tiles[i].topRight.pos.y    - ballSpeed * 3.8f  && //top of a tile was hit
				models[1].getPos().y - ballRadius <= tiles[i].topRight.pos.y    + ballSpeed * 3.8f 
				)
				ballDirY *= -1;
			//either side of a tile was hit
			else
				ballDirX *= -1;

			removeTile(i);
			break;
		}

	} 


	//left wall collision									//right wall collision
	if (models[1].getPos().x <= -WIDTH / 2 + ballRadius || models[1].getPos().x >= WIDTH / 2 - ballRadius) {
		ballDirX *= -1;
	}
	
	//top wall collision
	if (models[1].getPos().y >= HEIGHT / 2 - ballRadius) {
		ballDirY *= -1;
	}
	//check for collision with slider
	if (models[1].getPos().x > models[0].getPos().x - sliderSize.x/2 &&
		models[1].getPos().x < models[0].getPos().x + sliderSize.x/2) 
	{
		if (models[1].getPos().y >= models[0].getPos().y - (float)WIDTH * 0.015f - 0.04f &&
			models[1].getPos().y <= models[0].getPos().y + (float)WIDTH * 0.015f + 0.04f)
		{

			float diff;
			float modifier;

			//left side hit
			if (models[1].getPos().x <= models[0].getPos().x) {

				diff = models[0].getPos().x - models[1].getPos().x; // difference between ball and slider positions
				modifier = (((sliderSize.x / 2) - diff) / (sliderSize.x / 2)); //change in ball direction depending on where the slider was hit

				if (modifier < 0.4f) modifier = 0.4f;

				ballDirY = modifier;
				ballDirX = 1 - modifier;

				ballDirX *= -1; // left side always makes x direction of ball negative
			}
			//right side hit
			else {

				diff = models[1].getPos().x - models[0].getPos().x;
				modifier = (((sliderSize.x / 2) - diff) / (sliderSize.x / 2));

				if (modifier < 0.4f) modifier = 0.4f;

				ballDirY = modifier;
				ballDirX = 1 - modifier;

			}


			
		} 
	}
	//ball missed the slider
	if (models[1].getPos().y <= -HEIGHT / 2 + ballRadius || tiles.size() == 0) {
		resetGame();
	}
	

	glm::vec3 ballDir = glm::normalize(glm::vec3(ballDirX, ballDirY, 0));

	models[1].modelMatrix = glm::translate(models[1].modelMatrix, ballDir * ballSpeed);

}

void sliderGame::createTiles() {

	tiles.clear();

	glm::vec3 v0(-0.08f * WIDTH / 2,  0.04f * HEIGHT / 2, 0.0f); //top left
	glm::vec3 v1(-0.08f * WIDTH / 2, -0.04f * HEIGHT / 2, 0.0f); //bottom left
	glm::vec3 v2( 0.08f * WIDTH / 2, -0.04f * HEIGHT / 2, 0.0f); //bottom right
	glm::vec3 v3( 0.08f * WIDTH / 2,  0.04f * HEIGHT / 2, 0.0f); //top right

	glm::vec3 translateVec(1);

	//create tiles
	for (int i = 6; i <= 9; i++) {
		for (int j = -9; j <= 9; j += 2) {

			translateVec = glm::vec3((float)j / 10 * WIDTH / 2, (float)i / 10 * HEIGHT / 2, 0.0f);

			tiles.push_back(tile({ {v0 + translateVec}, {1.0f, 1.0f, 0.0f} },
				{ {v1 + translateVec}, {1.0f, 1.0f, 0.0f} },
				{ {v2 + translateVec}, {1.0f, 1.0f, 0.0f} },
				{ {v3 + translateVec}, {1.0f, 1.0f, 0.0f} }));

		}
	}
}

void sliderGame::createTilesModel() {

	//fill out data structures needed for vertex and index buffers
	unsigned int tileNum = 0;

	for (size_t i = 0; i < tiles.size(); i++) {

			tilesVertices.push_back(tiles[i].topLeft);
			tilesVertices.push_back(tiles[i].bottomLeft);
			tilesVertices.push_back(tiles[i].bottomRight);
			tilesVertices.push_back(tiles[i].topRight);

			tilesIndices.push_back(0 + tileNum * 4);
			tilesIndices.push_back(1 + tileNum * 4);
			tilesIndices.push_back(2 + tileNum * 4);
			tilesIndices.push_back(0 + tileNum * 4);
			tilesIndices.push_back(2 + tileNum * 4);
			tilesIndices.push_back(3 + tileNum * 4);

			tileNum++;
	}



	if (!modelsInitialized) {
		//data layout in vertex buffer
		vertexBufferLayout vBufferLayout;
		vBufferLayout.push<float>(3); //positions
		vBufferLayout.push<float>(3); //colors

		vertexBuffer* vBufferTiles = new vertexBuffer(tilesVertices.data(), tilesVertices.size() * sizeof(vertex));
		vertexArray* vArrayTiles = new vertexArray();
		vArrayTiles->addVertexBuffer(*vBufferTiles, vBufferLayout);

		model tiles(vArrayTiles, new indexBuffer(tilesIndices.data(), tilesIndices.size()), glm::mat4(1), vBufferTiles->vBufferID);
		models.push_back(tiles);
	}
}

void sliderGame::removeTile(unsigned int ID) {


	std::cout << glGetError() << std::endl;
	
	tiles.erase(tiles.begin() + ID);

	tilesVertices.clear();
	tilesIndices.clear();

	createTilesModel();

	std::cout << glGetError() << std::endl;
	glNamedBufferData(models[2].vertexBufferID, tilesVertices.size() * sizeof(vertex), tilesVertices.data(), GL_STATIC_DRAW);
	models[2].iBuffer->indexCount = tilesIndices.size();
	glNamedBufferData(models[2].iBuffer->iBufferID, tilesIndices.size() * sizeof(unsigned int), tilesIndices.data(), GL_STATIC_DRAW);
}

void sliderGame::resetGame() {

	ballON = false;

	models[0].modelMatrix[3][0] = models[0].initPosition.x; //reset slider

	models[1].modelMatrix[3][0] = models[1].initPosition.x; //reset ball x
	models[1].modelMatrix[3][1] = models[1].initPosition.y; //reset ball y

	ballDirX = 0.5;
	ballDirY = 0.5;


	tilesVertices.clear(); // vertices data array
	tilesIndices.clear(); // indices data array

	createTiles();
	createTilesModel();

	glNamedBufferData(models[2].vertexBufferID, tilesVertices.size() * sizeof(vertex), tilesVertices.data(), GL_STATIC_DRAW);
	models[2].iBuffer->indexCount = tilesIndices.size();
	glNamedBufferData(models[2].iBuffer->iBufferID, tilesIndices.size() * sizeof(unsigned int), tilesIndices.data(), GL_STATIC_DRAW);

}

void sliderGame::keyPressed(GLFWwindow* window, int key, int scancode, int action, int mods)
{
	//get a pointer to the user of a window
	auto app = reinterpret_cast<sliderGame*>(glfwGetWindowUserPointer(window));
	
	if (action == GLFW_PRESS && key == GLFW_KEY_LEFT) app->keyStates[0] = 1; //left arrow pressed
	if (action == GLFW_PRESS && key == GLFW_KEY_RIGHT) app->keyStates[1] = 1; //right arrow pressed

	if (action == GLFW_RELEASE && key == GLFW_KEY_LEFT) app->keyStates[0] = -1; //left arrow released
	if (action == GLFW_RELEASE && key == GLFW_KEY_RIGHT) app->keyStates[1] = -1; //right arrow released

	if (action == GLFW_PRESS && key == GLFW_KEY_SPACE) {
		if (app->ballON) { //ball was in game, change ballON to false and set the position of ball to be on slider and reset the slider
			app->resetGame();
		}
		else {
			app->ballON = true;
		}
	}

}
