#include "..\FUObjectArray.hpp"
#include "Struct_CameraPOIVar.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\Actor.hpp"
float& _Game_GlobalData_Structs_Struct_CameraPOIVar::Struct_CameraPOIVar::get_FocusDuration_21_24A90C88462E50DB39134CA866ED8AB3() {
    return *(float*)((uintptr_t)this + 0x14);
}
_Script_Engine::Actor*& _Game_GlobalData_Structs_Struct_CameraPOIVar::Struct_CameraPOIVar::get_FocusActor_17_01E1E1894F3A5831038C8ABE22F23907() {
    return *(_Script_Engine::Actor**)((uintptr_t)this + 0x0);
}
float& _Game_GlobalData_Structs_Struct_CameraPOIVar::Struct_CameraPOIVar::get_LockDuration_22_6DF3522144A571145E82F891907AC7B3() {
    return *(float*)((uintptr_t)this + 0x18);
}
void* _Game_GlobalData_Structs_Struct_CameraPOIVar::Struct_CameraPOIVar::get_POIType_18_8C93503D45B5730D9C056CB75717B60E() {
    return (void*)((uintptr_t)this + 0x8);
}
float& _Game_GlobalData_Structs_Struct_CameraPOIVar::Struct_CameraPOIVar::get_BlendInTime_11_DCE4D81C430A5363EBC025B69445B9E4() {
    return *(float*)((uintptr_t)this + 0xc);
}
float& _Game_GlobalData_Structs_Struct_CameraPOIVar::Struct_CameraPOIVar::get_BlendOutTime_12_C960FCF041FFBF54C0132C80C54BF64C() {
    return *(float*)((uintptr_t)this + 0x10);
}
bool _Game_GlobalData_Structs_Struct_CameraPOIVar::Struct_CameraPOIVar::get_ShouldResetCameraOnEnd_24_BE4820DE49258ED5AC2E3FA01FF2278F() {
    return (*(uint8_t*)((uintptr_t)this + 0x1c + 0)) & 1 != 0;
}
void _Game_GlobalData_Structs_Struct_CameraPOIVar::Struct_CameraPOIVar::set_ShouldResetCameraOnEnd_24_BE4820DE49258ED5AC2E3FA01FF2278F(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x1c + 0);
    *(uint8_t*)((uintptr_t)this + 0x1c + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Game_GlobalData_Structs_Struct_CameraPOIVar::Struct_CameraPOIVar::get_DynamicLocationOffset_30_5545F8D7447E59AF33F38DB6F456FD79() {
    return (void*)((uintptr_t)this + 0x20);
}
void* _Game_GlobalData_Structs_Struct_CameraPOIVar::Struct_CameraPOIVar::get_DynamicRotationOffset_31_AF6ECAB140F2F528B7C1A5ACCE57C0DA() {
    return (void*)((uintptr_t)this + 0x2c);
}
float& _Game_GlobalData_Structs_Struct_CameraPOIVar::Struct_CameraPOIVar::get_FocusBreakResistance_35_DB229DB8451BAB2F69817D96BB8CEDD4() {
    return *(float*)((uintptr_t)this + 0x38);
}
bool _Game_GlobalData_Structs_Struct_CameraPOIVar::Struct_CameraPOIVar::get_SetAutoDepthOfFieldTarget_37_A37D3C11494771AFBDA7BDBE4D800926() {
    return (*(uint8_t*)((uintptr_t)this + 0x3c + 0)) & 1 != 0;
}
void _Game_GlobalData_Structs_Struct_CameraPOIVar::Struct_CameraPOIVar::set_SetAutoDepthOfFieldTarget_37_A37D3C11494771AFBDA7BDBE4D800926(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x3c + 0);
    *(uint8_t*)((uintptr_t)this + 0x3c + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_CoreUObject::Class* _Game_GlobalData_Structs_Struct_CameraPOIVar::Struct_CameraPOIVar::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"UserDefinedStruct /Game/GlobalData/Structs/Struct_CameraPOIVar.Struct_CameraPOIVar");
    return result;
}
