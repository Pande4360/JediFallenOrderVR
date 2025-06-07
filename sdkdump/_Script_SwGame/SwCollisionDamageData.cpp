#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\DataAsset.hpp"
#include "..\_Script_Engine\MaterialInterface.hpp"
#include "SwCollisionDamageData.hpp"
void* _Script_SwGame::SwCollisionDamageData::get_GlancingDamageToOther() {
    return (void*)((uintptr_t)this + 0x30);
}
void* _Script_SwGame::SwCollisionDamageData::get_GlancingDamageToSelfAgainstNonCharacter() {
    return (void*)((uintptr_t)this + 0x78);
}
bool _Script_SwGame::SwCollisionDamageData::get_bShouldAlwaysTakeDamageAgainstCharacter() {
    return (*(uint8_t*)((uintptr_t)this + 0x50 + 0)) & 1 != 0;
}
void* _Script_SwGame::SwCollisionDamageData::get_DirectDamageToOther() {
    return (void*)((uintptr_t)this + 0x40);
}
void _Script_SwGame::SwCollisionDamageData::set_bShouldAlwaysTakeDamageAgainstCharacter(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x50 + 0);
    *(uint8_t*)((uintptr_t)this + 0x50 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_SwGame::SwCollisionDamageData::get_GlancingDamageToSelfAgainstCharacter() {
    return (void*)((uintptr_t)this + 0x58);
}
void* _Script_SwGame::SwCollisionDamageData::get_DirectDamageToSelfAgainstCharacter() {
    return (void*)((uintptr_t)this + 0x68);
}
void* _Script_SwGame::SwCollisionDamageData::get_DirectDamageToSelfAgainstNonCharacter() {
    return (void*)((uintptr_t)this + 0x88);
}
float& _Script_SwGame::SwCollisionDamageData::get_MinSpeedToCollide() {
    return *(float*)((uintptr_t)this + 0x98);
}
float& _Script_SwGame::SwCollisionDamageData::get_ThresholdAngle() {
    return *(float*)((uintptr_t)this + 0x9c);
}
float& _Script_SwGame::SwCollisionDamageData::get_HeadOnAngle() {
    return *(float*)((uintptr_t)this + 0xa0);
}
_Script_Engine::MaterialInterface*& _Script_SwGame::SwCollisionDamageData::get_Decal() {
    return *(_Script_Engine::MaterialInterface**)((uintptr_t)this + 0xa8);
}
void* _Script_SwGame::SwCollisionDamageData::get_DecalSize() {
    return (void*)((uintptr_t)this + 0xb0);
}
float& _Script_SwGame::SwCollisionDamageData::get_DecalLifetime() {
    return *(float*)((uintptr_t)this + 0xbc);
}
float& _Script_SwGame::SwCollisionDamageData::get_ShakeDistance() {
    return *(float*)((uintptr_t)this + 0xc8);
}
void* _Script_SwGame::SwCollisionDamageData::get_ShakeType() {
    return (void*)((uintptr_t)this + 0xc0);
}
float& _Script_SwGame::SwCollisionDamageData::get_ControllerRumbleIntensity() {
    return *(float*)((uintptr_t)this + 0xcc);
}
float& _Script_SwGame::SwCollisionDamageData::get_ControllerRumbleDuration() {
    return *(float*)((uintptr_t)this + 0xd0);
}
_Script_CoreUObject::Class* _Script_SwGame::SwCollisionDamageData::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/SwGame.SwCollisionDamageData");
    return result;
}
