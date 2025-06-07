#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "AnimNode_ApplyMeshSpaceAdditive.hpp"
#include "AnimNode_Base.hpp"
void* _Script_Engine::AnimNode_ApplyMeshSpaceAdditive::get_base() {
    return (void*)((uintptr_t)this + 0x30);
}
float& _Script_Engine::AnimNode_ApplyMeshSpaceAdditive::get_Alpha() {
    return *(float*)((uintptr_t)this + 0x50);
}
void* _Script_Engine::AnimNode_ApplyMeshSpaceAdditive::get_Additive() {
    return (void*)((uintptr_t)this + 0x40);
}
void* _Script_Engine::AnimNode_ApplyMeshSpaceAdditive::get_AlphaScaleBias() {
    return (void*)((uintptr_t)this + 0x54);
}
int32_t& _Script_Engine::AnimNode_ApplyMeshSpaceAdditive::get_LODThreshold() {
    return *(int32_t*)((uintptr_t)this + 0x5c);
}
float& _Script_Engine::AnimNode_ApplyMeshSpaceAdditive::get_ActualAlpha() {
    return *(float*)((uintptr_t)this + 0x60);
}
_Script_CoreUObject::Class* _Script_Engine::AnimNode_ApplyMeshSpaceAdditive::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.AnimNode_ApplyMeshSpaceAdditive");
    return result;
}
