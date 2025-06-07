#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "CustomProfile.hpp"
_Script_CoreUObject::Class* _Script_Engine::CustomProfile::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.CustomProfile");
    return result;
}
void* _Script_Engine::CustomProfile::get_Name() {
    return (void*)((uintptr_t)this + 0x0);
}
void* _Script_Engine::CustomProfile::get_CustomResponses() {
    return (void*)((uintptr_t)this + 0x8);
}
