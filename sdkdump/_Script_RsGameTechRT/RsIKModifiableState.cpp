#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "RsIKModifiableState.hpp"
_Script_CoreUObject::Class* _Script_RsGameTechRT::RsIKModifiableState::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/RsGameTechRT.RsIKModifiableState");
    return result;
}
