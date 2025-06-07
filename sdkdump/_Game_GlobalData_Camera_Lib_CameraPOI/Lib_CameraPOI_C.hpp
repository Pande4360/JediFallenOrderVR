#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Game_GlobalData_Structs_Struct_CameraPOIVar\Struct_CameraPOIVar.hpp"
#include "..\_Script_Engine\BlueprintFunctionLibrary.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_CoreUObject {
struct Object;
}
namespace _Game_GlobalData_Camera_Lib_CameraPOI {
#pragma pack(push, 1)
struct Lib_CameraPOI_C : public _Script_Engine::BlueprintFunctionLibrary {
    static _Script_CoreUObject::Class* static_class();
    void LVL_StartCameraPOIwithCameraMode(_Game_GlobalData_Structs_Struct_CameraPOIVar::Struct_CameraPOIVar POIVariables, void* CameraMode, _Script_CoreUObject::Object* __WorldContext);
    void LVL_EndCameraPOIwithoutCameraReset(_Script_CoreUObject::Object* __WorldContext);
    void LVL_EndCameraPOI(_Script_CoreUObject::Object* __WorldContext);
    void LVL_StartCameraPOI(_Game_GlobalData_Structs_Struct_CameraPOIVar::Struct_CameraPOIVar Variables, _Script_CoreUObject::Object* __WorldContext);
}; // Size: 0x28
#pragma pack(pop)
}
