#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "ReferencePose.hpp"
void* _Script_Engine::ReferencePose::get_PoseName() {
    return (void*)((uintptr_t)this + 0x0);
}
void* _Script_Engine::ReferencePose::get_ReferencePose() {
    return (void*)((uintptr_t)this + 0x8);
}
_Script_CoreUObject::Class* _Script_Engine::ReferencePose::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.ReferencePose");
    return result;
}
