#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "AnimTickRecord.hpp"
#include "AnimationAsset.hpp"
_Script_Engine::AnimationAsset*& _Script_Engine::AnimTickRecord::get_SourceAsset() {
    return *(_Script_Engine::AnimationAsset**)((uintptr_t)this + 0x0);
}
_Script_CoreUObject::Class* _Script_Engine::AnimTickRecord::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.AnimTickRecord");
    return result;
}
