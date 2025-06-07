#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "AnimBlueprint.hpp"
#include "Blueprint.hpp"
#include "Skeleton.hpp"
_Script_CoreUObject::Class* _Script_Engine::AnimBlueprint::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.AnimBlueprint");
    return result;
}
_Script_Engine::Skeleton*& _Script_Engine::AnimBlueprint::get_TargetSkeleton() {
    return *(_Script_Engine::Skeleton**)((uintptr_t)this + 0xe8);
}
bool _Script_Engine::AnimBlueprint::get_bUseMultiThreadedAnimationUpdate() {
    return (*(uint8_t*)((uintptr_t)this + 0x100 + 0)) & 1 != 0;
}
void* _Script_Engine::AnimBlueprint::get_Groups() {
    return (void*)((uintptr_t)this + 0xf0);
}
void _Script_Engine::AnimBlueprint::set_bUseMultiThreadedAnimationUpdate(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x100 + 0);
    *(uint8_t*)((uintptr_t)this + 0x100 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_Engine::AnimBlueprint::get_bWarnAboutBlueprintUsage() {
    return (*(uint8_t*)((uintptr_t)this + 0x101 + 0)) & 1 != 0;
}
void _Script_Engine::AnimBlueprint::set_bWarnAboutBlueprintUsage(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x101 + 0);
    *(uint8_t*)((uintptr_t)this + 0x101 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
