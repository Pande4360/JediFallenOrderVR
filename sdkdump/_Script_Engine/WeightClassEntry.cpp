#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "WeightClassEntry.hpp"
void* _Script_Engine::WeightClassEntry::get_Name() {
    return (void*)((uintptr_t)this + 0x8);
}
void* _Script_Engine::WeightClassEntry::get_Type() {
    return (void*)((uintptr_t)this + 0x0);
}
float& _Script_Engine::WeightClassEntry::get_Weight() {
    return *(float*)((uintptr_t)this + 0x10);
}
_Script_CoreUObject::Class* _Script_Engine::WeightClassEntry::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.WeightClassEntry");
    return result;
}
