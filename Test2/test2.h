#pragma once
//这一段用于动态库代码跨平台，vs/linux
#ifdef _WIN64
	#ifdef GYL_DLL   //随便写，统一定义为ProjectName_EXPORTS
		#define GYL_API __declspec(dllexport)	//自己定义的，统一定义为ProjectName_API
	#else
		#define GYL_API __declspec(dllimport)
	#endif
#else 
	#define GYL_API
#endif

namespace space {

GYL_API void f2();
}