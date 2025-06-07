#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_NavigationSystem\AbstractNavData.hpp"
#include "RsFlyingAbstractNavData.hpp"
_Script_CoreUObject::Class* _Script_RsGameTechRT::RsFlyingAbstractNavData::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/RsGameTechRT.RsFlyingAbstractNavData");
    return result;
}
