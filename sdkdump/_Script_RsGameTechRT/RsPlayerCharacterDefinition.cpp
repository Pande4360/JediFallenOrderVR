#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "RsCharacterDefinition.hpp"
#include "RsPlayerCharacterDefinition.hpp"
_Script_CoreUObject::Class* _Script_RsGameTechRT::RsPlayerCharacterDefinition::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/RsGameTechRT.RsPlayerCharacterDefinition");
    return result;
}
