#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "RsGeoLocator.hpp"
_Script_CoreUObject::Class* _Script_RsTechRT::RsGeoLocator::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/RsTechRT.RsGeoLocator");
    return result;
}
