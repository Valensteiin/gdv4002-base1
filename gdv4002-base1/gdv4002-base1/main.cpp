#include "Engine.h"


// Function prototypes
void myUpdate(GLFWwindow* window, double tDelta);



// Global Variables


int main(void) {

	// Initialise the engine (create window, setup OpenGL backend)
	int initResult = engineInit("GDV4002 - Applied Maths for Games",1080, 1080);


	// If the engine initialisation failed report error and exit
	if (initResult != 0) {

		fprintf(stderr, "Cannot setup game window!!!\n");
		return initResult; // exit if setup failed
	}

	//
	// Setup game scene objects here
	//
	
	addObject("player", glm::vec2(1.0f, 1.0f), glm::radians(45.0f), glm::vec2(1.0f, 1.0f), "Resources\\Textures\\peashooter.png");
	
	//
	// Set callback functions
	//
	setUpdateFunction(myUpdate);

	// Enter main loop - this handles update and render calls
	engineMainLoop();

	// When we quit (close window for example), clean up engine resources
	engineShutdown();

	// return success :)
	return 0;
}

void myUpdate(GLFWwindow* window, double tDelta) {

	float PSRotation = glm::radians(180.0f);

	GameObject2D* PeaShooter = getObject("player");
	PeaShooter->orientation += PSRotation * tDelta;

}
