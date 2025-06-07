#include "..\FUObjectArray.hpp"
#include "Lib_CameraPOI_C.hpp"
#include "..\_Game_GlobalData_Structs_Struct_CameraPOIVar\Struct_CameraPOIVar.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "..\_Script_Engine\BlueprintFunctionLibrary.hpp"
_Script_CoreUObject::Class* _Game_GlobalData_Camera_Lib_CameraPOI::Lib_CameraPOI_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"BlueprintGeneratedClass /Game/GlobalData/Camera/Lib_CameraPOI.Lib_CameraPOI_C");
    return result;
}
void _Game_GlobalData_Camera_Lib_CameraPOI::Lib_CameraPOI_C::LVL_StartCameraPOIwithCameraMode(_Game_GlobalData_Structs_Struct_CameraPOIVar::Struct_CameraPOIVar POIVariables, void* CameraMode, _Script_CoreUObject::Object* __WorldContext) {
    return;
}
void _Game_GlobalData_Camera_Lib_CameraPOI::Lib_CameraPOI_C::LVL_EndCameraPOI(_Script_CoreUObject::Object* __WorldContext) {
    return;
}
void _Game_GlobalData_Camera_Lib_CameraPOI::Lib_CameraPOI_C::LVL_EndCameraPOIwithoutCameraReset(_Script_CoreUObject::Object* __WorldContext) {
    return;
}
void _Game_GlobalData_Camera_Lib_CameraPOI::Lib_CameraPOI_C::LVL_StartCameraPOI(_Game_GlobalData_Structs_Struct_CameraPOIVar::Struct_CameraPOIVar Variables, _Script_CoreUObject::Object* __WorldContext) {
    return;
}
