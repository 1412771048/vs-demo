#pragma once
//这一段用于动态库代码跨平台，vs/linux
#ifdef _WIN64
	#ifdef GYL_DLL   //所有动态库都可以用同一个宏，如：GYL_DLL、GYL_API
		#define GYL_API __declspec(dllexport)	
	#else
		#define GYL_API __declspec(dllimport)
	#endif
#else 
	#define GYL_API
#endif


//全局函数和全局变量的声明前加一个Test1_API即可
namespace space {

extern GYL_API int a;
GYL_API void func();

class GYL_API Test1 {
public:
	void f();
};

} //namespace space
