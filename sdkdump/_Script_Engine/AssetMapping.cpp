#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "AnimationAsset.hpp"
#include "AssetMapping.hpp"
_Script_Engine::AnimationAsset*& _Script_Engine::AssetMapping::get_SourceAsset() {
    return *(_Script_Engine::AnimationAsset**)((uintptr_t)this + 0x0);
}
_Script_Engine::AnimationAsset*& _Script_Engine::AssetMapping::get_TargetAsset() {
    return *(_Script_Engine::AnimationAsset**)((uintptr_t)this + 0x8);
}
_Script_CoreUObject::Class* _Script_Engine::AssetMapping::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.AssetMapping");
    return result;
}
