#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "BlueprintCore.hpp"
void* _Script_Engine::BlueprintCore::get_SkeletonGeneratedClass() {
    return (void*)((uintptr_t)this + 0x28);
}
void* _Script_Engine::BlueprintCore::get_GeneratedClass() {
    return (void*)((uintptr_t)this + 0x30);
}
void* _Script_Engine::BlueprintCore::get_BlueprintGuid() {
    return (void*)((uintptr_t)this + 0x3c);
}
bool _Script_Engine::BlueprintCore::get_bLegacyNeedToPurgeSkelRefs() {
    return (*(uint8_t*)((uintptr_t)this + 0x38 + 0)) & 1 != 0;
}
void _Script_Engine::BlueprintCore::set_bLegacyNeedToPurgeSkelRefs(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x38 + 0);
    *(uint8_t*)((uintptr_t)this + 0x38 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_CoreUObject::Class* _Script_Engine::BlueprintCore::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.BlueprintCore");
    return result;
}
bool _Script_Engine::BlueprintCore::get_bLegacyGeneratedClassIsAuthoritative() {
    return (*(uint8_t*)((uintptr_t)this + 0x39 + 0)) & 1 != 0;
}
void _Script_Engine::BlueprintCore::set_bLegacyGeneratedClassIsAuthoritative(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x39 + 0);
    *(uint8_t*)((uintptr_t)this + 0x39 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
