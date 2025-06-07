#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "RsBlankAnimData.hpp"
#include "RsDirectionalAnimData.hpp"
_Script_CoreUObject::Class* _Script_RsGameTechRT::RsBlankAnimData::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/RsGameTechRT.RsBlankAnimData");
    return result;
}
