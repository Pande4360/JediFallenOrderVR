#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "RsBTDecorator_CheckSignedVerticalDistanceTo.hpp"
#include "RsBTDecorator_RelativeToLocationBase.hpp"
_Script_CoreUObject::Class* _Script_RsGameTechRT::RsBTDecorator_CheckSignedVerticalDistanceTo::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/RsGameTechRT.RsBTDecorator_CheckSignedVerticalDistanceTo");
    return result;
}
void* _Script_RsGameTechRT::RsBTDecorator_CheckSignedVerticalDistanceTo::get_Comparison() {
    return (void*)((uintptr_t)this + 0x90);
}
float& _Script_RsGameTechRT::RsBTDecorator_CheckSignedVerticalDistanceTo::get_Distance() {
    return *(float*)((uintptr_t)this + 0x94);
}
