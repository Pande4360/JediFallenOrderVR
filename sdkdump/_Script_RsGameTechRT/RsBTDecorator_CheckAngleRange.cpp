#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "RsBTDecorator_CheckAngleRange.hpp"
#include "RsBTDecorator_RelativeToLocationBase.hpp"
float& _Script_RsGameTechRT::RsBTDecorator_CheckAngleRange::get_OffsetAngle() {
    return *(float*)((uintptr_t)this + 0x90);
}
float& _Script_RsGameTechRT::RsBTDecorator_CheckAngleRange::get_HalfAngle() {
    return *(float*)((uintptr_t)this + 0x94);
}
_Script_CoreUObject::Class* _Script_RsGameTechRT::RsBTDecorator_CheckAngleRange::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/RsGameTechRT.RsBTDecorator_CheckAngleRange");
    return result;
}
