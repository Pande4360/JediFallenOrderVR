#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Interface.hpp"
#include "IRsCameraViewTarget.hpp"
_Script_CoreUObject::Class* _Script_RsGameTechRT::IRsCameraViewTarget::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/RsGameTechRT.IRsCameraViewTarget");
    return result;
}
