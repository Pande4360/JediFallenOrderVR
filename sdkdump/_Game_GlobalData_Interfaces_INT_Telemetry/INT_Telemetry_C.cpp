#include "..\FUObjectArray.hpp"
#include "INT_Telemetry_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Interface.hpp"
#include "..\_Script_Engine\Actor.hpp"
_Script_CoreUObject::Class* _Game_GlobalData_Interfaces_INT_Telemetry::INT_Telemetry_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"BlueprintGeneratedClass /Game/GlobalData/Interfaces/INT_Telemetry.INT_Telemetry_C");
    return result;
}
void _Game_GlobalData_Interfaces_INT_Telemetry::INT_Telemetry_C::Telemetry_Bat_Boss(void* EventName, void* BossAction, int32_t FightNumber) {
    return;
}
void _Game_GlobalData_Interfaces_INT_Telemetry::INT_Telemetry_C::Telemetry_Revive(void* EventName, bool Acquired) {
    return;
}
void _Game_GlobalData_Interfaces_INT_Telemetry::INT_Telemetry_C::Telemetry_AI(void* EventName, _Script_Engine::Actor* AI) {
    return;
}
void _Game_GlobalData_Interfaces_INT_Telemetry::INT_Telemetry_C::Telemetry_Initialize() {
    return;
}
void _Game_GlobalData_Interfaces_INT_Telemetry::INT_Telemetry_C::Telemetry_Mission(void* EventName, void* MissionKey, bool HasCompleted) {
    return;
}
void _Game_GlobalData_Interfaces_INT_Telemetry::INT_Telemetry_C::Telemetry_Collectible(void* EventName, void* String_ID) {
    return;
}
void _Game_GlobalData_Interfaces_INT_Telemetry::INT_Telemetry_C::Telemetry_Section_End(void* EventName) {
    return;
}
void _Game_GlobalData_Interfaces_INT_Telemetry::INT_Telemetry_C::Telemetry_ZTarget_AI(void* EventName, float ZTargetTime, _Script_Engine::Actor* AI) {
    return;
}
void _Game_GlobalData_Interfaces_INT_Telemetry::INT_Telemetry_C::Telemetry_ZTarget(void* EventName, float ZTargetTime, int32_t NumTargets) {
    return;
}
void _Game_GlobalData_Interfaces_INT_Telemetry::INT_Telemetry_C::Telemetry(void* EventName) {
    return;
}
