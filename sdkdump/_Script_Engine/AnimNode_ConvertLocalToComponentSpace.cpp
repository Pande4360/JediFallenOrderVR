#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "AnimNode_Base.hpp"
#include "AnimNode_ConvertLocalToComponentSpace.hpp"
void* _Script_Engine::AnimNode_ConvertLocalToComponentSpace::get_LocalPose() {
    return (void*)((uintptr_t)this + 0x30);
}
_Script_CoreUObject::Class* _Script_Engine::AnimNode_ConvertLocalToComponentSpace::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.AnimNode_ConvertLocalToComponentSpace");
    return result;
}
