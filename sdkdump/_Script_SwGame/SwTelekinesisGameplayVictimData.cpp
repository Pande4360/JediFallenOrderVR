#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "SwTelekinesisGameplayVictimData.hpp"
bool _Script_SwGame::SwTelekinesisGameplayVictimData::get_bIsAxisConstrained() {
    return (*(uint8_t*)((uintptr_t)this + 0xa5 + 0)) & 1 != 0;
}
void* _Script_SwGame::SwTelekinesisGameplayVictimData::get_ForceTelekinesisAnimation() {
    return (void*)((uintptr_t)this + 0x0);
}
void* _Script_SwGame::SwTelekinesisGameplayVictimData::get_ForceTelekinesisLandingAnimation() {
    return (void*)((uintptr_t)this + 0x48);
}
void* _Script_SwGame::SwTelekinesisGameplayVictimData::get_ForceTelekinesisSocket() {
    return (void*)((uintptr_t)this + 0x90);
}
void* _Script_SwGame::SwTelekinesisGameplayVictimData::get_ForceTelekinesisOffset() {
    return (void*)((uintptr_t)this + 0x98);
}
void _Script_SwGame::SwTelekinesisGameplayVictimData::set_bIsAxisConstrained(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xa5 + 0);
    *(uint8_t*)((uintptr_t)this + 0xa5 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_SwGame::SwTelekinesisGameplayVictimData::get_bShouldUse180DegreeOrientationSnapping() {
    return (*(uint8_t*)((uintptr_t)this + 0xa4 + 0)) & 1 != 0;
}
void _Script_SwGame::SwTelekinesisGameplayVictimData::set_bShouldUse180DegreeOrientationSnapping(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xa4 + 0);
    *(uint8_t*)((uintptr_t)this + 0xa4 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
float& _Script_SwGame::SwTelekinesisGameplayVictimData::get_MaxAxisConstraintDistanceFromVictim() {
    return *(float*)((uintptr_t)this + 0xa8);
}
float& _Script_SwGame::SwTelekinesisGameplayVictimData::get_MaxAxisConstraintDistanceFromUser() {
    return *(float*)((uintptr_t)this + 0xac);
}
bool _Script_SwGame::SwTelekinesisGameplayVictimData::get_bShouldOverrideMovementControl() {
    return (*(uint8_t*)((uintptr_t)this + 0xb0 + 0)) & 1 != 0;
}
void _Script_SwGame::SwTelekinesisGameplayVictimData::set_bShouldOverrideMovementControl(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xb0 + 0);
    *(uint8_t*)((uintptr_t)this + 0xb0 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_SwGame::SwTelekinesisGameplayVictimData::get_ControlData() {
    return (void*)((uintptr_t)this + 0xb8);
}
_Script_CoreUObject::Class* _Script_SwGame::SwTelekinesisGameplayVictimData::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/SwGame.SwTelekinesisGameplayVictimData");
    return result;
}
