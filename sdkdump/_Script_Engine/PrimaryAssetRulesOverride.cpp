#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "PrimaryAssetRulesOverride.hpp"
void* _Script_Engine::PrimaryAssetRulesOverride::get_PrimaryAssetId() {
    return (void*)((uintptr_t)this + 0x0);
}
void* _Script_Engine::PrimaryAssetRulesOverride::get_Rules() {
    return (void*)((uintptr_t)this + 0x10);
}
_Script_CoreUObject::Class* _Script_Engine::PrimaryAssetRulesOverride::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.PrimaryAssetRulesOverride");
    return result;
}
