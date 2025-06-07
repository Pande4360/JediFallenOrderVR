#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "AnimationAsset.hpp"
#include "Skeleton.hpp"
_Script_Engine::Skeleton*& _Script_Engine::AnimationAsset::get_Skeleton() {
    return *(_Script_Engine::Skeleton**)((uintptr_t)this + 0x38);
}
void* _Script_Engine::AnimationAsset::get_AssetUserData() {
    return (void*)((uintptr_t)this + 0x70);
}
void* _Script_Engine::AnimationAsset::get_MetaData() {
    return (void*)((uintptr_t)this + 0x60);
}
_Script_CoreUObject::Class* _Script_Engine::AnimationAsset::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.AnimationAsset");
    return result;
}
