#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "RsConstrainedJumpPadMapping.hpp"
void* _Script_RsGameTechRT::RsConstrainedJumpPadMapping::get_JumpDirection() {
    return (void*)((uintptr_t)this + 0xc);
}
float& _Script_RsGameTechRT::RsConstrainedJumpPadMapping::get_ExpectedPadAngle() {
    return *(float*)((uintptr_t)this + 0x0);
}
void* _Script_RsGameTechRT::RsConstrainedJumpPadMapping::get_ValidAngleDifferenceRange() {
    return (void*)((uintptr_t)this + 0x4);
}
_Script_CoreUObject::Class* _Script_RsGameTechRT::RsConstrainedJumpPadMapping::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/RsGameTechRT.RsConstrainedJumpPadMapping");
    return result;
}
