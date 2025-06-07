#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "ComponentSpacePose.hpp"
void* _Script_Engine::ComponentSpacePose::get_Transforms() {
    return (void*)((uintptr_t)this + 0x0);
}
void* _Script_Engine::ComponentSpacePose::get_Names() {
    return (void*)((uintptr_t)this + 0x10);
}
_Script_CoreUObject::Class* _Script_Engine::ComponentSpacePose::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.ComponentSpacePose");
    return result;
}
