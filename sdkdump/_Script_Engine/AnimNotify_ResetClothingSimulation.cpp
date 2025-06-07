#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "AnimNotify.hpp"
#include "AnimNotify_ResetClothingSimulation.hpp"
_Script_CoreUObject::Class* _Script_Engine::AnimNotify_ResetClothingSimulation::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.AnimNotify_ResetClothingSimulation");
    return result;
}
