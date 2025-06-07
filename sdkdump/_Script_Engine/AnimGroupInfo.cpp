#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "AnimGroupInfo.hpp"
void* _Script_Engine::AnimGroupInfo::get_Name() {
    return (void*)((uintptr_t)this + 0x0);
}
void* _Script_Engine::AnimGroupInfo::get_Color() {
    return (void*)((uintptr_t)this + 0x8);
}
_Script_CoreUObject::Class* _Script_Engine::AnimGroupInfo::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.AnimGroupInfo");
    return result;
}
