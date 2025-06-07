#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "AnimNotify.hpp"
#include "AnimNotify_PauseClothingSimulation.hpp"
_Script_CoreUObject::Class* _Script_Engine::AnimNotify_PauseClothingSimulation::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.AnimNotify_PauseClothingSimulation");
    return result;
}
