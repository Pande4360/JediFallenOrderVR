#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Game_GlobalData_Structs_Struct_CameraPOIVar\Struct_CameraPOIVar.hpp"
#include "..\_Script_CoreUObject\Interface.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Game_GlobalData_Interfaces_INT_CameraPOI {
#pragma pack(push, 1)
struct INT_CameraPOI_C : public _Script_CoreUObject::Interface {
    static _Script_CoreUObject::Class* static_class();
    void CameraPOIInterface_StartPOIwithCameraMode(_Game_GlobalData_Structs_Struct_CameraPOIVar::Struct_CameraPOIVar POIVariables, void* CameraMode);
    void CameraPOIInterface_EndPOIwithoutCameraReset();
    void CameraPOIInterface_EndPOI();
    void CameraPOIInterface_StartPOI(_Game_GlobalData_Structs_Struct_CameraPOIVar::Struct_CameraPOIVar POIVariables);
}; // Size: 0x28
#pragma pack(pop)
}
