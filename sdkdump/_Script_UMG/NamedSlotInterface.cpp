#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Interface.hpp"
#include "NamedSlotInterface.hpp"
_Script_CoreUObject::Class* _Script_UMG::NamedSlotInterface::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/UMG.NamedSlotInterface");
    return result;
}
