#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "AnimNotifyState.hpp"
#include "AnimNotifyState_EnumName.hpp"
_Script_CoreUObject::Class* _Script_Engine::AnimNotifyState_EnumName::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.AnimNotifyState_EnumName");
    return result;
}
