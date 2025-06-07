#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\Actor.hpp"
#include "RsSplineCameraDefinition.hpp"
#include "RsSplineCameraOrigin.hpp"
_Script_RsGameTechRT::RsSplineCameraDefinition*& _Script_RsGameTechRT::RsSplineCameraOrigin::get_SplineCameraDefinition() {
    return *(_Script_RsGameTechRT::RsSplineCameraDefinition**)((uintptr_t)this + 0x368);
}
_Script_CoreUObject::Class* _Script_RsGameTechRT::RsSplineCameraOrigin::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/RsGameTechRT.RsSplineCameraOrigin");
    return result;
}
