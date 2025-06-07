#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "AnimationAsset.hpp"
#include "PoseAsset.hpp"
void* _Script_Engine::PoseAsset::get_PoseContainer() {
    return (void*)((uintptr_t)this + 0x80);
}
bool _Script_Engine::PoseAsset::get_bAdditivePose() {
    return (*(uint8_t*)((uintptr_t)this + 0x110 + 0)) & 1 != 0;
}
void _Script_Engine::PoseAsset::set_bAdditivePose(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x110 + 0);
    *(uint8_t*)((uintptr_t)this + 0x110 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
int32_t& _Script_Engine::PoseAsset::get_BasePoseIndex() {
    return *(int32_t*)((uintptr_t)this + 0x114);
}
void* _Script_Engine::PoseAsset::get_RetargetSource() {
    return (void*)((uintptr_t)this + 0x118);
}
_Script_CoreUObject::Class* _Script_Engine::PoseAsset::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.PoseAsset");
    return result;
}
