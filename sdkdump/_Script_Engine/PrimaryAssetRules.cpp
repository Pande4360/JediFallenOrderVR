#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "PrimaryAssetRules.hpp"
void _Script_Engine::PrimaryAssetRules::set_bApplyRecursively(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x4 + 0);
    *(uint8_t*)((uintptr_t)this + 0x4 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
int32_t& _Script_Engine::PrimaryAssetRules::get_Priority() {
    return *(int32_t*)((uintptr_t)this + 0x0);
}
_Script_CoreUObject::Class* _Script_Engine::PrimaryAssetRules::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.PrimaryAssetRules");
    return result;
}
bool _Script_Engine::PrimaryAssetRules::get_bApplyRecursively() {
    return (*(uint8_t*)((uintptr_t)this + 0x4 + 0)) & 1 != 0;
}
int32_t& _Script_Engine::PrimaryAssetRules::get_ChunkId() {
    return *(int32_t*)((uintptr_t)this + 0x8);
}
void* _Script_Engine::PrimaryAssetRules::get_CookRule() {
    return (void*)((uintptr_t)this + 0xc);
}
