#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "AnimationActiveTransitionEntry.hpp"
#include "BlendProfile.hpp"
_Script_Engine::BlendProfile*& _Script_Engine::AnimationActiveTransitionEntry::get_BlendProfile() {
    return *(_Script_Engine::BlendProfile**)((uintptr_t)this + 0x88);
}
_Script_CoreUObject::Class* _Script_Engine::AnimationActiveTransitionEntry::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.AnimationActiveTransitionEntry");
    return result;
}
