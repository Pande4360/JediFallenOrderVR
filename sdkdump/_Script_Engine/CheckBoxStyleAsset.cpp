#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "CheckBoxStyleAsset.hpp"
void* _Script_Engine::CheckBoxStyleAsset::get_CheckBoxStyle() {
    return (void*)((uintptr_t)this + 0x28);
}
_Script_CoreUObject::Class* _Script_Engine::CheckBoxStyleAsset::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.CheckBoxStyleAsset");
    return result;
}
