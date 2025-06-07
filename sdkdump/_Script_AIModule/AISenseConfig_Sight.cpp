#include "..\FUObjectArray.hpp"
#include "AISenseConfig.hpp"
#include "AISenseConfig_Sight.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
void* _Script_AIModule::AISenseConfig_Sight::get_Implementation() {
    return (void*)((uintptr_t)this + 0x48);
}
float& _Script_AIModule::AISenseConfig_Sight::get_PeripheralVisionAngleDegrees() {
    return *(float*)((uintptr_t)this + 0x58);
}
float& _Script_AIModule::AISenseConfig_Sight::get_SightRadius() {
    return *(float*)((uintptr_t)this + 0x50);
}
float& _Script_AIModule::AISenseConfig_Sight::get_LoseSightRadius() {
    return *(float*)((uintptr_t)this + 0x54);
}
void* _Script_AIModule::AISenseConfig_Sight::get_DetectionByAffiliation() {
    return (void*)((uintptr_t)this + 0x5c);
}
float& _Script_AIModule::AISenseConfig_Sight::get_AutoSuccessRangeFromLastSeenLocation() {
    return *(float*)((uintptr_t)this + 0x60);
}
_Script_CoreUObject::Class* _Script_AIModule::AISenseConfig_Sight::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/AIModule.AISenseConfig_Sight");
    return result;
}
