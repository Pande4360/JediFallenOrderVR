#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "RsIKDisableHipsOffsetModifier.hpp"
#include "RsIKModifier.hpp"
_Script_CoreUObject::Class* _Script_RsGameTechRT::RsIKDisableHipsOffsetModifier::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/RsGameTechRT.RsIKDisableHipsOffsetModifier");
    return result;
}
