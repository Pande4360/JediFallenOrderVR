#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "RsCombatState.hpp"
#include "RsReactionState.hpp"
_Script_CoreUObject::Class* _Script_RsGameTechRT::RsReactionState::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/RsGameTechRT.RsReactionState");
    return result;
}
