#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "RsZiplineBlendTimes.hpp"
float& _Script_RsGameTechRT::RsZiplineBlendTimes::get_PositionBlendInTime() {
    return *(float*)((uintptr_t)this + 0x0);
}
float& _Script_RsGameTechRT::RsZiplineBlendTimes::get_OrientationBlendInTime() {
    return *(float*)((uintptr_t)this + 0x4);
}
_Script_CoreUObject::Class* _Script_RsGameTechRT::RsZiplineBlendTimes::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/RsGameTechRT.RsZiplineBlendTimes");
    return result;
}
