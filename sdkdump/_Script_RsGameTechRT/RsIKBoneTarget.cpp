#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "RsIKBoneTarget.hpp"
void* _Script_RsGameTechRT::RsIKBoneTarget::get_PositionComponentSpace() {
    return (void*)((uintptr_t)this + 0xc);
}
float& _Script_RsGameTechRT::RsIKBoneTarget::get_Alpha() {
    return *(float*)((uintptr_t)this + 0x8);
}
void* _Script_RsGameTechRT::RsIKBoneTarget::get_RotationComponentSpace() {
    return (void*)((uintptr_t)this + 0x18);
}
_Script_CoreUObject::Class* _Script_RsGameTechRT::RsIKBoneTarget::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/RsGameTechRT.RsIKBoneTarget");
    return result;
}
