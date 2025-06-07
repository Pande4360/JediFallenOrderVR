#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "AnimNode_Base.hpp"
#include "AnimNode_ConvertComponentToLocalSpace.hpp"
void* _Script_Engine::AnimNode_ConvertComponentToLocalSpace::get_ComponentPose() {
    return (void*)((uintptr_t)this + 0x30);
}
_Script_CoreUObject::Class* _Script_Engine::AnimNode_ConvertComponentToLocalSpace::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.AnimNode_ConvertComponentToLocalSpace");
    return result;
}
