#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "SpriteCategoryInfo.hpp"
_Script_CoreUObject::Class* _Script_Engine::SpriteCategoryInfo::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.SpriteCategoryInfo");
    return result;
}
void* _Script_Engine::SpriteCategoryInfo::get_Description() {
    return (void*)((uintptr_t)this + 0x20);
}
void* _Script_Engine::SpriteCategoryInfo::get_Category() {
    return (void*)((uintptr_t)this + 0x0);
}
void* _Script_Engine::SpriteCategoryInfo::get_DisplayName() {
    return (void*)((uintptr_t)this + 0x8);
}
