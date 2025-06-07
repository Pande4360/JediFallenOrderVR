#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "PerBoneBlendWeights.hpp"
void* _Script_Engine::PerBoneBlendWeights::get_BoneBlendWeights() {
    return (void*)((uintptr_t)this + 0x0);
}
_Script_CoreUObject::Class* _Script_Engine::PerBoneBlendWeights::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.PerBoneBlendWeights");
    return result;
}
