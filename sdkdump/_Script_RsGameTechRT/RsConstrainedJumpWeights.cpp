#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "RsConstrainedJumpWeights.hpp"
void* _Script_RsGameTechRT::RsConstrainedJumpWeights::get_JumpDirectionsAndWeights() {
    return (void*)((uintptr_t)this + 0x0);
}
_Script_CoreUObject::Class* _Script_RsGameTechRT::RsConstrainedJumpWeights::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/RsGameTechRT.RsConstrainedJumpWeights");
    return result;
}
