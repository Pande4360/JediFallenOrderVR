#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "A2CSPose.hpp"
#include "A2Pose.hpp"
void* _Script_Engine::A2CSPose::get_ComponentSpaceFlags() {
    return (void*)((uintptr_t)this + 0x18);
}
_Script_CoreUObject::Class* _Script_Engine::A2CSPose::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.A2CSPose");
    return result;
}
