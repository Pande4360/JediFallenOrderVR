#include "..\FUObjectArray.hpp"
#include "INT_ForcePowers_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Interface.hpp"
#include "..\_Script_CoreUObject\Vector.hpp"
_Script_CoreUObject::Class* _Game_GlobalData_Interfaces_INT_ForcePowers::INT_ForcePowers_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"BlueprintGeneratedClass /Game/GlobalData/Interfaces/INT_ForcePowers.INT_ForcePowers_C");
    return result;
}
void _Game_GlobalData_Interfaces_INT_ForcePowers::INT_ForcePowers_C::ForceSlowdown(float defaultSlowdownLength) {
    return;
}
void _Game_GlobalData_Interfaces_INT_ForcePowers::INT_ForcePowers_C::EndForceSlowdown() {
    return;
}
void _Game_GlobalData_Interfaces_INT_ForcePowers::INT_ForcePowers_C::ForcePullTick(_Script_CoreUObject::Vector PullHandLoc, _Script_CoreUObject::Vector pullHandFwdVector, float Progress) {
    return;
}
void _Game_GlobalData_Interfaces_INT_ForcePowers::INT_ForcePowers_C::ForcePullJiggle(float delayWindow) {
    return;
}
void _Game_GlobalData_Interfaces_INT_ForcePowers::INT_ForcePowers_C::ForceCrushRelease() {
    return;
}
void _Game_GlobalData_Interfaces_INT_ForcePowers::INT_ForcePowers_C::IsForceSlowdownObject(bool& Result) {
    return;
}
void _Game_GlobalData_Interfaces_INT_ForcePowers::INT_ForcePowers_C::ForceCrushGrab(bool& Success) {
    return;
}
void _Game_GlobalData_Interfaces_INT_ForcePowers::INT_ForcePowers_C::IsTelekinesisObject(bool& Result, int32_t& tkWeightClass) {
    return;
}
void _Game_GlobalData_Interfaces_INT_ForcePowers::INT_ForcePowers_C::ForcePullStart(float pullTime, _Script_CoreUObject::Vector PullHandLoc, _Script_CoreUObject::Vector pullHandFwdVector) {
    return;
}
void _Game_GlobalData_Interfaces_INT_ForcePowers::INT_ForcePowers_C::TelekinesisToss(_Script_CoreUObject::Vector Velocity) {
    return;
}
void _Game_GlobalData_Interfaces_INT_ForcePowers::INT_ForcePowers_C::TelekinesisDrop(_Script_CoreUObject::Vector Velocity) {
    return;
}
void _Game_GlobalData_Interfaces_INT_ForcePowers::INT_ForcePowers_C::TelekinesisPush(_Script_CoreUObject::Vector Velocity) {
    return;
}
void _Game_GlobalData_Interfaces_INT_ForcePowers::INT_ForcePowers_C::TelekinesisLift(bool& Success, int32_t& WeightClass) {
    return;
}
