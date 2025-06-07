#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\TickFunction.hpp"
#include "RsAbilitySystemTickFunction.hpp"
_Script_CoreUObject::Class* _Script_SwGame::RsAbilitySystemTickFunction::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/SwGame.RsAbilitySystemTickFunction");
    return result;
}
