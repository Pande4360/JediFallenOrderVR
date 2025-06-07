#include "..\FUObjectArray.hpp"
#include "AIPerceptionSystem.hpp"
#include "AISense.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
void _Script_AIModule::AISense::set_bAutoRegisterAllPawnsAsSources(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x30 + 0);
    *(uint8_t*)((uintptr_t)this + 0x30 + 0) = (cur_value & ~2) | (value ? 2 : 0);
}
float& _Script_AIModule::AISense::get_DefaultExpirationAge() {
    return *(float*)((uintptr_t)this + 0x28);
}
void* _Script_AIModule::AISense::get_NotifyType() {
    return (void*)((uintptr_t)this + 0x2c);
}
bool _Script_AIModule::AISense::get_bWantsNewPawnNotification() {
    return (*(uint8_t*)((uintptr_t)this + 0x30 + 0)) & 1 != 0;
}
void _Script_AIModule::AISense::set_bWantsNewPawnNotification(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x30 + 0);
    *(uint8_t*)((uintptr_t)this + 0x30 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_AIModule::AIPerceptionSystem*& _Script_AIModule::AISense::get_PerceptionSystemInstance() {
    return *(_Script_AIModule::AIPerceptionSystem**)((uintptr_t)this + 0x38);
}
bool _Script_AIModule::AISense::get_bAutoRegisterAllPawnsAsSources() {
    return (*(uint8_t*)((uintptr_t)this + 0x30 + 0)) & 2 != 0;
}
_Script_CoreUObject::Class* _Script_AIModule::AISense::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/AIModule.AISense");
    return result;
}
