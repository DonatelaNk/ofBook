#ifndef _TEST_APP
#define _TEST_APP

#include "ofMain.h"
#include "rectangle.h"

class testApp : public ofSimpleApp{

	public:

		void setup();
		void update();
		void draw();

		rectangle myRectangle;
		float pct;
};

#endif

