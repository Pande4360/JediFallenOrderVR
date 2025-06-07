#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "RsHitImpactPointOverride.hpp"
_Script_CoreUObject::Class* _Script_RsGameTechRT::RsHitImpactPointOverride::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/RsGameTechRT.RsHitImpactPointOverride");
    return result;
}
