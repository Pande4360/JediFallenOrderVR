#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "AnimParentNodeAssetOverride.hpp"
#include "AnimationAsset.hpp"
_Script_Engine::AnimationAsset*& _Script_Engine::AnimParentNodeAssetOverride::get_NewAsset() {
    return *(_Script_Engine::AnimationAsset**)((uintptr_t)this + 0x0);
}
void* _Script_Engine::AnimParentNodeAssetOverride::get_ParentNodeGuid() {
    return (void*)((uintptr_t)this + 0x8);
}
_Script_CoreUObject::Class* _Script_Engine::AnimParentNodeAssetOverride::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.AnimParentNodeAssetOverride");
    return result;
}
