#pragma once

#include<string>
#include<unordered_map>

class shaders {
private:
	unsigned int shaderProgramID;

	std::unordered_map<std::string, int> uniformLocations;

	int getUniformLocation(const std::string& name);

public:
	shaders(const std::string& vertexShaderPath, const std::string& fragmentShaderPath);
	~shaders();

	void bind() const;
	void unbind() const;

	void compileShader();

	std::string readFile(const std::string& filename);
	unsigned int createShaders(const std::string& vertexShader, const std::string& fragmentShader);
	unsigned int compileShader(unsigned int type, const std::string& source);

	void setUniformMat4(const std::string& name, const float* value);
};