#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "AnimationPotentialTransition.hpp"
_Script_CoreUObject::Class* _Script_Engine::AnimationPotentialTransition::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.AnimationPotentialTransition");
    return result;
}
