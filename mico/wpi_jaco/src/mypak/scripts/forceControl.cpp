#include <iostream>
#include <dlfcn.h> //Ubuntu
#include <KinovaTypes.h>
#include <Kinova.API.CommLayerUbuntu.h>

using namespace std;

class ForceControl{
	public:
		void StartForceControl(){
			int result;
			//Handle for the library's command layer.
			void * commandLayer_handle;
			//Function pointers to the functions we need
			int (*MyInitAPI)();
			int (*MyStartForceControl)();
			//We load the library (Under Windows, use the function LoadLibrary)
			commandLayer_handle = dlopen("Kinova.API.USBCommandLayerUbuntu.so",RTLD_NOW|RTLD_GLOBAL);
			//We load the functions from the library (Under Windows, use GetProcAddress)
			MyInitAPI = (int (*)()) dlsym(commandLayer_handle,"InitAPI");
			MyStartForceControl = (int (*)()) dlsym(commandLayer_handle,"StartForceControl");
			//If the was loaded correctly
			if((MyInitAPI == NULL) || (MyStartForceControl == NULL))
			{
			cout << "Unable to initialize the command layer." << endl;
			}
			else
			{
			cout << "Calling initAPI" << endl;
			result = (*MyInitAPI)();
			cout << "Result of initAPI: " << result << endl;
			cout << "Starting force control" << endl;
			result = (*MyStartForceControl)();
			cout << "Result of StartForceControl: " << result << endl;
			}
		}

		void StopForceControl() {
			int result;
			//Handle for the library's command layer.
			void * commandLayer_handle;
			//Function pointers to the functions we need
			int (*MyCloseAPI)();
			int (*MyStopForceControl)();
			//We load the library (Under Windows, use the function LoadLibrary)
			commandLayer_handle = dlopen("Kinova.API.USBCommandLayerUbuntu.so",RTLD_NOW|RTLD_GLOBAL);
			//We load the functions from the library (Under Windows, use GetProcAddress)
			MyCloseAPI = (int (*)()) dlsym(commandLayer_handle,"CloseAPI");
			MyStopForceControl = (int (*)()) dlsym(commandLayer_handle, "StopForceControl");
			//If the was loaded correctly
			if((MyCloseAPI == NULL) || (MyStopForceControl == NULL))
			{
			cout << "Unable to initialize the command layer." << endl;
			}
			else
			{
			cout << "Stopping force control" << endl;
			result = (*MyStopForceControl)();
			while (result != 1) { result = (*MyStopForceControl)(); }
			cout << "Result of StopForceControl: " << result << endl;
			cout << "Closing API" << endl;
			result = (*MyCloseAPI)();
			cout << "Result of CloseAPI: " << result << endl;
			}
		}
};

extern "C" {
	ForceControl* ForceControl_new(){return new ForceControl();}
	void ForceControl_StartForceControl(ForceControl* fc){ fc->StartForceControl(); }
	void ForceControl_StopForceControl(ForceControl* fc){ fc->StopForceControl(); }
	}
