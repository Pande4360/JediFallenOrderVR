#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "BodySetup.hpp"
#include "SkeletalBodySetup.hpp"
bool _Script_Engine::SkeletalBodySetup::get_bSkipScaleFromAnimation() {
    return (*(uint8_t*)((uintptr_t)this + 0x770 + 0)) & 1 != 0;
}
void _Script_Engine::SkeletalBodySetup::set_bSkipScaleFromAnimation(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x770 + 0);
    *(uint8_t*)((uintptr_t)this + 0x770 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_CoreUObject::Class* _Script_Engine::SkeletalBodySetup::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.SkeletalBodySetup");
    return result;
}
void* _Script_Engine::SkeletalBodySetup::get_PhysicalAnimationData() {
    return (void*)((uintptr_t)this + 0x778);
}
