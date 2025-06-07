#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "EdGraphNode.hpp"
#include "PoseWatch.hpp"
_Script_Engine::EdGraphNode*& _Script_Engine::PoseWatch::get_Node() {
    return *(_Script_Engine::EdGraphNode**)((uintptr_t)this + 0x28);
}
void* _Script_Engine::PoseWatch::get_PoseWatchColour() {
    return (void*)((uintptr_t)this + 0x30);
}
_Script_CoreUObject::Class* _Script_Engine::PoseWatch::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.PoseWatch");
    return result;
}
