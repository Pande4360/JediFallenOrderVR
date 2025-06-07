#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Interface.hpp"
#include "RsSmartTagOwnerInterface.hpp"
_Script_CoreUObject::Class* _Script_GameplayTags::RsSmartTagOwnerInterface::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/GameplayTags.RsSmartTagOwnerInterface");
    return result;
}
