#include "marvel_core.h"

int main(int argc,char** argv)
{
	ros::init(argc, argv, "marvel_core");
	Marvel marvel;
	marvel.Start();
	
	return 0;
}