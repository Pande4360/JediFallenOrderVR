#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "RsCameraOutputs.hpp"
float& _Script_RsGameTechRT::RsCameraOutputs::get_FOVOffset() {
    return *(float*)((uintptr_t)this + 0x64);
}
void* _Script_RsGameTechRT::RsCameraOutputs::get_Location() {
    return (void*)((uintptr_t)this + 0x0);
}
void* _Script_RsGameTechRT::RsCameraOutputs::get_RotationOffsetWS() {
    return (void*)((uintptr_t)this + 0x4c);
}
void* _Script_RsGameTechRT::RsCameraOutputs::get_Rotation() {
    return (void*)((uintptr_t)this + 0xc);
}
float& _Script_RsGameTechRT::RsCameraOutputs::get_PostProcessBlendWeight() {
    return *(float*)((uintptr_t)this + 0x74);
}
float& _Script_RsGameTechRT::RsCameraOutputs::get_FOV() {
    return *(float*)((uintptr_t)this + 0x18);
}
void* _Script_RsGameTechRT::RsCameraOutputs::get_LocationOffsetCS() {
    return (void*)((uintptr_t)this + 0x1c);
}
void* _Script_RsGameTechRT::RsCameraOutputs::get_LocationOffsetCSYawOnly() {
    return (void*)((uintptr_t)this + 0x28);
}
void* _Script_RsGameTechRT::RsCameraOutputs::get_LocationOffsetWS() {
    return (void*)((uintptr_t)this + 0x34);
}
void* _Script_RsGameTechRT::RsCameraOutputs::get_RotationOffsetCS() {
    return (void*)((uintptr_t)this + 0x40);
}
void* _Script_RsGameTechRT::RsCameraOutputs::get_FocusLocationOffset() {
    return (void*)((uintptr_t)this + 0x58);
}
void* _Script_RsGameTechRT::RsCameraOutputs::get_FloorNormal() {
    return (void*)((uintptr_t)this + 0x68);
}
void* _Script_RsGameTechRT::RsCameraOutputs::get_PostProcessSettings() {
    return (void*)((uintptr_t)this + 0x80);
}
_Script_CoreUObject::Class* _Script_RsGameTechRT::RsCameraOutputs::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/RsGameTechRT.RsCameraOutputs");
    return result;
}
