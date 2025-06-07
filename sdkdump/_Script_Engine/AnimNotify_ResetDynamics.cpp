#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "AnimNotify.hpp"
#include "AnimNotify_ResetDynamics.hpp"
_Script_CoreUObject::Class* _Script_Engine::AnimNotify_ResetDynamics::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.AnimNotify_ResetDynamics");
    return result;
}
