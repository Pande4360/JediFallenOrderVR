#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "ParticleModuleKillBase.hpp"
#include "ParticleModuleKillBox.hpp"
void* _Script_Engine::ParticleModuleKillBox::get_LowerLeftCorner() {
    return (void*)((uintptr_t)this + 0x30);
}
void _Script_Engine::ParticleModuleKillBox::set_bAxisAlignedAndFixedSize(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xd0 + 0);
    *(uint8_t*)((uintptr_t)this + 0xd0 + 0) = (cur_value & ~4) | (value ? 4 : 0);
}
bool _Script_Engine::ParticleModuleKillBox::get_bAxisAlignedAndFixedSize() {
    return (*(uint8_t*)((uintptr_t)this + 0xd0 + 0)) & 4 != 0;
}
void* _Script_Engine::ParticleModuleKillBox::get_UpperRightCorner() {
    return (void*)((uintptr_t)this + 0x80);
}
bool _Script_Engine::ParticleModuleKillBox::get_bAbsolute() {
    return (*(uint8_t*)((uintptr_t)this + 0xd0 + 0)) & 1 != 0;
}
void _Script_Engine::ParticleModuleKillBox::set_bAbsolute(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xd0 + 0);
    *(uint8_t*)((uintptr_t)this + 0xd0 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_Engine::ParticleModuleKillBox::get_bKillInside() {
    return (*(uint8_t*)((uintptr_t)this + 0xd0 + 0)) & 2 != 0;
}
void _Script_Engine::ParticleModuleKillBox::set_bKillInside(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xd0 + 0);
    *(uint8_t*)((uintptr_t)this + 0xd0 + 0) = (cur_value & ~2) | (value ? 2 : 0);
}
_Script_CoreUObject::Class* _Script_Engine::ParticleModuleKillBox::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.ParticleModuleKillBox");
    return result;
}
