// #include "basicpp.hpp"
// #include "example.hpp"
// #include "test_hashtables.hpp"
// #include "test_matrices.hpp"
// #include "raytrace.hpp"
#include "texwork.hpp"



int main() {
	// return basicpp();
	// return example();
	// return test_hashtables();
	// return test_matrices();
	// return raytracer();
	return make_texture_resize_work();
}


/*
	NOTE: raytracer() =>
	The Black Screen Happens because of the Texture Struct 
	(Probably, problem doesn't exist when hand-writing texture code like in basicpp, or either when the texture isn't updated in the main loop)
*/