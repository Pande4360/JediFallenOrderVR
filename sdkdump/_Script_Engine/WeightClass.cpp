#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "WeightClass.hpp"
void* _Script_Engine::WeightClass::get_Type() {
    return (void*)((uintptr_t)this + 0x0);
}
float& _Script_Engine::WeightClass::get_WeightInKG() {
    return *(float*)((uintptr_t)this + 0x4);
}
_Script_CoreUObject::Class* _Script_Engine::WeightClass::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.WeightClass");
    return result;
}
