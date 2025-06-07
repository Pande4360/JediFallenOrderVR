#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\DataAsset.hpp"
#include "RsDefenseDefinition.hpp"
_Script_CoreUObject::Class* _Script_RsGameTechRT::RsDefenseDefinition::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/RsGameTechRT.RsDefenseDefinition");
    return result;
}
