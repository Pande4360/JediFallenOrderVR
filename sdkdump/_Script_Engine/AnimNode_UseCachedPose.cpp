#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "AnimNode_Base.hpp"
#include "AnimNode_UseCachedPose.hpp"
void* _Script_Engine::AnimNode_UseCachedPose::get_LinkToCachingNode() {
    return (void*)((uintptr_t)this + 0x30);
}
void* _Script_Engine::AnimNode_UseCachedPose::get_CachePoseName() {
    return (void*)((uintptr_t)this + 0x40);
}
_Script_CoreUObject::Class* _Script_Engine::AnimNode_UseCachedPose::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.AnimNode_UseCachedPose");
    return result;
}
