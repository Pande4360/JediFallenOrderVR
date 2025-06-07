#include "..\FUObjectArray.hpp"
#include "AISenseConfig.hpp"
#include "AISenseConfig_Hearing.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
void* _Script_AIModule::AISenseConfig_Hearing::get_DetectionByAffiliation() {
    return (void*)((uintptr_t)this + 0x5c);
}
float& _Script_AIModule::AISenseConfig_Hearing::get_HearingRange() {
    return *(float*)((uintptr_t)this + 0x50);
}
void* _Script_AIModule::AISenseConfig_Hearing::get_Implementation() {
    return (void*)((uintptr_t)this + 0x48);
}
float& _Script_AIModule::AISenseConfig_Hearing::get_LoSHearingRange() {
    return *(float*)((uintptr_t)this + 0x54);
}
bool _Script_AIModule::AISenseConfig_Hearing::get_bUseLoSHearing() {
    return (*(uint8_t*)((uintptr_t)this + 0x58 + 0)) & 1 != 0;
}
void _Script_AIModule::AISenseConfig_Hearing::set_bUseLoSHearing(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x58 + 0);
    *(uint8_t*)((uintptr_t)this + 0x58 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_CoreUObject::Class* _Script_AIModule::AISenseConfig_Hearing::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/AIModule.AISenseConfig_Hearing");
    return result;
}
