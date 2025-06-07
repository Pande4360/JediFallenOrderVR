#include "..\FUObjectArray.hpp"
#include "INT_CameraPOI_C.hpp"
#include "..\_Game_GlobalData_Structs_Struct_CameraPOIVar\Struct_CameraPOIVar.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Interface.hpp"
_Script_CoreUObject::Class* _Game_GlobalData_Interfaces_INT_CameraPOI::INT_CameraPOI_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"BlueprintGeneratedClass /Game/GlobalData/Interfaces/INT_CameraPOI.INT_CameraPOI_C");
    return result;
}
void _Game_GlobalData_Interfaces_INT_CameraPOI::INT_CameraPOI_C::CameraPOIInterface_StartPOIwithCameraMode(_Game_GlobalData_Structs_Struct_CameraPOIVar::Struct_CameraPOIVar POIVariables, void* CameraMode) {
    return;
}
void _Game_GlobalData_Interfaces_INT_CameraPOI::INT_CameraPOI_C::CameraPOIInterface_EndPOIwithoutCameraReset() {
    return;
}
void _Game_GlobalData_Interfaces_INT_CameraPOI::INT_CameraPOI_C::CameraPOIInterface_EndPOI() {
    return;
}
void _Game_GlobalData_Interfaces_INT_CameraPOI::INT_CameraPOI_C::CameraPOIInterface_StartPOI(_Game_GlobalData_Structs_Struct_CameraPOIVar::Struct_CameraPOIVar POIVariables) {
    return;
}
